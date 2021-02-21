#include <iostream>
#include <fstream>

#include "part1.hpp"
#include "part2.hpp"
#include "AdventException.hpp"

using namespace std;


map<pair<int, int>, string> KEYPAD {
    {make_pair(2, 0), "1"}, {make_pair(1, 1), "2"}, {make_pair(2, 1), "3"},
    {make_pair(3, 1), "4"}, {make_pair(0, 2), "5"}, {make_pair(1, 2), "6"},
    {make_pair(2, 2), "7"}, {make_pair(3, 2), "8"}, {make_pair(4, 2), "9"},
    {make_pair(1, 3), "A"}, {make_pair(2, 3), "B"}, {make_pair(3, 3), "C"},
    {make_pair(2, 4), "D"}
};

bool in_keypad(const pair<int, int> &position) {
    return KEYPAD.find(position) != KEYPAD.end();
}

void Part2::next_position(const char& c, pair<int, int> &coords) {
    switch (c) {
        case 'U':
            if (in_keypad(make_pair(coords.first, coords.second - 1))) coords.second--;
            break;
        case 'R':
            if (in_keypad(make_pair(coords.first + 1, coords.second))) coords.first++;
            break;
        case 'D':
            if (in_keypad(make_pair(coords.first, coords.second + 1))) coords.second++;
            break;
        case 'L':
            if (in_keypad(make_pair(coords.first - 1, coords.second))) coords.first--;
            break;
        default:
            throw AdventException(string("Undefined direction: ") + c);
    }
}

string Part2::solve(vector<vector<char>> directions) {
    pair<int, int> coords = make_pair(0, 2);
    string code;
    for(const vector<char> &dirLine : directions) {
        for (const char &c: dirLine) {
            next_position(c, coords);
        }
        code += KEYPAD[coords];
    }
    return code;
}
