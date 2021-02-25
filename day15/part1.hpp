#pragma once
#include "Utils.hpp"


struct Disc {
    Disc(int discId, int totalPos, int initPos)
        : discId(discId), totalPos(totalPos), initPos(initPos) {}
    int discId, totalPos, initPos;
};


namespace Part1 {  
    vector<Disc> parse(const string &fileName);
    int solve(const vector<Disc> &moves);
}
