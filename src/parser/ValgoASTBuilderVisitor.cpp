#include "ValgoASTBuilderVisitor.h"

std::any ValgoASTBuilderVisitor::visitProg(ValgoParser::ProgContext *ctx)
{
    std::vector<std::unique_ptr<FuncAST>> funcNodes;
    for (auto func : ctx->func()) {
        auto funcNode = any_cast<FuncAST *>(visitFunc(func));
        assert(funcNode != nullptr);
        funcNodes.push_back(std::unique_ptr<FuncAST>(funcNode));
    }
    std::vector<std::unique_ptr<ProcAST>> procNodes;
    for (auto proc : ctx->proc()) {
        auto procNode = any_cast<ProcAST *>(visitProc(proc));
        assert(procNode != nullptr);
        procNodes.push_back(std::unique_ptr<ProcAST>(procNode));
    }
    return new ProgAST(std::move(funcNodes),
                       std::move(procNodes));
}

std::any ValgoASTBuilderVisitor::visitProc(ValgoParser::ProcContext *ctx)
{
    auto proto = any_cast<ProtoAST *>(visitProto(ctx->proto()));
    assert(proto != nullptr);
    auto block = any_cast<BlockAST *>(visitBlock(ctx->block()));
    assert(block != nullptr);
    return new ProcAST(std::move(std::unique_ptr<ProtoAST>(proto)),
                       std::move(std::unique_ptr<BlockAST>(block)));
}

std::any ValgoASTBuilderVisitor::visitProto(ValgoParser::ProtoContext *ctx)
{
    std::vector<std::string> args;
    for (auto id : ctx->ID()) {
        args.push_back(id->getText());
    }
    return new ProtoAST(ctx->ID(0)->getText(),
                        std::move(args));
}

std::any ValgoASTBuilderVisitor::visitBlock(ValgoParser::BlockContext *ctx)
{
    std::vector<std::unique_ptr<StmtAST>> stmtNodes;
    for (auto stmt : ctx->stmt()) {
        auto stmtNode = any_cast<StmtAST *>(visitStmt(stmt));
        assert(stmtNode != nullptr);
        stmtNodes.push_back(std::unique_ptr<StmtAST>(stmtNode));
    }
    return new BlockAST(std::move(stmtNodes));
}

std::any ValgoASTBuilderVisitor::visitStmt(ValgoParser::StmtContext *ctx)
{

}

std::any ValgoASTBuilderVisitor::visitExpr(ValgoParser::ExprContext *ctx)
{
    return ValgoBaseVisitor::visitExpr(ctx);
}
std::any ValgoASTBuilderVisitor::visitAtom(ValgoParser::AtomContext *ctx)
{
    return ValgoBaseVisitor::visitAtom(ctx);
}
std::any ValgoASTBuilderVisitor::visitCall(ValgoParser::CallContext *ctx)
{
    return ValgoBaseVisitor::visitCall(ctx);
}
std::any ValgoASTBuilderVisitor::visitIfElse(ValgoParser::IfElseContext *ctx)
{
    return ValgoBaseVisitor::visitIfElse(ctx);
}
std::any ValgoASTBuilderVisitor::visitDecl(ValgoParser::DeclContext *ctx)
{
    return ValgoBaseVisitor::visitDecl(ctx);
}
std::any ValgoASTBuilderVisitor::visitAssign(ValgoParser::AssignContext *ctx)
{
    return ValgoBaseVisitor::visitAssign(ctx);
}
std::any ValgoASTBuilderVisitor::visitPrint(ValgoParser::PrintContext *ctx)
{
    return ValgoBaseVisitor::visitPrint(ctx);
}
std::any ValgoASTBuilderVisitor::visitReturn(ValgoParser::ReturnContext *ctx)
{
    return ValgoBaseVisitor::visitReturn(ctx);
}
