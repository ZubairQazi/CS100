#include "c-echo.h"

#include "gtest/gtest.h"

TEST(EchoTest, HelloWorld) {
    char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "hello"; test_val[2] = "world";
    EXPECT_EQ("hello world", echo(3,test_val));
}

TEST(EchoTest, EmptyString) {
    char* test_val[1]; test_val[0] = "./c-echo";
    EXPECT_EQ("", echo(1,test_val));
}

TEST(EchoTest, HelloThere) {
    char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "hello"; test_val[2] = "there";
    EXPECT_EQ("hello there", echo(3, test_val));
}

TEST(EchoTest, Space) {
    char * test_val[2]; test_val[0] = "./c-echo"; test_val[1] = " ";
    EXPECT_EQ(" ", echo(2, test_val));
}

TEST(EchoTest, Underscore) {
    char* test_val[2]; test_val[0] = "./c-echo"; test_val[1] = "_";
    EXPECT_EQ("_", echo(2, test_val));
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
