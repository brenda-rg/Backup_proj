#ifndef TASKLIST_H
#define TASKLIST_H

#include <iostream>
#include <vector>
#include <string>
#include "../header/Task.h"
#include "../header/PriorityTask.h"

using namespace std;

class TaskList {
    friend class PriorityTask;
    protected:
        vector<PriorityTask> tasks;
        vector<PriorityTask>::iterator it;
        string name;
        int size;

    public:
        TaskList();
        void addTask(string);
        void removeTask(int);
        void editTask(int, int);
        void displayTaskList();
        vector<PriorityTask>::iterator findTask(int);
        int getTaskSize();
        vector<PriorityTask> & getTasks();
};

#endif //TASKLIST_H