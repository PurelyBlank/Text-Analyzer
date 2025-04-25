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

// wordCounter function 

TEST(WordCount, NoWords) {
    EXPECT_EQ(wordCount(""), 0); 
    EXPECT_EQ(wordCount("   "), 0);
    EXPECT_EQ(wordCount("#$@$#"), 0);
    EXPECT_EQ(wordCount("asd$$!@"), 0);
}

TEST(WordCount, OneWord) {
    EXPECT_EQ(wordCount("a"), 1);
    EXPECT_EQ(wordCount("ahasd"), 1);
}

}
