#include <iostream>

int main()
{
    int x { 10 };
    int y { 4 };


    double d { (double)x / y }; // convert x to a double so we get floating point division
    std::cout << d << '\n'; // prints 2.5

    d = static_cast<double>(x) / y ;
    std::cout << d << '\n'; // prints 2.5

    return 0;
}