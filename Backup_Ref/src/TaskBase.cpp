#ifndef TASKBASE_CPP
#define TASKBASE_CPP

#include "../header/TaskBase.h"

//constructors
TaskBase::TaskBase() {
    this->task_id = 0;
    this->task_name = "";
    this->is_done = 0;
    this->description = "";
}
TaskBase::TaskBase(string name) {
    this->task_id = 0;
    this->task_name = name;
    this->is_done = 0;
}

//destructor
TaskBase::~TaskBase() {}

void TaskBase::set_name(string name) {
    this->task_name = name;
}
void TaskBase::set_status(bool status) {
    this->is_done = status;
}
void TaskBase::set_description(string desc) {
    this->description = desc;
}

//accessors
string TaskBase::get_name() {
    return this->task_name;
}
int TaskBase::get_id() {
    return this->task_id;
}

string TaskBase::get_status() {
    if(this->is_done) {
        return "Completed";
    }
    return "Incomplete";
}

string TaskBase::get_description() {
    return this->description;
}

void TaskBase::set_id(int id) {
    this->task_id = id;
}

#endif //TASKBASE_CPP