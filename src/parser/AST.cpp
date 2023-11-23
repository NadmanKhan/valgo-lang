#include "AST.h"

string ExpressionAST::toString()
{
    return "ExpressionAST";
}

string VariableAST::toString()
{
    return "VariableAST(" + name + ")";
}

string IntLiteralAST::toString()
{
    return "IntLiteralAST(" + std::to_string(value) + ")";
}

string BinaryExpressionAST::toString()
{
    return "BinaryExpressionAST(" + op + ", " + lhs->toString() + ", " + rhs->toString()
        + ")";
}

string FuncCallExpressionAST::toString()
{
    string argsStr;
    for (auto &arg : args) {
        argsStr += arg->toString() + ", ";
    }
    return "FuncCallExpressionAST(" + name + ", " + argsStr + ")";
}

string StatementAST::toString()
{
    return "StatementAST";
}

string ExitStatementAST::toString()
{
    return "ExitStatementAST";
}

string ReturnStatementAST::toString()
{
    return "ReturnStatementAST(" + expression->toString() + ")";
}

string AssignmentStatementAST::toString()
{
    return "AssignmentStatementAST(" + name + ", " + expression->toString() + ")";
}

string DeclarationStatementAST::toString()
{
    return "DeclarationStatementAST(" + name + ", " + expression->toString() + ")";
}

string PrintStatementAST::toString()
{
    string argsStr;
    auto n = expressions.size();
    for (int i = 0; i < (int) n; i++) {
        argsStr += expressions[i]->toString();
        if (i < n - 1) {
            argsStr += ", ";
        }
    }
    return "PrintStatementAST(" + argsStr + ")";
}

string BlockAST::toString()
{
    string stmtsStr;
    for (auto &stmt : statements) {
        stmtsStr += stmt->toString() + ", ";
    }
    return "BlockStatementAST(" + stmtsStr + ")";
}

string IfElseAST::toString()
{
    return "IfElseAST(" + condition->toString() + ", " + BlockAST::toString() + ", " +
        elseBlock->toString() + ")";
}

string ProcCallStatementAST::toString()
{
    string argsStr;
    for (auto &arg : args) {
        argsStr += arg->toString() + ", ";
    }
    return "ProcCallStatementAST(" + name + ", " + argsStr + ")";
}

string SubroutineAST::toString()
{
    string paramsStr;
    for (auto &param : params) {
        paramsStr += param + ", ";
    }
    return "SubroutineAST(" + name + ", " + paramsStr + ", " + block->toString() + ")";
}

string ProgramAST::toString()
{
    string subroutinesStr;
    for (auto &subroutine : subroutines) {
        subroutinesStr += subroutine->toString() + ", ";
    }
    return "ProgramAST(" + subroutinesStr + ")";
}
