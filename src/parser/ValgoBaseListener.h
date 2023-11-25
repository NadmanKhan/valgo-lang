
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

  virtual void enterProgram(ValgoParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(ValgoParser::ProgramContext * /*ctx*/) override { }

  virtual void enterFunction(ValgoParser::FunctionContext * /*ctx*/) override { }
  virtual void exitFunction(ValgoParser::FunctionContext * /*ctx*/) override { }

  virtual void enterProcedure(ValgoParser::ProcedureContext * /*ctx*/) override { }
  virtual void exitProcedure(ValgoParser::ProcedureContext * /*ctx*/) override { }

  virtual void enterBlock(ValgoParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(ValgoParser::BlockContext * /*ctx*/) override { }

  virtual void enterReturnStatement(ValgoParser::ReturnStatementContext * /*ctx*/) override { }
  virtual void exitReturnStatement(ValgoParser::ReturnStatementContext * /*ctx*/) override { }

  virtual void enterPrintStatement(ValgoParser::PrintStatementContext * /*ctx*/) override { }
  virtual void exitPrintStatement(ValgoParser::PrintStatementContext * /*ctx*/) override { }

  virtual void enterVarDeclarationStatement(ValgoParser::VarDeclarationStatementContext * /*ctx*/) override { }
  virtual void exitVarDeclarationStatement(ValgoParser::VarDeclarationStatementContext * /*ctx*/) override { }

  virtual void enterAssignmentStatement(ValgoParser::AssignmentStatementContext * /*ctx*/) override { }
  virtual void exitAssignmentStatement(ValgoParser::AssignmentStatementContext * /*ctx*/) override { }

  virtual void enterCallStatement(ValgoParser::CallStatementContext * /*ctx*/) override { }
  virtual void exitCallStatement(ValgoParser::CallStatementContext * /*ctx*/) override { }

  virtual void enterBlockStatement(ValgoParser::BlockStatementContext * /*ctx*/) override { }
  virtual void exitBlockStatement(ValgoParser::BlockStatementContext * /*ctx*/) override { }

  virtual void enterIfStatement(ValgoParser::IfStatementContext * /*ctx*/) override { }
  virtual void exitIfStatement(ValgoParser::IfStatementContext * /*ctx*/) override { }

  virtual void enterWhileStatement(ValgoParser::WhileStatementContext * /*ctx*/) override { }
  virtual void exitWhileStatement(ValgoParser::WhileStatementContext * /*ctx*/) override { }

  virtual void enterExpression(ValgoParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(ValgoParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterBinaryExpression(ValgoParser::BinaryExpressionContext * /*ctx*/) override { }
  virtual void exitBinaryExpression(ValgoParser::BinaryExpressionContext * /*ctx*/) override { }

  virtual void enterUnaryExpression(ValgoParser::UnaryExpressionContext * /*ctx*/) override { }
  virtual void exitUnaryExpression(ValgoParser::UnaryExpressionContext * /*ctx*/) override { }

  virtual void enterIntegerLiteral(ValgoParser::IntegerLiteralContext * /*ctx*/) override { }
  virtual void exitIntegerLiteral(ValgoParser::IntegerLiteralContext * /*ctx*/) override { }

  virtual void enterArrayLiteral(ValgoParser::ArrayLiteralContext * /*ctx*/) override { }
  virtual void exitArrayLiteral(ValgoParser::ArrayLiteralContext * /*ctx*/) override { }

  virtual void enterCharLiteral(ValgoParser::CharLiteralContext * /*ctx*/) override { }
  virtual void exitCharLiteral(ValgoParser::CharLiteralContext * /*ctx*/) override { }

  virtual void enterFloatLiteral(ValgoParser::FloatLiteralContext * /*ctx*/) override { }
  virtual void exitFloatLiteral(ValgoParser::FloatLiteralContext * /*ctx*/) override { }

  virtual void enterArrayAccess(ValgoParser::ArrayAccessContext * /*ctx*/) override { }
  virtual void exitArrayAccess(ValgoParser::ArrayAccessContext * /*ctx*/) override { }

  virtual void enterVariable(ValgoParser::VariableContext * /*ctx*/) override { }
  virtual void exitVariable(ValgoParser::VariableContext * /*ctx*/) override { }

  virtual void enterParenthesized(ValgoParser::ParenthesizedContext * /*ctx*/) override { }
  virtual void exitParenthesized(ValgoParser::ParenthesizedContext * /*ctx*/) override { }

  virtual void enterCall(ValgoParser::CallContext * /*ctx*/) override { }
  virtual void exitCall(ValgoParser::CallContext * /*ctx*/) override { }

  virtual void enterCharType(ValgoParser::CharTypeContext * /*ctx*/) override { }
  virtual void exitCharType(ValgoParser::CharTypeContext * /*ctx*/) override { }

  virtual void enterFloatType(ValgoParser::FloatTypeContext * /*ctx*/) override { }
  virtual void exitFloatType(ValgoParser::FloatTypeContext * /*ctx*/) override { }

  virtual void enterArrayType(ValgoParser::ArrayTypeContext * /*ctx*/) override { }
  virtual void exitArrayType(ValgoParser::ArrayTypeContext * /*ctx*/) override { }

  virtual void enterIntType(ValgoParser::IntTypeContext * /*ctx*/) override { }
  virtual void exitIntType(ValgoParser::IntTypeContext * /*ctx*/) override { }

  virtual void enterDynamicArrayType(ValgoParser::DynamicArrayTypeContext * /*ctx*/) override { }
  virtual void exitDynamicArrayType(ValgoParser::DynamicArrayTypeContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

