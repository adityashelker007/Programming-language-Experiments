#include<iostream>
#include<string>
using namespace std;

class Student
{
    public:
    string name;
    int age;
    int rollno;

    void GetInfo()
    {
        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Age: ";
        cin >> age;

        cout << "Enter Roll No: ";
        cin >> rollno;
    }

    void Display()
    {
        cout << "\nName: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll No: " << rollno << endl;
    }
};

int main()
{
    Student s1;

    s1.GetInfo();
    s1.Display();

    return 0;
}