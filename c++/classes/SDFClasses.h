#pragma once

#include <string>

class Value {

};

class Block : public Value {

};

class SDF {
public:
    SDF();
    ~SDF();
private:
    std::string name;
};