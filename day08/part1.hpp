#pragma once
#include <string>
#include <vector>

using std::string;
using std::vector;


struct Instruction {
    Instruction(const string &type, int a, int b): type(type), a(a), b(b) {};
    string type;    // rect | row | column
    int a, b;
};


class Monitor {
public:
    Monitor();
    void execute(const Instruction &instruction);
    int countPixels() const;
    string screenDisplay() const;

private:
    vector<vector<char>> myScreen;
};

namespace Part1 {
    vector<Instruction> parse(const string &filePath);
    int solve(const vector<Instruction> &instructions);
}
