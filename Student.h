#ifndef STUDENT_H
#define STUDENT_H
#include "Person.h"
class Student:public Person
{
private:
    double cgpa;
public:
    Student();
    Student(string,string,int,double);
    ~Student();
    void printStudent();
    void setCgpa(double cgpa);
    double getCgpa();
};
#endif