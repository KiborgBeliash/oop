#include <iostream>

#include "../include/funk.h"

int main() {
    int bound_value, divider_value, resotte;

    std::cout << "\nEnter your divider value: ";
    std::cin >> divider_value;
    
    std::cout << "Enter your bound value: ";
    std::cin >> bound_value;
    std::cout << "\n";

    resotte = calc(divider_value, bound_value);
    
    std::cout << resotte;
    

    std::cout << "\n" << " _  ___   ___  _  _   ";
    std::cout << "\n" << "/ |/ _ \ ( _ )| || |  ";
    std::cout << "\n" << "| | (_) |/ _ \| || |_ ";
    std::cout << "\n" << "| |\__, | (_) |__   _|";
    std::cout << "\n" << "|_|  /_/ \___/   |_|  ";
    std::cout << "\n";
    
    return 0;
}