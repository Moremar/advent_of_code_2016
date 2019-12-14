#ifndef part1_h
#define part1_h

#include <string>
#include <vector>


const std::vector<std::pair<int, int>> DIRECTIONS {
    std::make_pair(0, 1),        // NORTH
    std::make_pair(1, 0),        // EAST
    std::make_pair(0, -1),       // SOUTH
    std::make_pair(-1, 0)        // WEST
};

// Parse the input file of day 01
std::vector<std::pair<char, int>> parse(const std::string &fileName);

namespace Part1 {
    // Solve the part 1 of day 01
    int solve(std::vector<std::pair<char, int>> moves);
}

#endif /* part1_h */
