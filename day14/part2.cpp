#include <algorithm>    // transform
#include <stdexcept>    // exception
#include <set>

#include "part1.hpp"
#include "part2.hpp"
#include "Utils.hpp"
#include "AdventException.hpp"

using namespace std;


int Part2::solve(const string &salt) {
    KeyGenerator generator(salt);
    return generator.findIthKey(64, 2016);
}
