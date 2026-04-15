/**
 * Unit Tests for Password class
**/

#include <gtest/gtest.h>
#include "Password.h"

class PasswordTest : public ::testing::Test
{
	protected:
		PasswordTest(){} //constructor runs before each test
		virtual ~PasswordTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PasswordTest, single_letter_password)
{
	Password my_password;
	int actual = my_password.count_leading_characters("Z");
	ASSERT_EQ(1, actual);
}

TEST(PasswordTest, two_letter_password)
{
	Password my_password;
	int actual = my_password.count_leading_characters("ZZ");
	ASSERT_EQ(2, actual);
}

TEST(PasswordTest, mixed_case_password)
{
	Password my_password;
	ASSERT_EQ(2, my_password.count_leading_characters("ZZz"));
}

TEST(PasswordTest, empty_password)
{
	Password my_password;
	ASSERT_EQ(0, my_password.count_leading_characters(""));
}

TEST(PasswordTest, mixed_case_spaces_password)
{
	Password my_password;
	ASSERT_EQ(2, my_password.count_leading_characters("Z Zz"));
}

TEST(PasswordTest, mixed_case_starting_space_password)
{
	Password my_password;
	ASSERT_EQ(2, my_password.count_leading_characters(" ZZz"));
}

TEST(PasswordTest, mixed_case_pass)
{
	Password my_password;
	ASSERT_EQ(0, my_password.count_leading_characters("zZZz"));
}


