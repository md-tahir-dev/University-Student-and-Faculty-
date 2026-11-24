#include<iostream>
#include "Faculty.h"
using namespace std;
Faculty::Faculty(): Person()
{
    this->course_count=0;
    this->extension=0;
}
Faculty::Faculty(string first_name, string last_name, int age, int course_count, int extension)
    :Person(first_name,last_name,age)
{
    this->course_count=course_count;
    this->extension=extension;
}
void Faculty::set_Course_count(int course_count)
    {
        this->course_count=course_count;
    }
void Faculty::set_extension(int extension)
    {
        this->extension=extension;
    }
    
int Faculty::get_Course_count()
    {
        return course_count;
    }
int Faculty::get_extension()
    {
        return extension;
    }
Faculty::~Faculty()
{

}
void Faculty::printFaculty()
{
    cout<<"Faculty Member name: "
        <<get_firstname() <<" "
        <<get_lastname() <<", Age: "
        <<getAge()<<", Number of courses: "
        <<get_Course_count()<<", Ext. "
        <<get_extension()
        <<endl;
}
