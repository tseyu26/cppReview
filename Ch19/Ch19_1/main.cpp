#include <iostream>

int main()
{
    int* ptr{ new int{} }; // dynamically allocate an integer
    int* otherPtr{ ptr }; // otherPtr is now pointed at that same memory location

    std::cout << ptr << ' ' << otherPtr << '\n';
    *ptr = 6;
    std::cout << *ptr << '\n';
    delete ptr; // return the memory to the operating system.  ptr and otherPtr are now dangling pointers.
    ptr = nullptr; // ptr is now a nullptr
    std::cout << otherPtr << ' ' << *otherPtr << '\n';

    // however, otherPtr is still a dangling pointer!

    return 0;
}