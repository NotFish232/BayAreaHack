//
// Created by piuslee on 2/18/23.
//

#include "../include/NeuralLang.hpp"

// This is an object that owns LLVM core data structures
llvm::LLVMContext ctx;

// This is a helper object that makes easy to generate LLVM instructions
llvm::IRBuilder<> builder(ctx);

// This is an LLVM construct that contains functions and global variables
std::unique_ptr<llvm::Module> mod;

// This map keeps track of which values are defined in the current scope
std::map<std::string, llvm::Value *> values;

