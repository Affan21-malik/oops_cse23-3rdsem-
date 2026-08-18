#include <iostream>
using namespace std;

// Call by Value
void updateByValue(int salary)
{
    salary = salary + 5000;
    cout << "Inside Call by Value: " << salary << endl;
}

// Call by Reference
void updateByReference(int &salary)
{
    salary = salary + 5000;
    cout << "Inside Call by Reference: " << salary << endl;
}

// Call by Address
void updateByAddress(int *salary)
{
    *salary = *salary + 5000;
    cout << "Inside Call by Address: " << *salary << endl;
}

int main()
{
    int salary1 = 30000;
    int salary2 = 30000;
    int salary3 = 30000;

    updateByValue(salary1);
    cout << "After Call by Value: " << salary1 << endl;

    updateByReference(salary2);
    cout << "After Call by Reference: " << salary2 << endl;

    updateByAddress(&salary3);
    cout << "After Call by Address: " << salary3 << endl;

    return 0;
}