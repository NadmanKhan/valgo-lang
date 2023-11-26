#include "AST.h"

#include <cassert>


string TypeAST::tree()
{
    return std::string();
}

string TypeAST::codegen()
{
    return std::string();
}

string ExpressionAST::tree()
{
    return std::string();
}

string ExpressionAST::codegen()
{
    return std::string();
}

string StatementAST::tree()
{
    return std::string();
}

string StatementAST::codegen()
{
    return std::string();
}

string IntTypeAST::tree()
{
    return TypeAST::tree();
}

string IntTypeAST::codegen()
{
    return TypeAST::codegen();
}

string IntTypeAST::name() const
{
    return "int";
}

string CharTypeAST::tree()
{
    return TypeAST::tree();
}

string CharTypeAST::codegen()
{
    return TypeAST::codegen();
}

string CharTypeAST::name() const
{
    return "char";
}

string FloatTypeAST::tree()
{
    return TypeAST::tree();
}

string FloatTypeAST::codegen()
{
    return TypeAST::codegen();
}

string FloatTypeAST::name() const
{
    return "float";
}
