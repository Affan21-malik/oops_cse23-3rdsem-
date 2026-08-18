#include <iostream>
using namespace std;

// Inline Function
inline int square(int n)
{
    return n * n;
}

// Default Argument
int add(int a, int b = 10)
{
    return a + b;
}

int main()
{
    cout << "Square of 5: " << square(5) << endl;

    cout << "Addition with default argument: " << add(20) << endl;

    cout << "Addition with two arguments: " << add(20, 30) << endl;

    return 0;
}