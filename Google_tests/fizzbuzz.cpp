#include "gtest/gtest.h"


std::string fizzBuzz(int i){
	return "1";
}


TEST(Fizbuzz, CanCallFizzBuzzfunction) {
	EXPECT_EQ(fizzBuzz(1), "1");
}

TEST(Fizbuzz, WhenDivisibleBy3ShouldSayFizz) {
	EXPECT_EQ(fizzBuzz(6), "Fizz");
}

TEST(Fizbuzz, WhenDivisibleBy5ShouldSayBuzz) {
	EXPECT_EQ(fizzBuzz(10), "Buzz");
}

TEST(Fizbuzz, WhenDivisibleBy15ShouldSayBuzz) {
	EXPECT_EQ(fizzBuzz(15), "FizzBuzz");
}
