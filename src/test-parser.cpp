//
// Created by nadman on 11/1/23.
//

#include "antlr4-runtime.h"
#include "parser/ValgoParser.h"
#include "parser/ValgoLexer.h"
#include "parser/ValgoListener.h"

using namespace antlr4;

int main() {

    std::cout << "hello\n";

    // Parse `example-program.valgo` and print the parse tree
    ANTLRFileStream fileStream;
    fileStream.loadFromFile("../example-program.valgo");
    ValgoLexer lexer(&fileStream);
    CommonTokenStream tokens(&lexer);
    tokens.fill();
    for (auto token : tokens.getTokens()) {
        std::cout << token->toString() << std::endl;
    }

    ValgoParser parser(&tokens);
    tree::ParseTree *tree = parser.program();
    std::cout << tree->toStringTree(&parser) << std::endl << std::endl;

    return 0;
}
