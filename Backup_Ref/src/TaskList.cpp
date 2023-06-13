#include <iostream>
#include <ostream>
#include "../header/TaskList.h"
#include "../header/Task.h"
#include <list>

using namespace std;

TaskList::TaskList() {
    name = "Schedule";
    tasks.clear();
    it = tasks.begin();
    size = 0;
}

void TaskList::addTask(string name){
    PriorityTask task = PriorityTask(name, size);
    tasks.push_back(task);
    size++;
}

void TaskList::removeTask(int id) {
    it = findTask(id);
    tasks.erase(it);
    size = size == 0?  0 : --size;
    it = tasks.begin();
}

void TaskList::editTask(int id, int change) {
    it = findTask(id);
    string input;
    int num;
    switch(change) {
        case 1:
            cout << "please enter the name you would like to use " << endl;
            getline(cin, input);
            it->set_name(input);
            break;
        case 2:
            it->set_status(1);
            break;
        case 3: 
            it->set_status(0);
            break;
        case 4:
            cout << "please enter the description for your task " << endl;
            getline(cin, input);
            it->set_description(input);
            break;
        case 5:
            cout << "please enter the date for this task in the format mm/dd/yyy " << endl;
            getline(cin, input);
            it->add_date(input);
            break;
        case 6:
            cout << "please enter a tag to add to this task" << endl;
            getline(cin, input);
            it->add_tag(input);
            break;
        case 7:
            cout << "please enter a tag to delete" << endl;
            getline(cin, input);
            it->delete_tag(input);
            break;
        case 8:
            cout << "please enter the priority (1-10) of the task 1: Urgent -> 10: Doesn't matter" << endl;
            cin >> num;
            it->set_priority(num);
            break;
        case 9:
            break;
    }

}

void TaskList::displayTaskList() {
    cout << string(59, '_')
    << endl
    << string(25, ' ')
    << "SCHEDULE"
    << string(25, ' ')
    << endl
    << string(59, '_')
    << endl;

    for(it = tasks.begin(); it != tasks.end(); it++) {
        cout << endl
        << endl
        << it->get_id()
        << ". "
        << it->get_name()
        << " --> "
        << it->get_status();

        if(it->get_hasDate()) {
        cout << " -- "
        << it->get_date();
        }
        
        if(it->get_priority() != -1) {
        cout << endl
        << " PRIORITY:  "
        << it->get_priority();
        }

        cout << endl
        << it->display_tags();

        if(it->get_description() != "") {
        cout << endl
        << "\t * "
        << it->get_description();
        }
        cout << endl << endl;
    }

    if(tasks.empty()) {
        cout << "No Tasks to do" << endl;
    }
}

vector<PriorityTask>::iterator TaskList::findTask(int id) {
    for (vector<PriorityTask>::iterator it = tasks.begin(); it != tasks.end();)
    {
        if (id == it->get_id()){
            return it;
        }
        else {
            ++it;
        }
    }
    throw invalid_argument("task not found, please enter valid task to delete");
}

int TaskList::getTaskSize() {
    return this->size;
}
vector<PriorityTask> & TaskList::getTasks() {
    return this->tasks;
}