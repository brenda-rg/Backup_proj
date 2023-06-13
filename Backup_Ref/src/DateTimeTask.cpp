#include "../header/DateTimeTask.h"
#include "../header/VerifyDate.h"
#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>

using namespace std;

DateTimeTask::DateTimeTask() {
    TaskBase();
    this->has_date = 0;
    this->year = 0;
    this->month = 0;
    this->day = 0;
}
DateTimeTask::DateTimeTask(TaskBase* oldTask) {
    this->task_name = oldTask->get_name();
    this->task_id = oldTask->get_id();
    this->has_date = 0;
    this->year = 0;
    this->month = 0;
    this->day = 0;
}

DateTimeTask::DateTimeTask(string date) {
    this->task_name = "";
    this->task_id = 0;
    this->add_date(date);
    if(!(this->has_date)) {
        throw out_of_range("Enter valid date format mm/dd/yyy");
    }
}

DateTimeTask::~DateTimeTask(){}

//** NOTE FOR INPUT CREATOR **
//make sure it is input as "mm/dd/yyyy"
//or at least "m/d/yyyy"

//**NOTE** may want to make return bool so that if date invalid it asks for input again
void DateTimeTask::add_date(string date) {
    char parsedDate[date.size()+1];
    for(int i = 0; i < date.size() ; ++i) {
        parsedDate[i] = date.at(i);
    }
    int  m;
    int d;
    int y;
    sscanf(parsedDate, "%2d/%2d/%4d" , &m, &d, &y);
    
    VerifyDate verify;
    if(verify.verify_monthDayYear(m,d,y) ) {
        this->month  = m;
        this->year = y;
        this->day = d;
        this->has_date = 1;
    }
    else {this->has_date = 0;}
}

string DateTimeTask::get_date() {
    //**NOTE** can also make a string object in the class that just does this
    return to_string(this->month) + "/" + to_string(this->day) + "/" + to_string(this->year);
}

int DateTimeTask::get_year() {
    return this->year;
}
int DateTimeTask::get_month() {
    return this->month;
}
int DateTimeTask::get_day() {
   return this->day;
   
}
bool DateTimeTask::get_hasDate() {
    return this->has_date;
}
