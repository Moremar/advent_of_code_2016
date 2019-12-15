#include <iostream>
#include <fstream>
#include <algorithm>

#include "../../day01/part1/part1.hpp"
#include "../../common/Utils.hpp"

using namespace std;


vector<pair<char, int>> parse(const string &fileName) {
    string line = getFileLines(fileName)[0];
    vector<pair<char, int>> moves;
    for (string token : split(line, ", ")) {
        moves.push_back(make_pair(token[0], stoi(token.substr(1))));
    }
    return moves;
}

int Part1::solve(vector<pair<char, int>> moves) {
    pair<int, int> position = make_pair(0, 0);
    pair<int, int> facing = DIRECTIONS[0];  // start facing NORTH

    for(auto move1 : moves) {
        auto facing_itr = find(DIRECTIONS.begin(), DIRECTIONS.end(), facing);
        int facing_index = (int) distance(DIRECTIONS.begin(), facing_itr);
        facing = DIRECTIONS[(facing_index + (move1.first == 'R' ? 1 : -1) + 4) % 4];
        position = position + facing * move1.second;
    }
    return abs(position.first) + abs(position.second);
}
