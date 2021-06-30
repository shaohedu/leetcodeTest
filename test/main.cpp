#include <iostream>

#include "math.hpp"
#include "to_string_test.hpp"
#include "is_palindrome.hpp"

int main(int argc, const char* argv[]) {
    for (int i = 1; i < argc; i++) {
        std::cout << argv[i] << "\t" << Square(std::stoi(argv[i])) << std::endl;
    }
    //toStringTest();
    int x;
    std::cin >> x ;
    std::cout << isPalindrome(x) << std::endl;
    return 0;
}
