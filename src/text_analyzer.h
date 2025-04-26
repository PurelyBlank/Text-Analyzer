#ifndef TEXT_ANALYZER_H
#define TEXT_ANALYZER_H

#include <string_view>

int characterCount(std::string_view text);
int wordCount(std::string_view text);
int vowelCount(std::string_view text);
int consonantCount(std::string_view text);

// helper functions
size_t getEndWordPos(size_t start, std::string_view text);
bool isValidWord(size_t start, size_t end, std::string_view text);
bool isAlphaChar(char c);
bool isValidPunctuation(char c);
bool isVowel(char c);

#endif
