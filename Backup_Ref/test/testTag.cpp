#include "gtest/gtest.h"
#include "../header/Tag.h"

using namespace std;

TEST(Tag, testConstructor) {
    EXPECT_NO_THROW(Tag* task);
}
//test year
TEST(Tag, testConstructorString) {
    EXPECT_NO_THROW(Tag tag1 = Tag("School"));
}
TEST(Tag, test) {
    EXPECT_NO_THROW(Tag tag1 = Tag("School"));
}
TEST(Tag, testConstructorStringInt) {
    EXPECT_NO_THROW(Tag tag1 = Tag(2, "School"));
}
TEST(Tag, testGetTag) {
    Tag tag1 = Tag ("School");
    EXPECT_EQ(tag1.get_tag(), "School");
}
TEST(Tag, testGetTag2) {
    Tag tag1 = Tag (2, "School");
    EXPECT_EQ(tag1.get_tag(), "School");
}
TEST(Tag, testGetId) {
    Tag tag1 = Tag (2, "School");
    EXPECT_EQ(tag1.get_id(), 2);
}