#include "text_analyzer.h"
#include <string>
#include <iostream>

int characterCount(std::string_view text) {
    int charCount{};
    for (const auto &c : text) {
        if (c != ' ')
            ++charCount;
    }
    return charCount;
}

size_t getEndWordPos(size_t start, std::string_view text) {
    size_t end{ start };
    while (end < text.length() && text[end] != ' ')
        ++end;
    return end;
}

bool isAlphaChar(char c) {
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}

bool isValidPunctuation(char c) {
    return c == '.' || c == ',' || c == '?' || c == '!';
}

bool isValidWord(size_t start, size_t end, std::string_view text) {
    size_t index{ start };
    while (index < end && (isAlphaChar(text[index]) || text[index] == '\''))
        ++index;

    if (index + 1 < end && !isAlphaChar(text[index]))
        return false;

    return isAlphaChar(text[start]) && 
          (isAlphaChar(text[end - 1]) || isValidPunctuation(text[end - 1]));
}

int wordCount(std::string_view text) {
    int numWords{};

    for (size_t start{}; start < text.length(); ++start) {
        if (text[start] == ' ')
            continue;

        size_t endWordPos{ getEndWordPos(start, text) };
        if (isValidWord(start, endWordPos, text))
           ++numWords; 
        start = endWordPos - 1;
    }

    return numWords; 
}

bool isVowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int vowelCount(std::string_view text) {
    int numVowels{};
    
    for (const char &c : text) {
        if (isVowel(static_cast<char>(std::tolower(c))))
            ++numVowels;
    }
    return numVowels;
}

int consonantCount(std::string_view text) {
    int numConsonants{};

    for (const char &c : text) {
        if (isAlphaChar(c) && !isVowel(c))
            ++numConsonants;
    }
    return numConsonants;
}
