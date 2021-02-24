#include "part1.hpp"

using namespace std;


// return the digit corresponding to a given key position
int get_digit(const pair<int, int> &coords) {
    return coords.second * 3 + (coords.first + 1);
}


void Part1::next_position(const char& c, pair<int, int> &coords) {
    switch (c) {
        case 'U':
            if (coords.second > 0) coords.second--;
            break;
        case 'R':
            if (coords.first < 2) coords.first++;
            break;
        case 'D':
            if (coords.second < 2) coords.second++;
            break;
        case 'L':
            if (coords.first > 0) coords.first--;
            break;
        default:
            throw AdventException(string("Undefined direction: ") + c);
    }
}


int Part1::solve(vector<vector<char>> directions) {
    pair<int, int> coords = make_pair(1, 1);
    int code = 0;
    for(const vector<char> &dirLine : directions) {
        for (const char &c: dirLine) {
            next_position(c, coords);
        }
        code = 10 * code + get_digit(coords);
    }
    return code;
}


vector<vector<char>> Part1::parse(const string &fileName) {
    vector<vector<char>> directions;
    for(string line : getFileLines(fileName)) {
        vector<char> directionLine;
        for(const char &c: line) {
            directionLine.push_back(c);
        }
        directions.push_back(directionLine);
    }
    return directions;
}
