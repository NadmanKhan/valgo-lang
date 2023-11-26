#include "AST.h"

string IntTypeAST::codegen(SymbolTable &typeOfSymbol)
{
    return "int64_t";
}

string CharTypeAST::codegen(SymbolTable &typeOfSymbol)
{
    return "char";
}

string FloatTypeAST::codegen(SymbolTable &typeOfSymbol)
{
    return "double";
}

string ArrayTypeAST::codegen(SymbolTable &typeOfSymbol)
{
    auto t = elementType->codegen(typeOfSymbol);
    return "std::array<" + t + ", " + std::to_string(size) + ">";
}

string DynamicArrayTypeAST::codegen(SymbolTable &typeOfSymbol)
{
    auto t = elementType->codegen(typeOfSymbol);
    return "std::vector<" + t + ">";
}

string SubroutineTypeAST::codegen(SymbolTable &typeOfSymbol)
{
    string paramTypesStr;
    for (int i = 0; i < (int) paramTypes.size(); ++i) {
        paramTypesStr += paramTypes[i]->codegen(typeOfSymbol);
        if (i != (int) paramTypes.size() - 1) {
            paramTypesStr += ", ";
        }
    }
    return "std::function<" + returnType->codegen(typeOfSymbol) + "(" + paramTypesStr + ")>";
}

string UnaryExpressionAST::codegen(SymbolTable &typeOfSymbol)
{

}
