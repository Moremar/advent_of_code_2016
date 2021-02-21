#pragma once

#include <string>
#include <vector>

using std::string;
using std::vector;
using std::pair;
using std::make_pair;

// constant scoped to the compilation unit
const vector<pair<int, int>> DIRECTIONS {
    make_pair(0, 1),        // NORTH
    make_pair(1, 0),        // EAST
    make_pair(0, -1),       // SOUTH
    make_pair(-1, 0)        // WEST
};


namespace Part1 {  
    // parse day 1 input
    vector<pair<char, int>> parse(const string &fileName);

    // Solve day 1 part 1
    int solve(vector<pair<char, int>> moves);
}
