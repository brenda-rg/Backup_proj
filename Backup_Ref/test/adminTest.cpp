#include "gmock/gmock.h"
#include "googletest/googletest/include/gtest/gtest.h"

#include "../header/Admin.h"

TEST(Admin, testConstructor) {
    EXPECT_NO_THROW(Admin user);
}

// Not sure how to test menu yet

// TEST(Admin, testMainMenuInput) {
//     Admin user;
//     user.displayMainMenu();
//     EXPECT_NO_THROW(user.displayMainMenu());
// }

// TEST(Admin, testDisplayTasks) {
//     Admin user;
//     EXPECT_NO_THROW(user.displayTaskList());
// }

// TEST(Admin, testDisplaySettings) {
//     Admin user;
//     EXPECT_NO_THROW(user.displaySettings());
// }

// TEST(Admin, testDisplayCalendar) {
//     Admin user;
//     EXPECT_NO_THROW(user.displayCalendar());
// }