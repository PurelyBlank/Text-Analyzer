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

### Bonus Challenges:

- Case-Insensitive Counting: Ensure your vowel and consonant counters work correctly regardless of the case of the input letters.
- Punctuation Handling: Modify your word counter to handle basic punctuation (e.g., periods, commas) so that they don't interfere with word counting. You might need to decide how you want to treat words connected by hyphens (e.g., "well-being").
- Whitespace Handling: Be mindful of multiple spaces between words or leading/trailing spaces in the input.
- Menu-Driven Interface: Instead of just running the analysis once, create a simple menu that allows the user to enter new text or exit the program.
