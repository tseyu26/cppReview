#include <iostream>
#include <string>

void addOne(int& y) // y is bound to the actual object x
{
    ++y; // this modifies the actual object x
}

void printValue(std::string& y) // type changed to std::string&
{
    std::cout << y << '\n';
} // y is destroyed here

int main()
{
    std::string x { "Hello, world!" };

    printValue(x); // x is now passed by reference into reference parameter y (inexpensive)
    
    int y { 5 };

    std::cout << "value = " << y << '\n';

    addOne(y);

    std::cout << "value = " << y << '\n'; // x has been modified
    return 0;
}