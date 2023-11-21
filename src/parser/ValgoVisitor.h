
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

    virtual std::any visitProc(ValgoParser::ProcContext *context) = 0;

    virtual std::any visitFunc(ValgoParser::FuncContext *context) = 0;

    virtual std::any visitProto(ValgoParser::ProtoContext *context) = 0;

    virtual std::any visitBlock(ValgoParser::BlockContext *context) = 0;

    virtual std::any visitStmt(ValgoParser::StmtContext *context) = 0;

    virtual std::any visitExpr(ValgoParser::ExprContext *context) = 0;

    virtual std::any visitAtom(ValgoParser::AtomContext *context) = 0;

    virtual std::any visitCall(ValgoParser::CallContext *context) = 0;

    virtual std::any visitIfElse(ValgoParser::IfElseContext *context) = 0;

    virtual std::any visitDecl(ValgoParser::DeclContext *context) = 0;

    virtual std::any visitAssign(ValgoParser::AssignContext *context) = 0;

    virtual std::any visitPrint(ValgoParser::PrintContext *context) = 0;

    virtual std::any visitReturn(ValgoParser::ReturnContext *context) = 0;


};

