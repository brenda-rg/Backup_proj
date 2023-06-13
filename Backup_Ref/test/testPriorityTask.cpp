#include "gtest/gtest.h"
#include "../header/PriorityTask.h"
#include "../header/TagTask.h"
#include "../header/TaskBase.h"
#include "../header/DateTimeTask.h"
#include "../header/Tag.h"

using namespace std;

TEST(PriorityTask, testDefaultConstructor) {
    EXPECT_NO_THROW(PriorityTask* task = new PriorityTask());
}

TEST(PriorityTask, testDefaultConstructorInput) {
    TagTask* base = new TagTask();
    EXPECT_NO_THROW(PriorityTask* task = new PriorityTask(base));
}
TEST(PriorityTask, testDefaultConstructorInput2) {
    TagTask* base = new TagTask();
    base->add_tag("Personal");
    EXPECT_NO_THROW(PriorityTask* task = new PriorityTask(base));
}
TEST(PriorityTask, testSetPriority) {
    PriorityTask* task = new PriorityTask();
    EXPECT_NO_THROW(task->set_priority(1));
}
TEST(PriorityTask, testSetPriorityGreaterValue) {
    PriorityTask* task = new PriorityTask();
    EXPECT_NO_THROW(task->set_priority(4));
}
TEST(PriorityTask, testSetPriorityFail) {
    PriorityTask* task = new PriorityTask();
    EXPECT_THROW(task->set_priority(0), invalid_argument);
}
TEST(PriorityTask, testSetPriorityFailNegVal) {
    PriorityTask* task = new PriorityTask();
    EXPECT_THROW(task->set_priority(-1), invalid_argument);
}
TEST(PriorityTask, testGetPriority) {
    PriorityTask* task = new PriorityTask();
    task->set_priority(1);
    EXPECT_EQ(task->get_priority(), 1);
}
TEST(PriorityTask, testGetPriorityGreaterValue) {
    PriorityTask* task = new PriorityTask();
    task->set_priority(3);
    EXPECT_EQ(task->get_priority(), 3);
}
TEST(PriorityTask, testGetPriorityDefault) {
    PriorityTask* task = new PriorityTask();
    EXPECT_EQ(task->get_priority(), -1);
}