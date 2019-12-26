#ifndef day01_part1_h
#define day01_part1_h

#include <string>
#include <vector>

using std::string;
using std::vector;
using std::pair;
using std::make_pair;


const vector<pair<int, int>> DIRECTIONS {
    make_pair(0, 1),        // NORTH
    make_pair(1, 0),        // EAST
    make_pair(0, -1),       // SOUTH
    make_pair(-1, 0)        // WEST
};

// Parse the input file of day 01
vector<pair<char, int>> parse(const string &fileName);

namespace Part1 {
    // Solve the part 1 of day 01
    int solve(vector<pair<char, int>> moves);
}

#endif /* part1_h */
