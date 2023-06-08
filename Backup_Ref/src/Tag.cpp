#include <iostream>
#include "header/Tag.h"

using namespace std;

string tagName;
int tagId;

Tag::Tag() {
    tagName = ""
    tagId = 0;
}

Tag::Tag(string name) {
    tagId = name;
    tagId = 0;
}

void Tag::set_tag(string newName) {
    tagName = newName;
}

void Tag::set_tagId(int newId) {
    tagId = newId;
}

string Tag::get_tag() {
    return tagName;
}

int Tag::get_tagId() {
    return tagId;
}