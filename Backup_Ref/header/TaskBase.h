#ifndef BACKUP_REF_TASKBASE_H
#define BACKUP_REF_TASKBASE_H

#include <iostream>
#include <string>
//also include sql class
using namespace std;

class TaskBase {
	protected:
		int task_id;
		string task_name;
		bool is_done;
		string description;
		// int generate_id();

	public:
		//constuctors
		TaskBase();
		TaskBase(string);
		//destructor
		~TaskBase();
		//modifiers
		void set_name(string);
		void set_status(bool);
		void set_description(string);
		//accessors
		string get_name();
		int get_id();
		string get_status();
		string get_description();

};


#endif //BACKUP_REF_TASKBASE_H