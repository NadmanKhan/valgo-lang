#include "AST.h"

#include <cassert>

string IntTypeAST::toString()
{
    return "IntTypeAST";
}

string IntTypeAST::codegen()
{
    return "int64_t";
}

string IntTypeAST::name() const
{
    return "int";
}

string CharTypeAST::toString()
{
    return "CharTypeAST";
}

string CharTypeAST::codegen()
{
    return "char";
}

string CharTypeAST::name() const
{
    return "char";
}

string FloatTypeAST::toString()
{
    return "FloatTypeAST";
}

string FloatTypeAST::codegen()
{
    return "double";
}

string FloatTypeAST::name() const
{
    return "float";
}

string ArrayTypeAST::toString()
{
    return "ArrayTypeAST";
}

string ArrayTypeAST::codegen()
{
    auto t = elementType->codegen();
    return "std::array<" + t + ", " + std::to_string(size) + ">";
}

string ArrayTypeAST::name() const
{
    auto t = elementType->name();
    return t + "[" + std::to_string(size) + "]";
}

string DynamicArrayTypeAST::toString()
{
    return "DynamicArrayTypeAST";
}

string DynamicArrayTypeAST::codegen()
{
    auto t = elementType->codegen();
    return "std::vector<" + t + ">";
}

string DynamicArrayTypeAST::name() const
{
    auto t = elementType->name();
    return t + "[..]";
}

TypeAST *BinaryExpressionAST::type() const
{
    // TODO: implement
}

string BinaryExpressionAST::toString()
{
    return std::string();
}
