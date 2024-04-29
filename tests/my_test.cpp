#include <gtest/gtest.h>

namespace {
	int GetMeaningOfLife() {return 42;}
}


TEST(TestTopic, LACIKA_TESTJE){
	EXPECT_EQ(GetMeaningOfLife(),42);
}

TEST(TestTopic, LACIKA_HIBAJA){
	EXPECT_EQ(GetMeaningOfLife(),42);
	ASSERT_EQ(GetMeaningOfLife(),42);

}