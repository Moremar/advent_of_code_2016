#include <stdio.h>
#include <iostream>

#include "../../day03/part1/part1.hpp"
#include "../../day03/part2/part2.hpp"

using namespace std;


int main() {
    // here we use the same solve() as part 1, only the parsing is different
    cout << solve(Part2::parse("./day03/data.txt")) << endl;
    return 0;
}
