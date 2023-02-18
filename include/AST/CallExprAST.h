//
// Created by piuslee on 2/18/23.
//

#ifndef CALLEXPRAST_H
#define CALLEXPRAST_H

#include "ExprAST.h"

//function calls syntax tree
class CallExprAST: public ExprAST {
    std::string Callee;
    std::vector < std::unique_ptr < ExprAST >> Args;

public:
    CallExprAST(const std::string & Callee, std::vector < std::unique_ptr < ExprAST >> Args): Callee(Callee), Args(std::move(Args)) {}
    llvm::Value *codegen() override;
};

#endif