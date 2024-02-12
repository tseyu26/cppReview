#include <iostream>


// returns true if x and y are equal, false otherwise
bool isEqual(int x, int y)
{
    return x == y; // operator== returns true if x equals y, and false otherwise
}


int main()
{
    std::cout << true << '\n'; // true evaluates to 1
    std::cout << !true << '\n'; // !true evaluates to 0

    bool c{}; // default initialize to false
	std::cout << "Enter a boolean value: ";
	std::cin >> c;
	std::cout << "You entered: " << c << '\n';

    std::cout << std::boolalpha; // print bools as true or false
    bool b {false};
    std::cout << b << '\n'; 
    std::cout << !b << '\n'; 
    
    std::cout << "Enter an integer: ";

    int x{};
    std::cin >> x;

    std::cout << "Enter another integer: ";
    int y{};
    std::cin >> y;

    std::cout << x << " and " << y << " are equal? ";
    std::cout << isEqual(x, y) << '\n'; // will return true or false

    return 0;
}