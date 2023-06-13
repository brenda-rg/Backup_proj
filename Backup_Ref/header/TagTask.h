#ifndef BACKUP_REF_TAGTASK_H
#define BACKUP_REF_TAGTASK_H
//also include sql class
#include <iostream>
#include "Tag.h"
#include "DateTimeTask.h"

using namespace std;

class TagTask : public DateTimeTask {
	protected:
		vector<Tag> tags;
        int tags_size;

		public:
        //constuctors
        TagTask();
        TagTask(DateTimeTask*);
        //TagTask(DateTimeTask*);
        ~TagTask();
        //modifiers
        void add_tag(string);
        void delete_tag(string);
        //accessors
        string display_tags();
        vector<Tag>::iterator find_tag(string);

};


#endif // BACKUP_REF_TAGTASK_H