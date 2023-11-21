#ifndef VALGOASTBUILDERVISITOR_H
#define VALGOASTBUILDERVISITOR_H

#include "ValgoBaseVisitor.h"
#include "ValgoAST.h"

class ValgoASTBuilderVisitor : public ValgoBaseVisitor
{
public:
    std::any visitProg(ValgoParser::ProgContext *ctx) override;
    std::any visitProc(ValgoParser::ProcContext *ctx) override;
    std::any visitFunc(ValgoParser::FuncContext *ctx) override;
    std::any visitProto(ValgoParser::ProtoContext *ctx) override;
    std::any visitBlock(ValgoParser::BlockContext *ctx) override;
    std::any visitStmt(ValgoParser::StmtContext *ctx) override;
    std::any visitExpr(ValgoParser::ExprContext *ctx) override;
    std::any visitAtom(ValgoParser::AtomContext *ctx) override;
    std::any visitCall(ValgoParser::CallContext *ctx) override;
    std::any visitIfElse(ValgoParser::IfElseContext *ctx) override;
    std::any visitDecl(ValgoParser::DeclContext *ctx) override;
    std::any visitAssign(ValgoParser::AssignContext *ctx) override;
    std::any visitPrint(ValgoParser::PrintContext *ctx) override;
    std::any visitReturn(ValgoParser::ReturnContext *ctx) override;
public:
    ValgoASTBuilderVisitor() = default;
};


#endif // VALGOASTBUILDERVISITOR_H
