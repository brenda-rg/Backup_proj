#include "gtest/gtest.h"
#include "../header/DateTimeTask.h"
#include "../header/TaskBase.h"
#include <iostream>
using namespace std;

TEST(DateTimeTask, test_Constructor) {
    EXPECT_NO_THROW(DateTimeTask* task = new DateTimeTask());
}

TEST(DateTimeTask, testConstructor_usingTaskBase) {
    TaskBase* baseTask = new TaskBase();
    EXPECT_NO_THROW(DateTimeTask* task = new DateTimeTask(baseTask));
}

TEST(DateTimeTask, testConstructor_TaskBaseNamed) {

    TaskBase* baseTask = new TaskBase();
    baseTask->set_name("original");

    EXPECT_NO_THROW(DateTimeTask* task = new DateTimeTask(baseTask));
}

TEST(DateTimeTask, testConstructor_TaskBaseNamedValue) {

    TaskBase* baseTask = new TaskBase();
    baseTask->set_name("original");

    DateTimeTask* task = new DateTimeTask(baseTask);
    
    EXPECT_EQ(baseTask->get_name() , task->get_name());
}

TEST(DateTimeTask, testConstructor_Date) {
    EXPECT_NO_THROW(DateTimeTask* task = new DateTimeTask("12/14/2023"));
}
TEST(DateTimeTask, testConstructor_DateFail) {
    EXPECT_THROW(DateTimeTask* task = new DateTimeTask("13/14/2023"), out_of_range);
}

TEST(DateTimeTask, test_addDate) {
    DateTimeTask* task = new DateTimeTask();
    task->add_date("10/30/2023");
    EXPECT_EQ(task->get_date() , "10/30/2023");
}
TEST(DateTimeTask, test_addDate2) {
    DateTimeTask* task = new DateTimeTask();
    task->add_date("05/03/2023");
    EXPECT_EQ(task->get_date() , "5/3/2023");
}

TEST(DateTimeTask, test_addDate3) {
    DateTimeTask* task = new DateTimeTask();
    task->add_date("2/14/2023");
    EXPECT_EQ(task->get_date() , "2/14/2023");
}
TEST(DateTimeTask, test_addDate4) {
    DateTimeTask* task = new DateTimeTask();
    task->add_date("2/29/2023");
    EXPECT_EQ(task->get_date() , "0/0/0");
}
TEST(DateTimeTask, test_addDate5) {
    DateTimeTask* task = new DateTimeTask();
    task->add_date("2/29/2024");
    EXPECT_EQ(task->get_date() , "2/29/2024");
}
TEST(DateTimeTask, test_addDate6) {
    DateTimeTask* task = new DateTimeTask();
    task->add_date("0/29/2024");
    EXPECT_EQ(task->get_date() , "0/0/0");
}
