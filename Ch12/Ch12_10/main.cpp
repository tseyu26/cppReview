#include <iostream>

void printByValue(int val) // The function parameter is a copy of the argument
{
    std::cout << val << '\n'; // print the value via the copy
}

void printByReference(const int& ref) // The function parameter is a reference that binds to the argument
{
    std::cout << ref << '\n'; // print the value via the reference
}

void printByAddress(const int* ptr) // The function parameter is a pointer that holds the address of the argument
{
    std::cout << *ptr << '\n'; // print the value via the dereferenced pointer
}

int main()
{
    //Pass by reference when you can, pass by address when you must
    int x { 5 };
    printByValue(x);     // valid (but makes a copy)
    printByReference(x); // valid (because the parameter is a const reference)
    printByAddress(&x);  

    return 0;
}