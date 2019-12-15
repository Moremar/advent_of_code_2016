#include <stdio.h>
#include <iostream>

#include "../../day02/part1/part1.hpp"
#include "../../day02/part2/part2.hpp"

using namespace std;


int main() {
    cout << Part2::solve(parse("./day02/data.txt")) << endl;
    return 0;
}
