
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
    virtual std::any visitBinaryExpr(ValgoParser::BinaryExprContext *context) = 0;

    virtual std::any visitAtomExpr(ValgoParser::AtomExprContext *context) = 0;

    virtual std::any visitParenExpr(ValgoParser::ParenExprContext *context) = 0;

    virtual std::any visitIntLiteral(ValgoParser::IntLiteralContext *context) = 0;

    virtual std::any visitVariable(ValgoParser::VariableContext *context) = 0;

    virtual std::any visitUnaryOp(ValgoParser::UnaryOpContext *context) = 0;

    virtual std::any visitFuncCall(ValgoParser::FuncCallContext *context) = 0;

    virtual std::any visitProto(ValgoParser::ProtoContext *context) = 0;

    virtual std::any visitReturnStmt(ValgoParser::ReturnStmtContext *context) = 0;

    virtual std::any visitDeclStmt(ValgoParser::DeclStmtContext *context) = 0;

    virtual std::any visitAssignStmt(ValgoParser::AssignStmtContext *context) = 0;

    virtual std::any visitPrintStmt(ValgoParser::PrintStmtContext *context) = 0;

    virtual std::any visitProcCallStmt(ValgoParser::ProcCallStmtContext *context) = 0;

    virtual std::any visitNormal(ValgoParser::NormalContext *context) = 0;

    virtual std::any visitIfElse(ValgoParser::IfElseContext *context) = 0;

    virtual std::any visitBlockElement(ValgoParser::BlockElementContext *context) = 0;

    virtual std::any visitOuterBlock(ValgoParser::OuterBlockContext *context) = 0;

    virtual std::any visitFunc(ValgoParser::FuncContext *context) = 0;

    virtual std::any visitProc(ValgoParser::ProcContext *context) = 0;

    virtual std::any visitProg(ValgoParser::ProgContext *context) = 0;


};

