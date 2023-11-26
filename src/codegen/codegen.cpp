#include "AST.h"

string IntTypeAST::codegen()
{
    return "int64_t";
}

string CharTypeAST::codegen()
{
    return "char";
}

string FloatTypeAST::codegen()
{
    return "double";
}

string ArrayTypeAST::codegen()
{
    auto t = elementType->codegen();
    return "std::array<" + t + ", " + std::to_string(size) + ">";
}

string DynamicArrayTypeAST::codegen()
{
    auto t = elementType->codegen();
    return "std::vector<" + t + ">";
}

string SubroutineTypeAST::codegen()
{
    string paramTypesStr;
    for (int i = 0; i < (int)paramTypes.size(); ++i) {
        paramTypesStr += paramTypes[i]->codegen();
        if (i != (int)paramTypes.size() - 1) {
            paramTypesStr += ", ";
        }
    }
    return "std::function<" + returnType->codegen() + "(" + paramTypesStr + ")>";
}

