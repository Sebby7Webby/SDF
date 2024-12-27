#pragma once

#include <fstream>
#include <string>
#include <vector>
#include <tokens.h>
#include <variant>

namespace SDF {

class SDFCompiler {
public:
    SDFCompiler(std::string path);
    ~SDFCompiler();

    void readFile();
private:
    std::ifstream file;
    std::string text;
    std::vector<Token<std::variant<int, bool, std::string>>> tokens;
};

}