//
// Created by tseyu on 2/6/24.
//

#include <iostream>

int main(){
    int a;         // no initializer (default initialization)
    int b = 5;     // initializer after equals sign (copy initialization)
    int c( 6 );    // initializer in parenthesis (direct initialization)

// List initialization methods (C++11) (preferred)
    int d { 7 };   // initializer in braces (direct list initialization)
    int e = { 8 }; // initializer in braces after equals sign (copy list initialization)
    int f {};      // initializer is empty braces (value initialization)
    std::cout << f << std::endl;
    int g = 5, h = 6;          // copy initialization
    int k( 7 ), l( 8 );        // direct initialization
    int m { 9 }, n { 10 };     // direct brace initialization
    int o = { 9 }, p = { 10 }; // copy brace initialization
    int i {}, j {};            // value initialization
    [[maybe_unused]] double pi {3.1415926};
    return 0;

}