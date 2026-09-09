#include <iostream>
using namespace std;

class Student
{
    int marks;

public:
    Student(int m)
    {
        marks = m;
    }

    // Friend function
    friend void showMarks(Student s);
};

// Friend function definition
void showMarks(Student s)
{
    cout << "Marks: " << s.marks << endl;
}

int main()
{
    Student s1(85);
    Student s2(90);

    showMarks(s1);
    showMarks(s2);

    return 0;
}