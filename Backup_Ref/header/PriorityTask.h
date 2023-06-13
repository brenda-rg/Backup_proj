#ifndef BACKUP_REF_PRIORITYTASK_H
#define BACKUP_REF_PRIORITYTASK_H

//also include sql class
#include <iostream>
#include <vector>
#include "TagTask.h"

using namespace std;

class PriorityTask : public TagTask {
	protected:
        int priority;

		public:
        //constuctors
        PriorityTask();
        PriorityTask(string);
        PriorityTask(string, int);
        PriorityTask(TagTask*);
        ~PriorityTask();

        //modifiers
        void set_priority(int);
        void remove_priority();

        //accessors
        int get_priority();
};


#endif //BACKUP_REF_PRIORITYTASK_H