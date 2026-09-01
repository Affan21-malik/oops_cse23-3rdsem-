#include <iostream>
using namespace std;

class Student
{
    int age;

public:
    // Default Constructor
    Student()
    {
        age = 0;
        cout << "Default Constructor called" << endl;
    }

    // Parameterized Constructor
    Student(int a)
    {
        age = a;
        cout << "Parameterized Constructor called" << endl;
    }

    // Copy Constructor
    Student(const Student &s)
    {
        age = s.age;
        cout << "Copy Constructor called" << endl;
    }

    void display()
    {
        cout << "Age: " << age << endl;
    }

    // Destructor
    ~Student()
    {
        cout << "Destructor called" << endl;
    }
};

int main()
{
    Student s1;
    s1.display();

    Student s2(20);
    s2.display();

    Student s3 = s2;
    s3.display();

    return 0;
}