#include <iostream>

#include "../include/funk.h"

int main() {
    int bound, divider, res;

    std::cout << "\nEnter divider: ";
    std::cin >> divider;
    
    std::cout << "Enter bound: ";
    std::cin >> bound;

    res = calculate(divider, bound);

    std::cout << "\n" << res << "\n\n";

    return 0;
}