#ifndef TAG_CPP
#define TAG_CPP

//also include sql class

#include "../header/Tag.h"
using namespace std;

Tag::Tag() {
    tag_id = 0;
    tag_name = "";
}

Tag::Tag(string tagName) {
    tag_id = 0;
    tag_name = tagName;
}

Tag::Tag(int tags_size, string tagName) {
    tag_id = tags_size;
    tag_name = tagName;
}
//modifiers
void Tag::set_tagId(int newId) {
    tag_id = newId;
}
//accessors
string Tag::get_tag() {
    return tag_name;
}
int Tag::get_id() {
    return tag_id;
}


#endif //TAG_CPP
