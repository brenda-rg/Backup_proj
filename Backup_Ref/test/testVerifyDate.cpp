#include "gtest/gtest.h"
#include "../header/VerifyDate.h"

using namespace std;

TEST(VerifyDate, testConstructor) {
    EXPECT_NO_THROW(VerifyDate verify);
}
//test year
TEST(VerifyDate, testYear2023) {
    VerifyDate verify;
    EXPECT_TRUE(verify.verify_monthDayYear(1,31,2023));
}
TEST(VerifyDate, testYear3000) {
    VerifyDate verify;
    EXPECT_TRUE(verify.verify_monthDayYear(1,31,2999));
}
TEST(VerifyDate, testYearInRange) {
    VerifyDate verify;
    EXPECT_TRUE(verify.verify_monthDayYear(1,31,2025));
}
TEST(VerifyDate, testYearBelowRange) {
    VerifyDate verify;
    EXPECT_TRUE(!verify.verify_monthDayYear(1,31,2022));
}
TEST(VerifyDate, testYearAboveRange) {
    VerifyDate verify;
    EXPECT_TRUE(!verify.verify_monthDayYear(1,31,3000));
}
//test month
TEST(VerifyDate, testMonth1) {
    VerifyDate verify;
    EXPECT_TRUE(verify.verify_monthDayYear(1,31,2023));
}
TEST(VerifyDate, testMonth12) {
    VerifyDate verify;
    EXPECT_TRUE(verify.verify_monthDayYear(12,31,2023));
}
TEST(VerifyDate, testMonthInRange) {
    VerifyDate verify;
    EXPECT_TRUE(verify.verify_monthDayYear(5,30,2023));
}
TEST(VerifyDate, zeroMonth) {
    VerifyDate verify;
    EXPECT_TRUE(!verify.verify_monthDayYear(0,31,2023));
}
TEST(VerifyDate, negMonth) {
    VerifyDate verify;
    EXPECT_TRUE(!verify.verify_monthDayYear(-1,31,2023));
}
TEST(VerifyDate, testMonthAboveRange) {
    VerifyDate verify;
    EXPECT_TRUE(!verify.verify_monthDayYear(13,31,2023));
}
//test day
TEST(VerifyDate, testDay1) {
    VerifyDate verify;
    EXPECT_TRUE(verify.verify_monthDayYear(1,1,2023));
}
TEST(VerifyDate, testValidDay31) {
    VerifyDate verify;
    EXPECT_TRUE(verify.verify_monthDayYear(3,31,2023));
}
TEST(VerifyDate, testInvalidDay31) {
    VerifyDate verify;
    EXPECT_TRUE(!verify.verify_monthDayYear(4,31,2023));
}
TEST(VerifyDate, testValidDay30) {
    VerifyDate verify;
    EXPECT_TRUE(verify.verify_monthDayYear(6,30,2023));
}
TEST(VerifyDate, testInvalidDay30) {
    VerifyDate verify;
    EXPECT_TRUE(!verify.verify_monthDayYear(2,30,2023));
}
TEST(VerifyDate, testValidDay29) {
    VerifyDate verify;
    EXPECT_TRUE(verify.verify_monthDayYear(2,29,2024));
}
TEST(VerifyDate, testInvalidDay29) {
    VerifyDate verify;
    EXPECT_TRUE(!verify.verify_monthDayYear(2,29,2023));
}
TEST(VerifyDate, testValidDay28) {
    VerifyDate verify;
    EXPECT_TRUE(verify.verify_monthDayYear(2,28,2023));
}
