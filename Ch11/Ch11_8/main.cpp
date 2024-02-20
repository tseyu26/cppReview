#include <iostream>

template <typename T>
T max(T x, T y)
{
    std::cout << "call from T max(T x, T y) \n";
    return (x < y) ? y : x;
}

auto max(auto x, auto y)
{
    std::cout << "call from auto max(auto x, auto y) \n";
    return (x < y) ? y : x;
}

/*
 * template <typename T, typename U> // We're using two template type parameters named T and U
 * auto max(T x, U y) // x can resolve to type T, and y can resolve to type U
 * {
 *   std::cout << "call from T max(T x, U y) \n";
 *   return (x < y) ? y : x; // uh oh, we have a narrowing conversion problem here
 * }
 */


int main()
{
    std::cout << max(static_cast<double>(2), 3.5) << '\n';  // compile error if not add static_cast<double>
    std::cout << max<double>(2, 3.5) << '\n';
    std::cout << max(2, 3.5) << '\n';
    return 0;
}