#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "header.h"

TEST(uTest, smallTest)
{
    using ::testing::ElementsAre;

    std::vector<int> vec {3, 1, 2, 3, 6};
    EXPECT_THAT(solution(vec), ElementsAre(2, 4, 3, 2, 0));
}

int main(int argc, char* argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}