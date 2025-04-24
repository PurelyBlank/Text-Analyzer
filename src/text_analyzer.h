#ifndef TEXT_ANALYZER_H
#define TEXT_ANALYZER_H

#include <string_view>
#include "../helpers/io.h"

int characterCount(std::string_view text);
int wordCount(std::string_view text);
int vowelCount(std::string_view text);
int consonantCount(std::string_view text);

#endif
