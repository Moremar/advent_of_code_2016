#ifndef day02_part1_h
#define day02_part1_h

#include <string>
#include <vector>

using std::string;
using std::vector;
using std::pair;


// Parse the input file of day 02
vector<vector<char>> parse(const string &fileName);

namespace Part1 {
    // Solve the part 1 of day 02
    int solve(vector<vector<char>> directions);

    // update the coords according to the given direction char
    void next_position(const char& c, pair<int, int> &coords);
}

#endif /* part1_h */
