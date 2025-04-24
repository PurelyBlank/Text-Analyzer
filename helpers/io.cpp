#include "io.h"
#include <iostream>

int readNumber(std::string_view msg)
{
    std::cout << msg;
    int number{};
    std::cin >> number;
    return number;
}

std::string readText(std::string_view msg)
{
    std::cout << msg;
    std::string text{};
    std::getline(std::cin >> std::ws, text);
    return text; 
}
