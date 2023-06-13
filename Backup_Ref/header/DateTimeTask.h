#ifndef DATETIMETASK_H
#define DATETIMETASK_H

#include<string>

#include "../header/TaskBase.h"
#include "../header/VerifyDate.h"

using namespace std;

class DateTimeTask : public TaskBase {
	protected:
        bool has_date;
        int year;
        int month;
        int day;

	public:
        DateTimeTask();
        DateTimeTask(TaskBase*);
        DateTimeTask(string);
        ~DateTimeTask();
        //functions
        void add_date(string);
        string get_date();
        int get_month();
        int get_year();
        int get_day();
        bool get_hasDate();
};


#endif //DATETIMETASK_H