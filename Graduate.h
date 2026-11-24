#ifndef GRADUATE_H
#define GRADUATE_H
#include "Student.h"
class Graduate:public Student
{
private:
    string thesis_topic;
public:
Graduate();
Graduate(string,string,int,double,string);
void set_FYPname(string thesis_topic);
void printGraduate();
string Thesis_topic();
~Graduate();
};

#endif