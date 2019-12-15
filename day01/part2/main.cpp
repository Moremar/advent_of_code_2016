#include <stdio.h>
#include <iostream>

#include "../../day01/part1/part1.hpp"
#include "../../day01/part2/part2.hpp"

using namespace std;


int main() {
    cout << Part2::solve(parse("./day01/data.txt")) << endl;
    return 0;
}
