#include <iostream>
#include <string>

const std::string& foo(const std::string& s)
{
    return s;
}

std::string getHello()
{
    return std::string{"Hello"};
}

int main()
{
    // 当使用常量引用来传递临时对象时，
    // 这是通过延长临时对象的生命周期来实现的。
    // 这种延长生命周期的机制被称为常量引用绑定到临时对象，
    // 并且它是语言的一种特性。
    const std::string s{ foo(getHello()) };

    std::cout << s;

    return 0;
}