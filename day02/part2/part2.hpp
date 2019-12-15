#ifndef part2_h
#define part2_h

#include <string>
#include <vector>
#include <map>

using std::string;
using std::vector;
using std::pair;
using std::make_pair;
using std::map;


namespace Part2 {

    // Solve the part 2 of day 02
    string solve(vector<vector<char>> directions);

    // update the coords according to the given direction char
    void next_position(const char& c, pair<int, int> &coords);
}

#endif /* part2_h */
