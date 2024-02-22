#include <array>
#include <iostream>

int main()
{
    constexpr std::array arr{ 9.0, 7.2, 5.4, 3.6, 1.8 };
    std::cout << "length: " << arr.size() << '\n'; // returns length as type `size_type` (alias for `std::size_t`)
    std::cout << "length: " << std::size(arr) << '\n'; // C++17, returns length as type `size_type` (alias for `std::size_t`)
    return 0;
}