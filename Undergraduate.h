#ifndef UNDERGRADATE_H
#define UNDERGRADATE_H
#include "Student.h"
class Undergraduate:public Student
{
private:
    string fyp_name;
public:
    Undergraduate();
    Undergraduate(string, string, int, double, string);
    ~Undergraduate();
    void set_FYPname(string fyp_name);
    void printUndergraduate();
    string get_FYPname();
};
#endif