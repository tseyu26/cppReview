#include <iostream>
// Internal function definitions:
static int foo();     // defines internal function
int main(int, char**){
    // Internal global variables definitions:
    static int g_x;          // defines non-initialized internal global variable (zero initialized by default)
    static int g_y{ 1 };     // defines initialized internal global variable

    const int g_z { 2 };     // defines initialized internal global const variable
    constexpr int g_a { 3 }; // defines initialized internal global constexpr variable

    return 0;
}
