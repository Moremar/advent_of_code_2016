#pragma once

#include <map>
#include <vector>

using std::string;
using std::vector;
using std::map;


namespace Part1 {
    vector<string> parse(const string &filePath);
    string solve(const vector<string> &signals);

    vector<map<char, int>> getFreqs(const vector<string> &signals);
}