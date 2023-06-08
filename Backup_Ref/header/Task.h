#ifndef TASK_H
#define TASK_H

#include <iostream>
#include <string>
#include <ostream>

using namespace std;

class Task {
    private:
        int id;
        string description;
        string name;
        bool done;

    public:
        //constructor
        Task();
        Task(int, string);

        //set values
        void addDescription(string);
        void addName(string);
        void markDone();
        void displayTask();

        //return values
        int getId();
        string getName();
        string getDescription();
        string isDone();
        //ostream& operator << (ostream&, Task&) const;
};

#endif //TASK_H