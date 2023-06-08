#include <iostream>

class Tag {
    private:

    protected:
    string tagName;
    int tagId;

    public:
    Tag();
    Tag(string);
    void set_tag(string);
    void set_id(int);
    string get_tag();
    int get_tagId();
}