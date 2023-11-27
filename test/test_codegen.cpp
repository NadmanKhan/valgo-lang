#include "antlr4-runtime.h"
#include "ValgoParser.h"
#include "ValgoLexer.h"
#include "AST.h"
#include "ASTBuilderVisitor.h"

using namespace antlr4;

int main() {

    std::cout << "hello\n";

    // Parse `example-program.valgo` and print the parse tree
    ANTLRFileStream fileStream;
    fileStream.loadFromFile("example_program.valgo");
    ValgoLexer lexer(&fileStream);
    CommonTokenStream tokens(&lexer);
    tokens.fill();
    for (auto token : tokens.getTokens()) {
        std::cout << token->toString() << std::endl;
    }

    ValgoParser parser(&tokens);
    ValgoParser::ProgramContext *programTree = parser.program();
    std::cout << programTree->toStringTree(&parser) << std::endl << std::endl;

    // Build AST
    ASTBuilderVisitor astBuilderVisitor;
    auto ast = any_cast<ProgramAST *>(astBuilderVisitor.visitProgram(programTree));
    std::cout << ast->toString() << std::endl;

    SymbolTable symbolTable;
    std::cout << ast->codegen(symbolTable) << std::endl;

    return 0;
}
