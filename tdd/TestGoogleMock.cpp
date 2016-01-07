#include "gmock/gmock.h"

class TestGoogleMock: public testing::Test 
{
};
TEST_F(TestGoogleMock, SimpleTest) 
{
	ASSERT_THAT("A", testing::Eq("A"));
}

