#include <iostream>
#include <string>
#include "Undergraduate.h"
#include "Graduate.h"
#include "Faculty.h"
using namespace std;
int main()
{
    Undergraduate u;
    u.set_FirstName("Muhammad");
    u.set_LastName("Tahir");
    u.setAge(19);
    u.setCgpa(3.67);
    u.set_FYPname("Library Management System");

    cout<<"Name: "<<u.get_firstname()<<" "<<u.get_lastname()<<endl;
    cout << "Age: " << u.getAge() << endl;
    cout << "CGPA: " << u.getCgpa() << endl;
    cout << "FYP: " << u.get_FYPname() << endl;
    return 0;
}