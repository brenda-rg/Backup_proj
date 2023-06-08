#include <iostream>
#include <ostream>
#include "../header/TaskList.h"
#include "../header/Task.h"
#include <list>

using namespace std;

TaskList::TaskList() {
    name = "Schedule";
    allTasks.clear();
    it = allTasks.begin();
    size = 0;
}

void TaskList::addTask(string name){
    Task task = Task(size, name);
    allTasks.push_back(task);
    size++;
}
void TaskList::removeTask() {
    //STUB//
    cout << "----STUB----"
    << endl
    << "Complete removeTask()"
    << endl;
}

void TaskList::displayTaskList() {
    cout << string(59, '_')
    << endl
    << string(25, ' ')
    << "TASK LIST"
    << string(25, ' ')
    << endl
    << string(59, '_')
    << endl;

    for(it = allTasks.begin(); it != allTasks.end(); it++) {
        cout << endl
        << endl
        << it->getId()
        << ". "
        << it->getName()
        << " --> "
        << it->isDone();

        if(it->getDescription() != "") {
        cout << endl
        << "\t * "
        << it->getDescription();
        }
        cout << endl << endl;
    }

    if(allTasks.empty()) {
        cout << "No Tasks to do" << endl;
    }
}