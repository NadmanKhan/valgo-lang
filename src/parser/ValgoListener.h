
// Generated from Valgo.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "ValgoParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by ValgoParser.
 */
class  ValgoListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterBinaryExpr(ValgoParser::BinaryExprContext *ctx) = 0;
  virtual void exitBinaryExpr(ValgoParser::BinaryExprContext *ctx) = 0;

  virtual void enterAtomExpr(ValgoParser::AtomExprContext *ctx) = 0;
  virtual void exitAtomExpr(ValgoParser::AtomExprContext *ctx) = 0;

  virtual void enterParenExpr(ValgoParser::ParenExprContext *ctx) = 0;
  virtual void exitParenExpr(ValgoParser::ParenExprContext *ctx) = 0;

  virtual void enterIntLiteral(ValgoParser::IntLiteralContext *ctx) = 0;
  virtual void exitIntLiteral(ValgoParser::IntLiteralContext *ctx) = 0;

  virtual void enterVariable(ValgoParser::VariableContext *ctx) = 0;
  virtual void exitVariable(ValgoParser::VariableContext *ctx) = 0;

  virtual void enterUnaryOp(ValgoParser::UnaryOpContext *ctx) = 0;
  virtual void exitUnaryOp(ValgoParser::UnaryOpContext *ctx) = 0;

  virtual void enterFuncCall(ValgoParser::FuncCallContext *ctx) = 0;
  virtual void exitFuncCall(ValgoParser::FuncCallContext *ctx) = 0;

  virtual void enterProto(ValgoParser::ProtoContext *ctx) = 0;
  virtual void exitProto(ValgoParser::ProtoContext *ctx) = 0;

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

  virtual void enterNormal(ValgoParser::NormalContext *ctx) = 0;
  virtual void exitNormal(ValgoParser::NormalContext *ctx) = 0;

  virtual void enterIfElse(ValgoParser::IfElseContext *ctx) = 0;
  virtual void exitIfElse(ValgoParser::IfElseContext *ctx) = 0;

  virtual void enterBlockElement(ValgoParser::BlockElementContext *ctx) = 0;
  virtual void exitBlockElement(ValgoParser::BlockElementContext *ctx) = 0;

  virtual void enterOuterBlock(ValgoParser::OuterBlockContext *ctx) = 0;
  virtual void exitOuterBlock(ValgoParser::OuterBlockContext *ctx) = 0;

  virtual void enterFunc(ValgoParser::FuncContext *ctx) = 0;
  virtual void exitFunc(ValgoParser::FuncContext *ctx) = 0;

  virtual void enterProc(ValgoParser::ProcContext *ctx) = 0;
  virtual void exitProc(ValgoParser::ProcContext *ctx) = 0;

  virtual void enterProg(ValgoParser::ProgContext *ctx) = 0;
  virtual void exitProg(ValgoParser::ProgContext *ctx) = 0;


};

