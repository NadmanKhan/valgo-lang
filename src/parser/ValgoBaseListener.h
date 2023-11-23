
// Generated from Valgo.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "ValgoListener.h"


/**
 * This class provides an empty implementation of ValgoListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  ValgoBaseListener : public ValgoListener {
public:

  virtual void enterProg(ValgoParser::ProgContext * /*ctx*/) override { }
  virtual void exitProg(ValgoParser::ProgContext * /*ctx*/) override { }

  virtual void enterFunc(ValgoParser::FuncContext * /*ctx*/) override { }
  virtual void exitFunc(ValgoParser::FuncContext * /*ctx*/) override { }

  virtual void enterProc(ValgoParser::ProcContext * /*ctx*/) override { }
  virtual void exitProc(ValgoParser::ProcContext * /*ctx*/) override { }

  virtual void enterProto(ValgoParser::ProtoContext * /*ctx*/) override { }
  virtual void exitProto(ValgoParser::ProtoContext * /*ctx*/) override { }

  virtual void enterBlock(ValgoParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(ValgoParser::BlockContext * /*ctx*/) override { }

  virtual void enterExitStmt(ValgoParser::ExitStmtContext * /*ctx*/) override { }
  virtual void exitExitStmt(ValgoParser::ExitStmtContext * /*ctx*/) override { }

  virtual void enterReturnStmt(ValgoParser::ReturnStmtContext * /*ctx*/) override { }
  virtual void exitReturnStmt(ValgoParser::ReturnStmtContext * /*ctx*/) override { }

  virtual void enterDeclStmt(ValgoParser::DeclStmtContext * /*ctx*/) override { }
  virtual void exitDeclStmt(ValgoParser::DeclStmtContext * /*ctx*/) override { }

  virtual void enterAssignStmt(ValgoParser::AssignStmtContext * /*ctx*/) override { }
  virtual void exitAssignStmt(ValgoParser::AssignStmtContext * /*ctx*/) override { }

  virtual void enterPrintStmt(ValgoParser::PrintStmtContext * /*ctx*/) override { }
  virtual void exitPrintStmt(ValgoParser::PrintStmtContext * /*ctx*/) override { }

  virtual void enterProcCallStmt(ValgoParser::ProcCallStmtContext * /*ctx*/) override { }
  virtual void exitProcCallStmt(ValgoParser::ProcCallStmtContext * /*ctx*/) override { }

  virtual void enterIfElseStmt(ValgoParser::IfElseStmtContext * /*ctx*/) override { }
  virtual void exitIfElseStmt(ValgoParser::IfElseStmtContext * /*ctx*/) override { }

  virtual void enterBlockStmt(ValgoParser::BlockStmtContext * /*ctx*/) override { }
  virtual void exitBlockStmt(ValgoParser::BlockStmtContext * /*ctx*/) override { }

  virtual void enterIfElse(ValgoParser::IfElseContext * /*ctx*/) override { }
  virtual void exitIfElse(ValgoParser::IfElseContext * /*ctx*/) override { }

  virtual void enterExpr(ValgoParser::ExprContext * /*ctx*/) override { }
  virtual void exitExpr(ValgoParser::ExprContext * /*ctx*/) override { }

  virtual void enterIntLiteralExpr(ValgoParser::IntLiteralExprContext * /*ctx*/) override { }
  virtual void exitIntLiteralExpr(ValgoParser::IntLiteralExprContext * /*ctx*/) override { }

  virtual void enterVariableExpr(ValgoParser::VariableExprContext * /*ctx*/) override { }
  virtual void exitVariableExpr(ValgoParser::VariableExprContext * /*ctx*/) override { }

  virtual void enterParenthsizedExpr(ValgoParser::ParenthsizedExprContext * /*ctx*/) override { }
  virtual void exitParenthsizedExpr(ValgoParser::ParenthsizedExprContext * /*ctx*/) override { }

  virtual void enterFuncCallExpr(ValgoParser::FuncCallExprContext * /*ctx*/) override { }
  virtual void exitFuncCallExpr(ValgoParser::FuncCallExprContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

