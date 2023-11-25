
// Generated from Valgo.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "ValgoParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by ValgoParser.
 */
class  ValgoListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(ValgoParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(ValgoParser::ProgramContext *ctx) = 0;

  virtual void enterFunction(ValgoParser::FunctionContext *ctx) = 0;
  virtual void exitFunction(ValgoParser::FunctionContext *ctx) = 0;

  virtual void enterProcedure(ValgoParser::ProcedureContext *ctx) = 0;
  virtual void exitProcedure(ValgoParser::ProcedureContext *ctx) = 0;

  virtual void enterBlock(ValgoParser::BlockContext *ctx) = 0;
  virtual void exitBlock(ValgoParser::BlockContext *ctx) = 0;

  virtual void enterReturnStatement(ValgoParser::ReturnStatementContext *ctx) = 0;
  virtual void exitReturnStatement(ValgoParser::ReturnStatementContext *ctx) = 0;

  virtual void enterPrintStatement(ValgoParser::PrintStatementContext *ctx) = 0;
  virtual void exitPrintStatement(ValgoParser::PrintStatementContext *ctx) = 0;

  virtual void enterVarDeclarationStatement(ValgoParser::VarDeclarationStatementContext *ctx) = 0;
  virtual void exitVarDeclarationStatement(ValgoParser::VarDeclarationStatementContext *ctx) = 0;

  virtual void enterAssignmentStatement(ValgoParser::AssignmentStatementContext *ctx) = 0;
  virtual void exitAssignmentStatement(ValgoParser::AssignmentStatementContext *ctx) = 0;

  virtual void enterCallStatement(ValgoParser::CallStatementContext *ctx) = 0;
  virtual void exitCallStatement(ValgoParser::CallStatementContext *ctx) = 0;

  virtual void enterBlockStatement(ValgoParser::BlockStatementContext *ctx) = 0;
  virtual void exitBlockStatement(ValgoParser::BlockStatementContext *ctx) = 0;

  virtual void enterIfStatement(ValgoParser::IfStatementContext *ctx) = 0;
  virtual void exitIfStatement(ValgoParser::IfStatementContext *ctx) = 0;

  virtual void enterWhileStatement(ValgoParser::WhileStatementContext *ctx) = 0;
  virtual void exitWhileStatement(ValgoParser::WhileStatementContext *ctx) = 0;

  virtual void enterExpression(ValgoParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(ValgoParser::ExpressionContext *ctx) = 0;

  virtual void enterBinaryExpression(ValgoParser::BinaryExpressionContext *ctx) = 0;
  virtual void exitBinaryExpression(ValgoParser::BinaryExpressionContext *ctx) = 0;

  virtual void enterUnaryExpression(ValgoParser::UnaryExpressionContext *ctx) = 0;
  virtual void exitUnaryExpression(ValgoParser::UnaryExpressionContext *ctx) = 0;

  virtual void enterIntegerLiteral(ValgoParser::IntegerLiteralContext *ctx) = 0;
  virtual void exitIntegerLiteral(ValgoParser::IntegerLiteralContext *ctx) = 0;

  virtual void enterArrayLiteral(ValgoParser::ArrayLiteralContext *ctx) = 0;
  virtual void exitArrayLiteral(ValgoParser::ArrayLiteralContext *ctx) = 0;

  virtual void enterCharLiteral(ValgoParser::CharLiteralContext *ctx) = 0;
  virtual void exitCharLiteral(ValgoParser::CharLiteralContext *ctx) = 0;

  virtual void enterFloatLiteral(ValgoParser::FloatLiteralContext *ctx) = 0;
  virtual void exitFloatLiteral(ValgoParser::FloatLiteralContext *ctx) = 0;

  virtual void enterArrayAccess(ValgoParser::ArrayAccessContext *ctx) = 0;
  virtual void exitArrayAccess(ValgoParser::ArrayAccessContext *ctx) = 0;

  virtual void enterVariable(ValgoParser::VariableContext *ctx) = 0;
  virtual void exitVariable(ValgoParser::VariableContext *ctx) = 0;

  virtual void enterParenthesized(ValgoParser::ParenthesizedContext *ctx) = 0;
  virtual void exitParenthesized(ValgoParser::ParenthesizedContext *ctx) = 0;

  virtual void enterCall(ValgoParser::CallContext *ctx) = 0;
  virtual void exitCall(ValgoParser::CallContext *ctx) = 0;

  virtual void enterCharType(ValgoParser::CharTypeContext *ctx) = 0;
  virtual void exitCharType(ValgoParser::CharTypeContext *ctx) = 0;

  virtual void enterFloatType(ValgoParser::FloatTypeContext *ctx) = 0;
  virtual void exitFloatType(ValgoParser::FloatTypeContext *ctx) = 0;

  virtual void enterArrayType(ValgoParser::ArrayTypeContext *ctx) = 0;
  virtual void exitArrayType(ValgoParser::ArrayTypeContext *ctx) = 0;

  virtual void enterIntType(ValgoParser::IntTypeContext *ctx) = 0;
  virtual void exitIntType(ValgoParser::IntTypeContext *ctx) = 0;

  virtual void enterDynamicArrayType(ValgoParser::DynamicArrayTypeContext *ctx) = 0;
  virtual void exitDynamicArrayType(ValgoParser::DynamicArrayTypeContext *ctx) = 0;


};

