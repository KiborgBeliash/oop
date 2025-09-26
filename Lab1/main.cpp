#include <iostream>

#include "../include/funk.h"

int main() {
    int bound, divider, result;
    /*-----------------------------------------*/
    std::cout << "\nEnter your divider value: ";
    std::cin >> divider;
    
    std::cout << "Enter your bound value: ";
    std::cin >> bound;
    /*-----------------------------------------*/
    std::cout << "\n";

    result = calculation(divider, bound);
    
    std::cout << result;
    std::cout << "\n";


    return 0;
}