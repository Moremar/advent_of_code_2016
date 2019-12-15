#include <iostream>
#include <fstream>      // ifstream
#include <algorithm>    // transform
#include <stdexcept>    // exception

#include "../../day01/part1/part1.hpp"
#include "../../day01/part2/part2.hpp"
#include "../../common/Utils.hpp"
#include "../../common/AdventException.hpp"

using namespace std;


int Part2::solve(vector<pair<char, int>> moves) {
    pair<int, int> position = make_pair(0, 0);
    pair<int, int> facing = DIRECTIONS[0];  // start facing NORTH
    vector<pair<int, int>> seen;
    bool found = false;

    for(auto move1 : moves) {
        if (found) {
            break;
        }
        auto facing_itr = find(DIRECTIONS.begin(), DIRECTIONS.end(), facing);
        int facing_index = (int) distance(DIRECTIONS.begin(), facing_itr);
        facing = DIRECTIONS[(facing_index + (move1.first == 'R' ? 1 : -1) + 4) % 4];
        for (int i = 0; i < move1.second; ++i) {
            // process all points in the move 1 by 1 to add them in the "seen" vector
            seen.push_back(position);
            position = position + facing;
            if (find(seen.begin(), seen.end(), position) != seen.end()) {
                return abs(position.first) + abs(position.second);
            }
        }
    }
    throw AdventException("Santa did not visit any position twice.");
}
