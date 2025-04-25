#include "text_analyzer.h"

int characterCount(std::string_view text) {
    int charCount{};
    for (const auto &c : text) {
        if (c != ' ')
        ++charCount;        
    }
    return charCount;
}

int wordCount(std::string_view text) {
    return -1; 
}

// int vowelCount(std::string_view text);
// int consonantCount(std::string_view text);
