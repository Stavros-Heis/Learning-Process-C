#include <cassert>
#include <cstdint>
#include <limits>
#include <iostream>

int main()
{
    int x{};
    std::cin >> x;

    int y{};
    std::cin >> y;

    std::cout << ((x >= y) ? ((x = y) ? "x is equal to y" : "x is greater than y") : "x is lesser than y");
}