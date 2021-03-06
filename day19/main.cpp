#include "part1.hpp"
#include "part2.hpp"

using namespace std;


int main() {
    const auto data = Part1::parse("./day19/data.txt");
    cout << "Part 1: " << Part1::solve(data) << endl;
    cout << "Part 2: " << Part2::solve(data) << endl;
    return 0;
}
