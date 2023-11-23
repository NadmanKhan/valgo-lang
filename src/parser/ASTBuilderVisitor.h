#ifndef ASTBUILDERVISITOR_H
#define ASTBUILDERVISITOR_H

#include "AST.h"
#include "ValgoBaseVisitor.h"
#include "ValgoParser.h"

class ASTBuilderVisitor: public ValgoBaseVisitor
{
public:
    std::any visitProg(ValgoParser::ProgContext *ctx) override;
    std::any visitFunc(ValgoParser::FuncContext *ctx) override;
    std::any visitProc(ValgoParser::ProcContext *ctx) override;
    std::any visitProto(ValgoParser::ProtoContext *ctx) override;
    std::any visitBlock(ValgoParser::BlockContext *ctx) override;
    std::any visitExitStmt(ValgoParser::ExitStmtContext *ctx) override;
    std::any visitReturnStmt(ValgoParser::ReturnStmtContext *ctx) override;
    std::any visitDeclStmt(ValgoParser::DeclStmtContext *ctx) override;
    std::any visitAssignStmt(ValgoParser::AssignStmtContext *ctx) override;
    std::any visitPrintStmt(ValgoParser::PrintStmtContext *ctx) override;
    std::any visitProcCallStmt(ValgoParser::ProcCallStmtContext *ctx) override;
    std::any visitIfElseStmt(ValgoParser::IfElseStmtContext *ctx) override;
    std::any visitBlockStmt(ValgoParser::BlockStmtContext *ctx) override;
    std::any visitIfElse(ValgoParser::IfElseContext *ctx) override;
    std::any visitExpr(ValgoParser::ExprContext *ctx) override;
    std::any visitIntLiteralExpr(ValgoParser::IntLiteralExprContext *ctx) override;
    std::any visitVariableExpr(ValgoParser::VariableExprContext *ctx) override;
    std::any visitParenthsizedExpr(ValgoParser::ParenthsizedExprContext *ctx) override;
    std::any visitFuncCallExpr(ValgoParser::FuncCallExprContext *ctx) override;

};


#endif //ASTBUILDERVISITOR_H
