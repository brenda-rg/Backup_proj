#ifndef TAGTASK_CPP
#define TAGTASK_CPP

const int MAX_SIZE = 10;
//also include sql class
#include <vector>
#include "../header/TagTask.h"
#include "../header/DateTimeTask.h"
#include "../header/Tag.h"

using namespace std;

TagTask::TagTask() {
    DateTimeTask();
    tags_size = 0;
}

TagTask::TagTask(DateTimeTask* oldTask)  {
    this->tags_size = 0;
    this->task_id = 0;
    this->task_name = oldTask->get_name();
    this->is_done = oldTask->get_status() == "Completed" ? 1:0;
    this->has_date = oldTask->get_status() == "Completed" ? 1:0;
    this->year = oldTask->get_year();
    this->month = oldTask->get_month();
    this->day = oldTask->get_day();
    this->has_date = 0;
}

TagTask::~TagTask() {}

//modifiers
void TagTask::add_tag(string name) {
    Tag newTag = Tag(name);
    if(this->tags_size < MAX_SIZE) {
        this->tags.push_back(newTag);
        ++(this->tags_size);
    }
    else {
        throw out_of_range("Too many tags, please delete one before adding");
    }
}

void TagTask::delete_tag(string name) {
    if(tags_size > 0) {
        vector<Tag>::iterator it = find_tag(name);
        it = tags.erase(it);
        --(this->tags_size);
    }
    else {
        throw invalid_argument("No tags present, cannot delete");
    }
}
//accessors
//change to fit UI
string TagTask::display_tags() {
    string allTasks = "TAGS: ";
    for(int i = 0; i < tags_size; ++i) {
        allTasks += tags.at(i).get_tag();
        allTasks = (i == tags_size-1) ? allTasks : allTasks + ", ";
    }
    return allTasks;
}

vector<Tag>::iterator TagTask::find_tag(string name) {
    for (vector<Tag>::iterator it = tags.begin(); it != tags.end();)
    {
        if (name == it->get_tag()){
            return it;
        }
        else {
            ++it;
        }
    }
    throw invalid_argument("tag not found, please enter valid tag to delete");
}


#endif //TAGTASK_CPP
