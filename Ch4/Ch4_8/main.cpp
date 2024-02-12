#include <iostream>
#include <iomanip>

int main()
{
    float f { 123456789.0f }; 

    std::cout << std::setprecision(9);
	std::cout << 5.0 << '\n';
	std::cout << 6.7f << '\n';
	std::cout << 9876543.21 << '\n';
    std::cout << f << '\n' ;

    double zero {0.0};
    double posinf { 5.0 / zero }; // positive infinity
    std::cout << posinf << '\n';

    double neginf { -5.0 / zero }; // negative infinity
    std::cout << neginf << '\n';

    double nan { zero / zero }; // not a number (mathematically invalid)
    std::cout << nan << '\n';

	return 0;
}