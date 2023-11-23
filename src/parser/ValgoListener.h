
// Generated from Valgo.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "ValgoParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by ValgoParser.
 */
class  ValgoListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProg(ValgoParser::ProgContext *ctx) = 0;
  virtual void exitProg(ValgoParser::ProgContext *ctx) = 0;

  virtual void enterFunc(ValgoParser::FuncContext *ctx) = 0;
  virtual void exitFunc(ValgoParser::FuncContext *ctx) = 0;

  virtual void enterProc(ValgoParser::ProcContext *ctx) = 0;
  virtual void exitProc(ValgoParser::ProcContext *ctx) = 0;

  virtual void enterProto(ValgoParser::ProtoContext *ctx) = 0;
  virtual void exitProto(ValgoParser::ProtoContext *ctx) = 0;

  virtual void enterBlock(ValgoParser::BlockContext *ctx) = 0;
  virtual void exitBlock(ValgoParser::BlockContext *ctx) = 0;

  virtual void enterExitStmt(ValgoParser::ExitStmtContext *ctx) = 0;
  virtual void exitExitStmt(ValgoParser::ExitStmtContext *ctx) = 0;

  virtual void enterReturnStmt(ValgoParser::ReturnStmtContext *ctx) = 0;
  virtual void exitReturnStmt(ValgoParser::ReturnStmtContext *ctx) = 0;

  virtual void enterDeclStmt(ValgoParser::DeclStmtContext *ctx) = 0;
  virtual void exitDeclStmt(ValgoParser::DeclStmtContext *ctx) = 0;

  virtual void enterAssignStmt(ValgoParser::AssignStmtContext *ctx) = 0;
  virtual void exitAssignStmt(ValgoParser::AssignStmtContext *ctx) = 0;

  virtual void enterPrintStmt(ValgoParser::PrintStmtContext *ctx) = 0;
  virtual void exitPrintStmt(ValgoParser::PrintStmtContext *ctx) = 0;

  virtual void enterProcCallStmt(ValgoParser::ProcCallStmtContext *ctx) = 0;
  virtual void exitProcCallStmt(ValgoParser::ProcCallStmtContext *ctx) = 0;

  virtual void enterIfElseStmt(ValgoParser::IfElseStmtContext *ctx) = 0;
  virtual void exitIfElseStmt(ValgoParser::IfElseStmtContext *ctx) = 0;

  virtual void enterBlockStmt(ValgoParser::BlockStmtContext *ctx) = 0;
  virtual void exitBlockStmt(ValgoParser::BlockStmtContext *ctx) = 0;

  virtual void enterIfElse(ValgoParser::IfElseContext *ctx) = 0;
  virtual void exitIfElse(ValgoParser::IfElseContext *ctx) = 0;

  virtual void enterExpr(ValgoParser::ExprContext *ctx) = 0;
  virtual void exitExpr(ValgoParser::ExprContext *ctx) = 0;

  virtual void enterIntLiteral(ValgoParser::IntLiteralContext *ctx) = 0;
  virtual void exitIntLiteral(ValgoParser::IntLiteralContext *ctx) = 0;

  virtual void enterVariable(ValgoParser::VariableContext *ctx) = 0;
  virtual void exitVariable(ValgoParser::VariableContext *ctx) = 0;

  virtual void enterParenthsized(ValgoParser::ParenthsizedContext *ctx) = 0;
  virtual void exitParenthsized(ValgoParser::ParenthsizedContext *ctx) = 0;

  virtual void enterFuncCall(ValgoParser::FuncCallContext *ctx) = 0;
  virtual void exitFuncCall(ValgoParser::FuncCallContext *ctx) = 0;


};

