#ifndef LEXER_HPP
#define LEXER_HPP

#include <fstream>
#include <sstream>

namespace nl {

enum class TokenType {
    _eof,
    _def,
    _extern,
    _identifier,
    _number,
    _unknownIdentifier,
    _unknownToken
};

struct Token {
    TokenType type;
    std::string identifier;
    double numVal;
};

class Lexer {
private:
    std::istream &m_inputStream;

public:
    Lexer() = delete;
    Lexer(std::istream &inputStream);

    Token getToken();
};

}

#endif