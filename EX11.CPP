#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

double add(double a, double b)
{
    return a + b;
}

int main()
{
    int x = 10, y = 20;
    double p = 5.5, q = 4.5;

    cout << "Addition of integers: " << add(x, y) << endl;
    cout << "Addition of doubles: " << add(p, q) << endl;

    return 0;
}