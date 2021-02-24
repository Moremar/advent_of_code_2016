#pragma once
#include "Utils.hpp"


// constant scoped to the compilation unit
const vector<pair<int, int>> DIRECTIONS {
    make_pair(0, 1),        // NORTH
    make_pair(1, 0),        // EAST
    make_pair(0, -1),       // SOUTH
    make_pair(-1, 0)        // WEST
};


namespace Part1 {  
    vector<pair<char, int>> parse(const string &fileName);
    int solve(vector<pair<char, int>> moves);
}
