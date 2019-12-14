#include <stdio.h>
#include <iostream>

#include "part1.hpp"
#include "part2.hpp"

using namespace std;


int main() {
    cout << Part2::solve(parse("./day01/data.txt")) << endl;
    return 0;
}
