#include <stdio.h>
#include <iostream>

#include "part1.hpp"

using namespace std;


int main() {
    cout << Part1::solve(parse("./day01/data.txt")) << endl;
    return 0;
}
