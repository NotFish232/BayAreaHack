//
// Created by piuslee on 2/18/23.
//

#ifndef PROTOTYPEAST_HPP
#define PROTOTYPEAST_HPP

#include "exprAST.hpp"

// prototype function syntax tree, captures the name and the arguments
// basically represents the function, as a prototype.
class PrototypeAST {
    std::string m_name;
    std::vector<std::string> m_args;

public:
    PrototypeAST(const std::string &name, std::vector<std::string> args);

    llvm::Function *codegen();
    const std::string &getName() const;
};

#endif
