#ifndef USERSORT_CPP
#define USERSORT_CPP

//also include sql class
#include <iostream>
#include <vector>
#include <cstring>
#include "../header/UserSort.h"

using namespace std;

//might be able to take the temp = nullptr but im not too sure

void UserSort::getTaskByAlpha(vector<PriorityTask> &tasks) {
    for(int i = 0; i < tasks.size(); i++) {
        for(int j = i+1; j < tasks.size(); j++) {
            if(tasks.at(i).get_name() > tasks.at(j).get_name()) {
                PriorityTask temp = PriorityTask(tasks.at(i));
                tasks.at(i) = tasks.at(j);
                tasks.at(j) = temp;
            }
        }
    }

}

//might need fixing
void UserSort::getTaskByChrono(vector <PriorityTask> & tasks) {
    for(int i = 0; i < tasks.size(); i++) {
        for(int j = i+1; j < tasks.size(); j++) {
            if((((tasks.at(i).get_year() > tasks.at(j).get_year()) || 
            ((tasks.at(i).get_year() >= tasks.at(j).get_year()) && (tasks.at(i).get_month() > tasks.at(j).get_month())) ||
            ((tasks.at(i).get_year() >= tasks.at(j).get_year()) && (tasks.at(i).get_month() >= tasks.at(j).get_month()) && (tasks.at(i).get_day() >= tasks.at(j).get_day()))) && (tasks.at(i).get_hasDate() && tasks.at(j).get_hasDate())) || !tasks.at(i).get_hasDate())
            {
                PriorityTask temp = PriorityTask(tasks.at(i));
                tasks.at(i) = tasks.at(j);
                tasks.at(j) = temp;
            }
        }
    }
}

void UserSort::getTaskByPriority(vector <PriorityTask> & tasks) {
    for(int i = 0; i < tasks.size(); i++) {
        for(int j = i+1; j < tasks.size(); j++) {
            if((tasks.at(i).get_priority() > tasks.at(j).get_priority() && tasks.at(j).get_priority() != -1)|| (tasks.at(i).get_priority() == -1)) {
                PriorityTask temp = PriorityTask(tasks.at(i));
                tasks.at(i) = tasks.at(j);
                tasks.at(j) = temp;
            }
        }
    }
}


#endif //USERSORT_CPP
