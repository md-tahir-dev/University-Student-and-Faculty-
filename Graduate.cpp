#include <iostream>
#include "Graduate.h"
using namespace std;
Graduate::Graduate() : Student()
{
    this->thesis_topic = "";
}
Graduate::Graduate(string first_name, string last_name, int age, double cgpa, string thesis_topic)
    : Student(first_name, last_name, age, cgpa)
{
    this->thesis_topic = thesis_topic;
}
void Graduate::set_FYPname(string thesis_topic)
{
    this->thesis_topic = thesis_topic;
}
string Graduate::Thesis_topic()
{
    return thesis_topic;
}
void Graduate::printGraduate()
{
    cout<<get_firstname()<<" "
        <<get_lastname()<<" is a graduate student, his cgpa is "
        <<getCgpa()<<" and his thesis topic is "
        <<Thesis_topic()
        <<"."
        <<endl;
}
Graduate::~Graduate()
{
    
}