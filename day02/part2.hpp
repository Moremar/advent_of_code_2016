#ifndef day02_part2_h
#define day02_part2_h

#include <string>
#include <vector>
#include <map>

using std::string;
using std::vector;
using std::pair;


namespace Part2 {

    // Solve day 2 part 2
    string solve(vector<vector<char>> directions);

    // update the coords according to the given direction char
    void next_position(const char& c, pair<int, int> &coords);
}

#endif /* day02_part2_h */
