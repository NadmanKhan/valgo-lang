
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

  virtual void enterProc(ValgoParser::ProcContext * /*ctx*/) override { }
  virtual void exitProc(ValgoParser::ProcContext * /*ctx*/) override { }

  virtual void enterFunc(ValgoParser::FuncContext * /*ctx*/) override { }
  virtual void exitFunc(ValgoParser::FuncContext * /*ctx*/) override { }

  virtual void enterProto(ValgoParser::ProtoContext * /*ctx*/) override { }
  virtual void exitProto(ValgoParser::ProtoContext * /*ctx*/) override { }

  virtual void enterBlock(ValgoParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(ValgoParser::BlockContext * /*ctx*/) override { }

  virtual void enterStmt(ValgoParser::StmtContext * /*ctx*/) override { }
  virtual void exitStmt(ValgoParser::StmtContext * /*ctx*/) override { }

  virtual void enterExpr(ValgoParser::ExprContext * /*ctx*/) override { }
  virtual void exitExpr(ValgoParser::ExprContext * /*ctx*/) override { }

  virtual void enterAtom(ValgoParser::AtomContext * /*ctx*/) override { }
  virtual void exitAtom(ValgoParser::AtomContext * /*ctx*/) override { }

  virtual void enterCall(ValgoParser::CallContext * /*ctx*/) override { }
  virtual void exitCall(ValgoParser::CallContext * /*ctx*/) override { }

  virtual void enterIfElse(ValgoParser::IfElseContext * /*ctx*/) override { }
  virtual void exitIfElse(ValgoParser::IfElseContext * /*ctx*/) override { }

  virtual void enterDecl(ValgoParser::DeclContext * /*ctx*/) override { }
  virtual void exitDecl(ValgoParser::DeclContext * /*ctx*/) override { }

  virtual void enterAssign(ValgoParser::AssignContext * /*ctx*/) override { }
  virtual void exitAssign(ValgoParser::AssignContext * /*ctx*/) override { }

  virtual void enterPrint(ValgoParser::PrintContext * /*ctx*/) override { }
  virtual void exitPrint(ValgoParser::PrintContext * /*ctx*/) override { }

  virtual void enterReturn(ValgoParser::ReturnContext * /*ctx*/) override { }
  virtual void exitReturn(ValgoParser::ReturnContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

