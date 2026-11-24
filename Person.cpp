#include <iostream>
#include "Person.h"
using namespace std;

Person::Person()
{
    this->first_name = "";
    this->last_name = "";
    this->age = 0;
}

Person::Person(string first_name, string last_name, int age)
{
    this->first_name = first_name;
    this->last_name = last_name;
    this->age = age;
}
void Person::printInformation()
{
    cout << first_name << " "
         << last_name
         << " is "
         << age
         << " years old" << endl;
}
void Person::set_FirstName(string name)
{
    this->first_name = name;
}
void Person::set_LastName(string name)
{
    this->last_name = name;
}
void Person::setAge(int age)
{
    this->age = age;
}
string Person::get_firstname()
{
    return first_name;
}
string Person::get_lastname()
{
    return last_name;
}
int Person::getAge()
{
    return age;
}
Person::~Person()
{
}