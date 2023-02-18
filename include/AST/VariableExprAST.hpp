//
// Created by piuslee on 2/18/23.
//

#ifndef VARIABLEEXPRAST_HPP
#define VARIABLEEXPRAST_HPP

#include "ExprAST.hpp"

//abstract syntax tree for numeric values
class NumberExprAST: public ExprAST {
    double Val;

public:
    //initializer list, assigns variable to class.  think getters & setters
    NumberExprAST(double Val): Val(Val) {}
    llvm::Value *codegen() override;
};

#endif