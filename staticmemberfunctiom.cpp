#include <iostream>
using namespace std;

class Student
{
private:
    int rollNo;
    static int count;

public:
    Student(int r)
    {
        rollNo = r;
        count++;
    }

    static void showCount()
    {
        cout << "Total number of students: " << count << endl;
    }
};

// Definition of static data member
int Student::count = 0;

int main()
{
    Student s1(101);
    Student s2(102);
    Student s3(103);

    Student::showCount();

    return 0;
}