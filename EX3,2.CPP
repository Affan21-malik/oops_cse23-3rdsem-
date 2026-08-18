#include <iostream>
using namespace std;

// Function Overloading
int add(int a, int b)
{
    return a + b;
}

double add(double a, double b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

double subtract(double a, double b)
{
    return a - b;
}

int main()
{
    cout << "Integer Addition: " << add(10, 20) << endl;
    cout << "Decimal Addition: " << add(10.5, 20.5) << endl;

    cout << "Integer Subtraction: " << subtract(30, 10) << endl;
    cout << "Decimal Subtraction: " << subtract(30.5, 10.5) << endl;

    return 0;
}