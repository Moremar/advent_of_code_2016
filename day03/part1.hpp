#ifndef day03_part1_h
#define day03_part1_h

#include "Utils.hpp"


// Parse one line of the input into a triangle
vector<int> parseTriangle(const string& line);

// Solve day 3
int solve(vector<vector<int>> triangles);

namespace Part1 {
    // Parse the input file for day 3 part 2
    vector<vector<int>> parse(const string &fileName);
}

#endif /* day03_part1_h */
