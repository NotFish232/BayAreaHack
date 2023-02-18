//
// Created by piuslee on 2/18/23.
//

#ifndef EXPRAST_HPP
#define EXPRAST_HPP

#include <llvm/IR/IRBuilder.h>
#include <llvm/IR/BasicBlock.h>

#include "../../include/NeuralLang.hpp"
#include "../Logger.hpp"

// base class for all
class ExprAST {
public:
    virtual ~ExprAST() {} // virtual meaning a subclass can override this implentation
    virtual llvm::Value *codegen() = 0;
};

#endif
