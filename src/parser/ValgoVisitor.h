
// Generated from Valgo.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "ValgoParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by ValgoParser.
 */
class  ValgoVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by ValgoParser.
   */
    virtual std::any visitProg(ValgoParser::ProgContext *context) = 0;

    virtual std::any visitFunc(ValgoParser::FuncContext *context) = 0;

    virtual std::any visitProc(ValgoParser::ProcContext *context) = 0;

    virtual std::any visitProto(ValgoParser::ProtoContext *context) = 0;

    virtual std::any visitBlock(ValgoParser::BlockContext *context) = 0;

    virtual std::any visitExitStmt(ValgoParser::ExitStmtContext *context) = 0;

    virtual std::any visitReturnStmt(ValgoParser::ReturnStmtContext *context) = 0;

    virtual std::any visitDeclStmt(ValgoParser::DeclStmtContext *context) = 0;

    virtual std::any visitAssignStmt(ValgoParser::AssignStmtContext *context) = 0;

    virtual std::any visitPrintStmt(ValgoParser::PrintStmtContext *context) = 0;

    virtual std::any visitProcCallStmt(ValgoParser::ProcCallStmtContext *context) = 0;

    virtual std::any visitIfElseStmt(ValgoParser::IfElseStmtContext *context) = 0;

    virtual std::any visitBlockStmt(ValgoParser::BlockStmtContext *context) = 0;

    virtual std::any visitIfElse(ValgoParser::IfElseContext *context) = 0;

    virtual std::any visitExpr(ValgoParser::ExprContext *context) = 0;

    virtual std::any visitIntLiteralExpr(ValgoParser::IntLiteralExprContext *context) = 0;

    virtual std::any visitVariableExpr(ValgoParser::VariableExprContext *context) = 0;

    virtual std::any visitParenthsizedExpr(ValgoParser::ParenthsizedExprContext *context) = 0;

    virtual std::any visitFuncCallExpr(ValgoParser::FuncCallExprContext *context) = 0;


};

