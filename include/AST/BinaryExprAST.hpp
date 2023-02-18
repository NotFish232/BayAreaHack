//
// Created by piuslee on 2/18/23.
//

#ifndef BINARYEXPRAST_HPP
#define BINARYEXPRAST_HPP

#include "ExprAST.hpp"

//syntax tree for binary
class BinaryExprAST: public ExprAST {
    char Op;
    std::unique_ptr < ExprAST > LHS, RHS;

public:
    BinaryExprAST(char op, std::unique_ptr < ExprAST > LHS, std::unique_ptr < ExprAST > RHS): Op(Op), LHS(std::move(LHS)), RHS(std::move(RHS)) {}
    llvm::Value *codegen() override;
};

#endif