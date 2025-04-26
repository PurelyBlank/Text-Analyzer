#include "../helpers/io.h"
#include "text_analyzer.h"
#include <string>
#include <string_view>
#include <iostream>

void outputTextAnalysis(std::string_view text) {
    std::cout << "There are " << characterCount(text) << " character(s) in your text." << '\n';  
    std::cout << "There are " << vowelCount(text) << " vowel(s) in your text." << '\n';  
    std::cout << "There are " << consonantCount(text) << " consonant(s) in your text." << '\n';  
    std::cout << "There are " << wordCount(text) << " word(s) in your text." << '\n';  
}

int main() {
    std::string text{ readText("Please enter a text: ") };
    outputTextAnalysis(text); 
     
    return 0;
}
