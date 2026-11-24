#include <iostream>
#include "Undergraduate.h"
#include "Faculty.h"
#include "Graduate.h"
using namespace std;
int main()
{
    Undergraduate student(
        "Ted",
        "Thompson",
        22,
        3.91,
        "AI Agent for University Admin Tasks");

     // cout<<"hello"<<endl;
    Faculty faculty(
        "Richard",
        "Karp",
        45,
        2,
        420);

    cout << "Undergraduate Student Information" << endl;
    cout << "Name: "
         << student.get_firstname() << " "
         << student.get_lastname() << endl;
    cout << "Age: " << student.getAge() << endl;
    cout << "CGPA: " << student.getCgpa() << endl;
    cout << "FYP Name: " << student.get_FYPname() << endl;

    cout << endl;

    cout << "Faculty Information" << endl;
    cout << "Name: "
         << faculty.get_firstname() << " "
         << faculty.get_lastname() << endl;
    cout << "Age: " << faculty.getAge() << endl;
    cout << "Courses Teaching: "
         << faculty.get_Course_count() << endl;
    cout << "Extension: "
         << faculty.get_extension() << endl;

    cout << endl;
    student.printStudent();
    faculty.printFaculty();
    Undergraduate u("Ted", "Thompson", 22, 3.91, "The Event Locator");
    Graduate g("Arnold", "Gates", 25, 3.01, "Distributed Algorithms");
    u.printUndergraduate();
    g.printGraduate();
}