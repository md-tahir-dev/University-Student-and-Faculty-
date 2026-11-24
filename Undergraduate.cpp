#include <iostream>
#include "Undergraduate.h"
using namespace std;
Undergraduate::Undergraduate(): Student()
{
    this->fyp_name="";
}
Undergraduate::Undergraduate(string first_name, string last_name, int age, double cgpa, string fyp_name)
    : Student(first_name, last_name, age, cgpa)
{
    this->fyp_name = fyp_name;
}
void Undergraduate::set_FYPname(string fyp_name)
{
    this->fyp_name = fyp_name;
}
string Undergraduate::get_FYPname()
{
    return fyp_name;
}
void Undergraduate::printUndergraduate()
{
    cout<<get_firstname()<<" "
        <<get_lastname()
        <<" is an undergraduate student, his cgpa is "
        <<getCgpa()
        <<" and his final year project is titled "
        <<get_FYPname()
        <<endl;
}
Undergraduate::~Undergraduate()
{
    
}