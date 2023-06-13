#ifndef FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_USERSORT_H
#define FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_USERSORT_H

//also include sql class
#include <iostream>
#include <vector>
#include <cstring>
#include "../header/TaskList.h"
#include "../header/Admin.h"

using namespace std;

class UserSort : public Admin{
    friend TaskList;
    public:
	void getTaskByAlpha(vector <PriorityTask>&);
    void getTaskByChrono(vector<PriorityTask>&);
    void getTaskByPriority(vector<PriorityTask>&);
};


#endif //FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_USERSORT_H
