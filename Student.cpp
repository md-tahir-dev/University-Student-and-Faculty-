#include <iostream>
#include "Student.h"
using namespace std;
Student::Student(): Person()
{
    this->cgpa=0.0;
}
Student::Student(string first_name, string last_name, int age, double cgpa)
    : Person(first_name, last_name, age)
{
    this->cgpa=cgpa;
}
void Student::printStudent()
{
    cout << get_firstname() << " "
         << get_lastname()
         << " is "
         << age
         << " years old, his cgpa is "
         << cgpa
         <<endl;
}
void Student::setCgpa(double cgpa)
{
    this->cgpa = cgpa;
}
double Student::getCgpa()
{
    return cgpa;
}
Student::~Student()
{

}