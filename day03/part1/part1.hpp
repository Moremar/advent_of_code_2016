#ifndef day03_part1_h
#define day03_part1_h

#include <string>
#include <vector>

using std::string;
using std::vector;


// Parse one line of the input into a triangle
vector<int> parseTriangle(const string& line);

// Solve day 03
int solve(vector<vector<int>> triangles);

namespace Part1 {
    // Parse the input file for part 1 of day 03
    vector<vector<int>> parse(const string &fileName);
}

#endif /* part1_h */
