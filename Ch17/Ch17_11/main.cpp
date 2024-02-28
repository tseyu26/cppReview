#include <iostream>

int main()
{
    const char name[] { "Alex" };        // case 1: const C-style string initialized with C-style string literal
    const char* const color{ "Orange" }; // case 2: const pointer to C-style string literal

    std::cout << name << ' ' << color << '\n';

    return 0;
}