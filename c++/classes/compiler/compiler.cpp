#include "compiler.h"
#include <iostream>
#include <sstream>

SDF::SDFCompiler::SDFCompiler(std::string pathName) {
    if (pathName.find(".sdf") == std::string::npos) {
        std::cout << "File is not type .sdf\n(Doesn't contain \".sdf\")\n";
        exit(1);
    }

    file.open(pathName);
    if (!file.is_open()) {
        std::cout << "File could not open\n";
        exit(2);
    }
}

SDF::SDFCompiler::~SDFCompiler() {
    if (file.is_open())
        file.close();
}

void SDF::SDFCompiler::readFile() {
    std::stringstream buffer;

    buffer << file.rdbuf();
    text = buffer.str();
    file.close();
}