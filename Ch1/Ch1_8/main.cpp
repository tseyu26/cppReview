#include <iostream>

int main(){
    std::cout
        << "Hello world\n"; // works fine

    std::cout << "This is a really, really, really, really, really, really, really, "
        "really long line\n"; // one extra indentation for continuation line

    std::cout << "This is another really, really, really, really, really, really, really, "
                 "really long line\n"; // text aligned with the previous line for continuation line
    
    // cout lives in the iostream library
    std::cout << "Hello world!\n";

    // these comments are easier to read
    std::cout << "It is very nice to meet you!\n";

    // when separated by whitespace
    std::cout << "Yeah!\n";

    std::cout << "This one is short\n";

    std::cout << "Hello world!\n";                  // cout lives in the iostream library
    std::cout << "It is very nice to meet you!\n";  // these comments are easier to read
    std::cout << "Yeah!\n";                         // especially when all lined up
    
    
    return 0;
}
