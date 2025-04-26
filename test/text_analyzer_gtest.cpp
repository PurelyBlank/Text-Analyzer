#include "gtest/gtest.h"
#include "../src/text_analyzer.cpp"

namespace {
// characterCount function, whitespace does NOT
// count as characters in our function

TEST(CharacterCount, NoChars) {
    EXPECT_EQ(characterCount(""), 0);
    EXPECT_EQ(characterCount(" "), 0);
    EXPECT_EQ(characterCount("      "), 0);
}

TEST(CharacterCount, OneChar) {
    EXPECT_EQ(characterCount("a"), 1);
    EXPECT_EQ(characterCount(" a"), 1);
    EXPECT_EQ(characterCount(" a "), 1);
    EXPECT_EQ(characterCount("a "), 1);
}

TEST(CharacterCount, MultipleChars) {
    EXPECT_EQ(characterCount("abc"), 3);
    EXPECT_EQ(characterCount("abcdefghijklmnopqrstuvwxyz"), 26);
}

TEST(CharacterCount, MultiplCharsWithSpaces) {
    EXPECT_EQ(characterCount(" abc"), 3);
    EXPECT_EQ(characterCount("abc "), 3);
    EXPECT_EQ(characterCount("ab c "), 3);
    EXPECT_EQ(characterCount("a b c "), 3);
    EXPECT_EQ(characterCount(" a b c "), 3);
    EXPECT_EQ(characterCount("    abcdefghijklmn  opqrstuvwxyz"), 26);
    EXPECT_EQ(characterCount("    a bcd ef ghijk l mnopqrstuvwx yz"), 26);
}

TEST(CharacterCount, SpecialChars) {
    EXPECT_EQ(characterCount("$$fs%{:'~.  <>|+$ *()asdRIQ(A!$:> "), 30);
}

// --------------------------------------------------------------------------- //

// getEndWordPos function
TEST(GetEndWordPos, Positions) {
    EXPECT_EQ(getEndWordPos(0, "Hello"), 5);
    EXPECT_EQ(getEndWordPos(6, "Hello World"), 11); 
}

// isValidWord function
TEST(IsValidWord, ValidWords) {
    EXPECT_TRUE(isValidWord(0, 5, "Hello"));
    EXPECT_TRUE(isValidWord(6, 11, "Hello World"));
    EXPECT_TRUE(isValidWord(0, 5, "don't"));
}

TEST(IsValidWord, InValidWords) {
    EXPECT_FALSE(isValidWord(0, 5, "*@!#@"));
    EXPECT_FALSE(isValidWord(3, 6, "do He%"));
    EXPECT_FALSE(isValidWord(0, 3, "!no"));
}

// isAlphaCharfunction
TEST(IsAlphaChar, IsAlphabeticalChar) {
    EXPECT_TRUE(isAlphaChar('a'));
    EXPECT_TRUE(isAlphaChar('z'));
    EXPECT_TRUE(isAlphaChar('o'));
    EXPECT_TRUE(isAlphaChar('A'));
    EXPECT_TRUE(isAlphaChar('Z'));
    EXPECT_TRUE(isAlphaChar('G'));
}

TEST(IsAlphaChar, IsNotAlphabeticalChar) {
    EXPECT_FALSE(isAlphaChar('`'));
    EXPECT_FALSE(isAlphaChar('{'));
    EXPECT_FALSE(isAlphaChar('@'));
    EXPECT_FALSE(isAlphaChar('['));
    EXPECT_FALSE(isAlphaChar('0'));
    EXPECT_FALSE(isAlphaChar('_'));
}

// wordCount function 

TEST(WordCount, NoWords) {
    EXPECT_EQ(wordCount(""), 0); 
    EXPECT_EQ(wordCount("   "), 0);
    EXPECT_EQ(wordCount("#$@$#"), 0);
    EXPECT_EQ(wordCount("asd$$!@"), 0);
    EXPECT_EQ(wordCount("$(@asd yesn' adsf*asf"), 0);
}

TEST(WordCount, OneWord) {
    EXPECT_EQ(wordCount("a"), 1);
    EXPECT_EQ(wordCount("ahasd"), 1);
    EXPECT_EQ(wordCount("   gasp"), 1);
    EXPECT_EQ(wordCount("don't"), 1);
}

TEST(WordCount, MultipleWords) {
    EXPECT_EQ(wordCount("a pan"), 2);
    EXPECT_EQ(wordCount("I didn't"), 2);
    EXPECT_EQ(wordCount("On a nice summer day, I won't be indoors"), 9);
    EXPECT_EQ(wordCount("41$a as $@! don't ask !no"), 3);
}

// --------------------------------------------------------------------------- //

// vowelCount function

TEST(VowelCount, NoVowels) {
    EXPECT_EQ(vowelCount("g"), 0);
    EXPECT_EQ(vowelCount("ghssss"), 0);
    EXPECT_EQ(vowelCount("gyfs"), 0);
}

TEST(VowelCount, OneVowel) {
    EXPECT_EQ(vowelCount("ghast"), 1);
    EXPECT_EQ(vowelCount("shaft"), 1);
}

TEST(VowelCount, MultipleVowels) {
    EXPECT_EQ(vowelCount("brisket"), 2);
    EXPECT_EQ(vowelCount("eulogia"), 5);
    EXPECT_EQ(vowelCount("miaoued"), 5);
    EXPECT_EQ(vowelCount("suoidea"), 5);
}

// --------------------------------------------------------------------------- //

// consonantCount function

TEST(ConsonantCount, NoConsonants) {
    EXPECT_EQ(consonantCount("a"), 0);
    EXPECT_EQ(consonantCount("aeiou"), 0);
}

TEST(ConsonantCount, OneConsonant) {
    EXPECT_EQ(consonantCount("l"), 1);
    EXPECT_EQ(consonantCount("laaaa"), 1);
}

TEST(ConsonantCount, MultipleConsonant) {
    EXPECT_EQ(consonantCount("laugh"), 3);
    EXPECT_EQ(consonantCount("frankenstein"), 8);
}

}
