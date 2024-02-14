#include <iostream>

consteval int greate(int x, int y) // function is now consteval
{
    return (x > y ? x : y);
}

int main()
{
    constexpr int g { greate(5, 6) };              // ok: will evaluate at compile-time
    std::cout << g << '\n';

    std::cout << greate(5, 6) << " is greater!\n"; // ok: will evaluate at compile-time

    int x{ 5 }; // not constexpr
    std::cout << greate(x, 6) << " is greater!\n"; // error: consteval functions must evaluate at compile-time

    return 0;
}