#include <iostream>

// void print(int x=4, int y) is invalid, y needs a default argument

void print(int x, int y=4); // 4 is the default argument

// void print(int x, int y=4) is invalid. 
// After using forward declaration, 
// the default argument do not need to appear. 

void print(int x, int y) 
{
    std::cout << "x: " << x << '\n';
    std::cout << "y: " << y << '\n';
}

int main()
{
    print(1, 2); // y will use user-supplied argument 2
    print(3); // y will use default argument 4, as if we had called print(3, 4)

    return 0;
}