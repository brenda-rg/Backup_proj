#include <iostream>
#include <list>

class Tag : protected Tag {
    protected:
    list <Tag> tags;

    public:
    TagList();
    Tag(Tag&);
    void set_tag(string);
    void set_id(int);
    string get_tag();
    int get_tagId();
}