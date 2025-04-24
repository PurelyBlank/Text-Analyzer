#ifndef IO_H
#define IO_H

#include <string>
#include <string_view>

int readNumber(std::string_view msg);
std::string readText(std::string_view msg);

#endif
