#include "ASTBuilderVisitor.h"

std::any ASTBuilderVisitor::visitProg(ValgoParser::ProgContext *ctx)
{
    return ValgoBaseVisitor::visitProg(ctx);
}

std::any ASTBuilderVisitor::visitFunc(ValgoParser::FuncContext *ctx)
{
    return ValgoBaseVisitor::visitFunc(ctx);
}

std::any ASTBuilderVisitor::visitProc(ValgoParser::ProcContext *ctx)
{
    return ValgoBaseVisitor::visitProc(ctx);
}

std::any ASTBuilderVisitor::visitProto(ValgoParser::ProtoContext *ctx)
{
    return ValgoBaseVisitor::visitProto(ctx);
}

std::any ASTBuilderVisitor::visitBlock(ValgoParser::BlockContext *ctx)
{
    return ValgoBaseVisitor::visitBlock(ctx);
}

std::any ASTBuilderVisitor::visitExitStmt(ValgoParser::ExitStmtContext *ctx)
{
    return ValgoBaseVisitor::visitExitStmt(ctx);
}

std::any ASTBuilderVisitor::visitReturnStmt(ValgoParser::ReturnStmtContext *ctx)
{
    return ValgoBaseVisitor::visitReturnStmt(ctx);
}

std::any ASTBuilderVisitor::visitDeclStmt(ValgoParser::DeclStmtContext *ctx)
{
    return ValgoBaseVisitor::visitDeclStmt(ctx);
}

std::any ASTBuilderVisitor::visitAssignStmt(ValgoParser::AssignStmtContext *ctx)
{
    return ValgoBaseVisitor::visitAssignStmt(ctx);
}

std::any ASTBuilderVisitor::visitPrintStmt(ValgoParser::PrintStmtContext *ctx)
{
    return ValgoBaseVisitor::visitPrintStmt(ctx);
}

std::any ASTBuilderVisitor::visitProcCallStmt(ValgoParser::ProcCallStmtContext *ctx)
{
    return ValgoBaseVisitor::visitProcCallStmt(ctx);
}

std::any ASTBuilderVisitor::visitIfElseStmt(ValgoParser::IfElseStmtContext *ctx)
{
    return ValgoBaseVisitor::visitIfElseStmt(ctx);
}

std::any ASTBuilderVisitor::visitBlockStmt(ValgoParser::BlockStmtContext *ctx)
{
    return ValgoBaseVisitor::visitBlockStmt(ctx);
}

std::any ASTBuilderVisitor::visitIfElse(ValgoParser::IfElseContext *ctx)
{
    return ValgoBaseVisitor::visitIfElse(ctx);
}

std::any ASTBuilderVisitor::visitExpr(ValgoParser::ExprContext *ctx)
{
    return ValgoBaseVisitor::visitExpr(ctx);
}

std::any ASTBuilderVisitor::visitIntLiteralExpr(ValgoParser::IntLiteralExprContext *ctx)
{
    return ValgoBaseVisitor::visitIntLiteralExpr(ctx);
}

std::any ASTBuilderVisitor::visitVariableExpr(ValgoParser::VariableExprContext *ctx)
{
    return ValgoBaseVisitor::visitVariableExpr(ctx);
}

std::any ASTBuilderVisitor::visitParenthsizedExpr(ValgoParser::ParenthsizedExprContext *ctx)
{
    return ValgoBaseVisitor::visitParenthsizedExpr(ctx);
}

std::any ASTBuilderVisitor::visitFuncCallExpr(ValgoParser::FuncCallExprContext *ctx)
{
    return ValgoBaseVisitor::visitFuncCallExpr(ctx);
}

