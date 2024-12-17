#include <string>
#include <iostream>
#include <fstream>

void displayHelp(std::string ErrorMessage);

int main(int argc, char **argv) {
    if (argc < 2) {
        displayHelp("Not enough arguments passed\n");
    }

    std::ofstream sdfFile;

    for (int i = 0; i < argc; i++) {
        std::string currArg = argv[i];
        if (i == 1) {
            sdfFile.open(currArg + ".sdf");
        }

        if (currArg[0] == '-' && sdfFile.is_open()) {
            currArg.replace(0, 1, "");
            sdfFile << "$ %" + currArg + "%\n\n$\n";
        }
    }    
}

void displayHelp(std::string ErrorMessage) {
    std::cout << ErrorMessage;

    std::cout << "\n./sdfcreate <name-of-file> (-<name-of-spacial>)\n\n";
    exit(0);
}