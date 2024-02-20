#include <iostream>

int main()
{
    // 以大写字母开头命名您的类型别名，并且不要使用后缀（除非您有特定原因这样做）。
    using Distance = double; // define Distance as an alias for type double

    // not recommend
    typedef double Distance2; // define Distance2 as an alias for type double

    Distance milesToDestination{ 3.4 }; // defines a variable of type double

    std::cout << milesToDestination << '\n'; // prints a double value

    return 0;
}