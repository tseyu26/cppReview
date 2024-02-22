#include <iostream>
#include <vector>

int main()
{
    std::vector prime { 2, 3, 5, 7, 11 };
    std::cout << "length: " << prime.size() << '\n'; // returns length as type `size_type` (alias for `std::size_t`)
    std::cout << "length: " << std::size(prime) << '\n'; // C++17, returns length as type `size_type` (alias for `std::size_t`)
    int length { static_cast<int>(prime.size()) }; // static_cast return value to int
    std::cout << "length: " << length << '\n';
    std::cout << "length: " << std::ssize(prime) << '\n'; // C++20, returns length as a large signed integral type
    std::cout << prime[3] << '\n';  // print the value of element with index 3 (7)
    std::cout << prime.at(3) << '\n'; // print the value of element with index 3
    return 0;
}