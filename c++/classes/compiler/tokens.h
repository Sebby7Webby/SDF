#pragma once

enum class TokenTypes {
    DOLLAR_SIGN, PERCENT,
    LEFT_CURLY, RIGHT_CURLY, LEFT_SQUARE, RIGHT_SQUARE,
    SEMI_COLON, COLON,
    ID,
    STRING, NUMBER, BOOL
};

typedef noLit;

class baseToken {

};

template <typename litType = noLit>
class Token : public baseToken {
public:
    Token(TokenTypes type);
    Token(TokenTypes type, litType literal);
    ~Token();

    TokenTypes getType();
    litType getLiteral();
private:
    TokenTypes type;
    litType literal;
};