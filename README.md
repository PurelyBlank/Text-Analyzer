# Project: Basic Text Analyzer

## Goal: 
Create a program that takes a short piece of text as input and performs some basic analysis on it.

## Core Features:

### Analysis Functions:
- Character Counter: Create a function that takes the std::string as input and returns the total number of characters (excluding whitespace).
- Word Counter: Create a function that takes the std::string as input and returns the total number of words. You can define a "word" as a sequence of non-whitespace characters separated by whitespace.
- Vowel Counter: Create a function that takes the std::string as input and returns the number of vowels (a, e, i, o, u - both uppercase and lowercase).
- Consonant Counter: Create a function that takes the std::string as input and returns the number of consonants (all non-vowel alphabetic characters).

### Output:
- Display the original input text to the user.
- Display the results of each analysis (character count, word count, vowel count, consonant count) in a clear and readable format using std::cout.

### How To Run:
1) Clone this repo
2) Run `cmake -S . -B build`
3) Run `cmake --build build` inside your project
4) To run the tests, run `./build/tests`
5) Otherwise, run `./build/text_analyzer`
