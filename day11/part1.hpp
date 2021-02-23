#pragma once

#include <map>
#include <string>
#include <vector>
#include <set>
#include <utility>   // pair

using std::map;
using std::string;
using std::vector;
using std::set;
using std::multiset;
using std::pair;


struct State {
    int moves = 0;
    int floor = 1;
    multiset<pair<int, int>> pairs;  // floor of chip + generator
    bool isValid() const;
    bool operator==(const State &state) const;
    bool operator<(const State &state) const;
    bool isFinal() const;
};

namespace Part1 {  
    State parse(const string &fileName);
    int solve(const State &state);
}
