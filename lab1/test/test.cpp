#include <gtest/gtest.h>

#include "task.h"

TEST(String_is_palindrome, test1) {
    std::string s = "";
    ASSERT_TRUE(is_palindrome(s));
}

TEST(String_is_palindrome, test2) {
    std::string s = "1";
    ASSERT_TRUE(is_palindrome(s));
}

TEST(String_is_palindrome, test3) {
    std::string s = "abccba";
    ASSERT_TRUE(is_palindrome(s));
}

TEST(String_is_palindrome, test4) {
    std::string s = "BB";
    ASSERT_TRUE(is_palindrome(s));
}

TEST(String_is_palindrome, test5) {
    std::string s = "tgt";
    ASSERT_TRUE(is_palindrome(s));
}

TEST(String_is_not_palindrome, test6) {
    std::string s = "Th";
    ASSERT_FALSE(is_palindrome(s));
}

TEST(String_is_not_palindrome, test7) {
    std::string s = "ghhok123";
    ASSERT_FALSE(is_palindrome(s));
}

TEST(String_is_not_palindrome, test8) {
    std::string s = "uuuuy";
    ASSERT_FALSE(is_palindrome(s));
}

TEST(String_is_not_palindrome, test9) {
    std::string s = "Th LOL!";
    ASSERT_FALSE(is_palindrome(s));
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
