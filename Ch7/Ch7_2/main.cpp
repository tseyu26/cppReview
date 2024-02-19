#include <iostream>

namespace Foo // define a namespace named Foo
{
    // This doSomething() belongs to namespace Foo
    int doSomething(int x, int y)
    {
        return x + y;
    }

    void print() // this print() lives in the Foo namespace
	{
		std::cout << "Hello";
	}
}

namespace Goo // define a namespace named Goo
{
    // This doSomething() belongs to namespace Goo
    int doSomething(int x, int y)
    {
        return x - y;
    }
}

void print() // this print() lives in the global namespace
{
	std::cout << " there\n";
}

int main()
{
    namespace Active = Foo;
    std::cout << Foo::doSomething(4, 3) << '\n'; // use the doSomething() that exists in namespace Foo
    std::cout << Goo::doSomething(4, 3) << '\n'; // use the doSomething() that exists in namespace Goo
    Active::print(); // call print() in Foo namespace
	::print();    // call print() in global namespace (same as just calling print() in this case) 
    return 0;
}