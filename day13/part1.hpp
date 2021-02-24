#pragma once
#include <string>
#include <map>
#include <tuple>
#include <set>

using std::string;
using std::pair;
using std::map;
using std::set;
using std::tuple;


class World {
public:
    World(int magicKey);
    bool isFree(const pair<int, int> &pair);
private:
    int myMagicKey;
    map<pair<int, int>, bool> myWorld;
};


namespace Part1 {  
    tuple<int, int, int> parse(const string &fileName);
    int solve(const tuple<int, int, int> &input);

    set<pair<int, int>> getNeighbors(pair<int, int> point);
}
