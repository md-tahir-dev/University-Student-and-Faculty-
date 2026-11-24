#ifndef PERSON_H
#define PERSON_H
#include <string>
using namespace std;
class Person
{
private:
    string first_name;
    string last_name;
protected:
    int age;
public:
    Person();
    Person(string,string, int);
    ~Person();
    void printInformation();
    void set_FirstName(string name);
    void set_LastName(string name);
    void setAge(int age);

    string get_firstname();
    string get_lastname();
    int getAge();
};

#endif