#ifndef FACULTY_H
#define FACULTY_H
#include "Person.h"
class Faculty: public Person
{
private:
    int course_count;
    int extension;
public:
    Faculty();
    Faculty(string, string, int, int, int);
    void set_Course_count(int course_count);
    void set_extension(int extension);
    void printFaculty();
    int get_Course_count();
    int get_extension();
    ~Faculty();
};

#endif