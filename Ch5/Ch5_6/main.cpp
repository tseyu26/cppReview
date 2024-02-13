#include <iostream>

int main()
{
    constexpr int x { 2 };
    constexpr int y { 1 };
    constexpr int z { 10 - x > y ? x : y };
    std::cout << z;

    return 0;
}