#include <bitset>
#include <iostream>

int main()
{
    std::bitset<4> x { 0b1100 };

    std::cout << x << '\n';
    std::cout << (x >> 1) << '\n'; // shift right by 1, yielding 0110
    std::cout << (x << 1) << '\n'; // shift left by 1, yielding 1000
    std::cout << ~std::bitset<4>{ 0b0100 } << ' ' << ~std::bitset<8>{ 0b0100 } << '\n';
    std::cout << (std::bitset<4>{ 0b0101 } | std::bitset<4>{ 0b0110 }) << '\n';
    std::cout << (std::bitset<4>{ 0b0111 } | std::bitset<4>{ 0b0011 } | std::bitset<4>{ 0b0001 }) << '\n';
    std::cout << (std::bitset<4>{ 0b0101 } & std::bitset<4>{ 0b0110 }) << '\n';
    std::cout << (std::bitset<4>{ 0b0001 } & std::bitset<4>{ 0b0011 } & std::bitset<4>{ 0b0111 }) << '\n';
    std::bitset<4> bits { 0b0100 };
    bits >>= 1;
    std::cout << bits << '\n';
    return 0;
}