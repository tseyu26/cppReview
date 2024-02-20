#include <iostream>

template <int N> 
void printNTimes() {
    for (int i = 0; i < N; ++i) {
        std::cout << "Hello, ";
    }
    std::cout << '\n';
}

int main()
{
    printNTimes<3>();  // 在编译时生成循环3次的代码
    printNTimes<5>();  // 在编译时生成循环5次的代码
    
    return 0;
}
