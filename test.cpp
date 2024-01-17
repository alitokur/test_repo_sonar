// test.cpp
#include "main.cpp"
#include <gtest/gtest.h>

TEST(PrimeTest, HandlesNonPrimeInput) {
    EXPECT_FALSE(isPrime(4)); // 4 is not a prime number
    EXPECT_FALSE(isPrime(6)); // 6 is not a prime number
}

TEST(PrimeTest, HandlesPrimeInput) {
    EXPECT_TRUE(isPrime(5));  // 5 is a prime number
    EXPECT_TRUE(isPrime(7));  // 7 is a prime number
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

