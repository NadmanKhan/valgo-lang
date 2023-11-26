
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
    virtual std::any visitProgram(ValgoParser::ProgramContext *context) = 0;

    virtual std::any visitFunction(ValgoParser::FunctionContext *context) = 0;

    virtual std::any visitProcedure(ValgoParser::ProcedureContext *context) = 0;

    virtual std::any visitBlock(ValgoParser::BlockContext *context) = 0;

    virtual std::any visitReturnStatement(ValgoParser::ReturnStatementContext *context) = 0;

    virtual std::any visitPrintStatement(ValgoParser::PrintStatementContext *context) = 0;

    virtual std::any visitVarDeclarationStatement(ValgoParser::VarDeclarationStatementContext *context) = 0;

    virtual std::any visitAssignmentStatement(ValgoParser::AssignmentStatementContext *context) = 0;

    virtual std::any visitCallStatement(ValgoParser::CallStatementContext *context) = 0;

    virtual std::any visitBlockStatement(ValgoParser::BlockStatementContext *context) = 0;

    virtual std::any visitIfStatement(ValgoParser::IfStatementContext *context) = 0;

    virtual std::any visitWhileStatement(ValgoParser::WhileStatementContext *context) = 0;

    virtual std::any visitExpression(ValgoParser::ExpressionContext *context) = 0;

    virtual std::any visitBinaryExpression(ValgoParser::BinaryExpressionContext *context) = 0;

    virtual std::any visitUnaryExpression(ValgoParser::UnaryExpressionContext *context) = 0;

    virtual std::any visitCall(ValgoParser::CallContext *context) = 0;

    virtual std::any visitArrayLiteral(ValgoParser::ArrayLiteralContext *context) = 0;

    virtual std::any visitParenthesized(ValgoParser::ParenthesizedContext *context) = 0;

    virtual std::any visitVariable(ValgoParser::VariableContext *context) = 0;

    virtual std::any visitIntegerLiteral(ValgoParser::IntegerLiteralContext *context) = 0;

    virtual std::any visitFloatLiteral(ValgoParser::FloatLiteralContext *context) = 0;

    virtual std::any visitCharLiteral(ValgoParser::CharLiteralContext *context) = 0;

    virtual std::any visitArrayAccess(ValgoParser::ArrayAccessContext *context) = 0;

    virtual std::any visitCharType(ValgoParser::CharTypeContext *context) = 0;

    virtual std::any visitFloatType(ValgoParser::FloatTypeContext *context) = 0;

    virtual std::any visitArrayType(ValgoParser::ArrayTypeContext *context) = 0;

    virtual std::any visitIntType(ValgoParser::IntTypeContext *context) = 0;

    virtual std::any visitDynamicArrayType(ValgoParser::DynamicArrayTypeContext *context) = 0;


};

