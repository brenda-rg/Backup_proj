#ifndef TASKLIST_H
#define TASKLIST_H

#include <iostream>
#include <list>
#include <string>
#include "../header/Task.h"

using namespace std;

class TaskList {
    friend class Task;
    private:
        list<Task> allTasks;
        list<Task>::iterator it;
        string name;
    protected:
        int size;

    public:
        TaskList();
        void addTask(string);
        void removeTask();
        void displayTaskList();

};

#endif //TASKLIST_H