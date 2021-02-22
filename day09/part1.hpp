#pragma once
#include <string>

using std::string;
using std::vector;


namespace Part1 {
    string parse(const string &filePath);
    int solve(const string &compressed);

    string decompress(const string &compressed);
}
