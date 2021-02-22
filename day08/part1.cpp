#include <algorithm>
#include <regex>
#include <numeric>

#include "part1.hpp"
#include "Utils.hpp"

using namespace std;

Monitor::Monitor() {
    myScreen = vector<vector<char>>(6, vector<char>(50, ' '));
}

void Monitor::execute(const Instruction &instruction) {
    if (instruction.type == "rect") {
        for (int row = 0; row < instruction.b; ++row) {
            for (int col = 0; col < instruction.a; ++col) {
                myScreen[row][col] = '#';
            }
        }
    } else if (instruction.type == "column") {
        const int col = instruction.a;
        for (int step=0; step < instruction.b; step++) {
            int tmp = myScreen[5][col];
            for (int row=5; row>0; row--) {
                myScreen[row][col] = myScreen[row-1][col];
            }
            myScreen[0][col] = tmp;
        }
    } else {
        for (int step = 0; step < instruction.b; step++) {
            const int row = instruction.a;
            int tmp = myScreen[row][49];
            for (int col=49; col>0; col--) {
                myScreen[row][col] = myScreen[row][col-1];
            }
            myScreen[row][0] = tmp;
        }
    }
}

int Monitor::countPixels() const {
    int count = 0;
    for_each(myScreen.begin(), myScreen.end(), [&count](vector<char> col) {
        count += accumulate(col.begin(), col.end(), 0);
    });
    return count;
}


vector<Instruction> Part1::parse(const string &filePath) {
    vector<Instruction> res;
    regex rect_rgx("rect ([0-9]+)x([0-9]+)");
    regex rotate_rgx("rotate (column|row) [xy]=([0-9]+) by ([0-9]+)");
    for (const string &line : getFileLines(filePath)) {
        smatch match;
        if (line.find("rect") != string::npos) {
            regex_search(line.begin(), line.end(), match, rect_rgx);
            res.emplace_back("rect", stoi(match[1]), stoi(match[2]));
        } else {
            regex_search(line.begin(), line.end(), match, rotate_rgx);
            res.emplace_back(match[1], stoi(match[2]), stoi(match[3]));
        }
    }
    return res;
}


int Part1::solve(const vector<Instruction> &instructions) {
    Monitor monitor;
    for (const auto &instruction : instructions) {
        monitor.execute(instruction);
    }
    return monitor.countPixels();
}
