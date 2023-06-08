#include <iostream>
#include "../header/Task.h"

using namespace std;

//constructors
Task::Task() {
    id = 0;
    name = "";
    description = "";
    done = 0;
}
Task::Task(int newId, string t_name) {
    id = newId;
    name = t_name;
    description = "made a new task testing";
    done = 0;
}
//Task::~Task() = default;

//setters
void Task::addDescription(string newDesc) {
    this->description = newDesc;
}
void Task::addName(string newName) {
   this->name = newName;
}
void Task::markDone() {
    this->done = 1;
}
//getters
int Task::getId() {
    return id;
}
string Task::getName() {
    return name;
}
string Task::getDescription() {
    return description;
}
string Task::isDone() {
    if(!(done)) {
        return "NOT DONE";
    }
    else {
        return "DONE";
    }
}
//display
void Task::displayTask() {
    cout << id
    << "--"
    << name
    << "--"
    << description
    << "--"
    << isDone()
    << endl;
}
// ostream& operator<< (ostream& out, Task& task) const {
//     out << task.getId() << "--" 
//     << task.getName() 
//     << "--" 
//     << task.getDescription() 
//     << "--"
//     << task.isDone();
//     return out;
// }

