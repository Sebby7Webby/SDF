#include <tokens.h>

template<typename T>
Token<T>::Token(TokenTypes type)
    : type(type) {}

template<typename T>
Token<T>::Token(TokenTypes type, T literal)
    : type(type) literal(literal) {}

template<typename T>
TokenTypes Token<T>::getType() {return type;}

template<typename T>
T Token<T>::getLiteral() {return literal;}