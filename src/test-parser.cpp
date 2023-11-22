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
    ANTLRInputStream input("1  + 2");
    ValgoLexer lexer(&input);
    CommonTokenStream tokens(&lexer);

    tokens.fill();
    for (auto token : tokens.getTokens()) {
        std::cout << token->toString() << std::endl;
    }

    ValgoParser parser(&tokens);
    tree::ParseTree* tree = parser.expr();

    std::cout << tree->toStringTree(&parser) << std::endl << std::endl;

    // Visit the tree with a visitor
    // ValgoASTBuilderVisitor visitor;
    // visitor.visit(tree);

    return 0;
}
