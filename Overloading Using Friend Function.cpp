#include <iostream>
using namespace std;

class Number {
    int x;

public:
    Number(int a) {
        x = a;
    }

    friend Number operator+(Number n1, Number n2);

    void display() {
        cout << "Sum = " << x;
    }
};

Number operator+(Number n1, Number n2) {
    Number temp(0);
    temp.x = n1.x + n2.x;
    return temp;
}

int main() {
    Number n1(10), n2(20);

    Number n3 = n1 + n2;

    n3.display();

    return 0;
}