#include <iostream>
using namespace std;

// Call by Value
void callByValue(int x)
{
    x = x + 10;
    cout << "Inside Call by Value: " << x << endl;
}

// Call by Reference
void callByReference(int &x)
{
    x = x + 10;
    cout << "Inside Call by Reference: " << x << endl;
}

// Call by Address
void callByAddress(int *x)
{
    *x = *x + 10;
    cout << "Inside Call by Address: " << *x << endl;
}

int main()
{
    int num = 20;

    cout << "Original Value: " << num << endl;

    callByValue(num);
    cout << "After Call by Value: " << num << endl;

    callByReference(num);
    cout << "After Call by Reference: " << num << endl;

    callByAddress(&num);
    cout << "After Call by Address: " << num << endl;

    return 0;
}