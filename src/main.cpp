#include <cstdlib>
#include <fstream>
#include <string>
#include <antlr4-runtime.h>
#include "ASTBuilderVisitor.h"
#include "ValgoLexer.h"
#include "ValgoParser.h"

std::string transpile(antlr4::ANTLRFileStream fileStream)
{
    // lexical analysis
    ValgoLexer lexer{&fileStream};
    antlr4::CommonTokenStream tokens{&lexer};
    tokens.fill();

    // syntactic analysis
    ValgoParser parser{&tokens};
    ValgoParser::ProgramContext *tree{parser.program()};

    // build AST
    ASTBuilderVisitor astBuilderVisitor;
    auto ast = std::any_cast<ProgramAST*>(astBuilderVisitor.visitProgram(tree));

    // generate code
    SymbolTable symbolTable;
    return ast->codegen(symbolTable);
}


int main(const int argc, const char* const argv[])
{
    if (argc < 3) {
        std::cerr << "Usage: " << argv[0] << " <input-file.valgo> <output-file> [<keep-cxx-file>(yes/no)]\n";
        return EXIT_FAILURE;
    }

    antlr4::ANTLRFileStream fileStream;
    fileStream.loadFromFile(argv[1]);
    std::string cxxCode {transpile(fileStream)};

    std::ofstream os {"__tmp.cpp"};
    std::cerr << cxxCode << std::endl;
    os << cxxCode << std::endl;

    std::string command {"g++ -std=c++17 -o "};
    command += argv[2];
    command += " __tmp.cpp ";
    std::cout << command << std::endl;
    system(command.c_str());

//    if (!(argc >= 4 && std::string(argv[3]) != "yes"))
//        std::system("rm __tmp.cpp");
}
