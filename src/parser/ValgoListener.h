
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

  virtual void enterProc(ValgoParser::ProcContext *ctx) = 0;
  virtual void exitProc(ValgoParser::ProcContext *ctx) = 0;

  virtual void enterFunc(ValgoParser::FuncContext *ctx) = 0;
  virtual void exitFunc(ValgoParser::FuncContext *ctx) = 0;

  virtual void enterProto(ValgoParser::ProtoContext *ctx) = 0;
  virtual void exitProto(ValgoParser::ProtoContext *ctx) = 0;

  virtual void enterBlock(ValgoParser::BlockContext *ctx) = 0;
  virtual void exitBlock(ValgoParser::BlockContext *ctx) = 0;

  virtual void enterStmt(ValgoParser::StmtContext *ctx) = 0;
  virtual void exitStmt(ValgoParser::StmtContext *ctx) = 0;

  virtual void enterExpr(ValgoParser::ExprContext *ctx) = 0;
  virtual void exitExpr(ValgoParser::ExprContext *ctx) = 0;

  virtual void enterAtom(ValgoParser::AtomContext *ctx) = 0;
  virtual void exitAtom(ValgoParser::AtomContext *ctx) = 0;

  virtual void enterCall(ValgoParser::CallContext *ctx) = 0;
  virtual void exitCall(ValgoParser::CallContext *ctx) = 0;

  virtual void enterIfElse(ValgoParser::IfElseContext *ctx) = 0;
  virtual void exitIfElse(ValgoParser::IfElseContext *ctx) = 0;

  virtual void enterDecl(ValgoParser::DeclContext *ctx) = 0;
  virtual void exitDecl(ValgoParser::DeclContext *ctx) = 0;

  virtual void enterAssign(ValgoParser::AssignContext *ctx) = 0;
  virtual void exitAssign(ValgoParser::AssignContext *ctx) = 0;

  virtual void enterPrint(ValgoParser::PrintContext *ctx) = 0;
  virtual void exitPrint(ValgoParser::PrintContext *ctx) = 0;

  virtual void enterReturn(ValgoParser::ReturnContext *ctx) = 0;
  virtual void exitReturn(ValgoParser::ReturnContext *ctx) = 0;


};

