#include <iostream>
using namespace std;

int main() {
    int a = 10;   // assigning value by assignment statement
    int b = 20;   // assigning value by assignment statement

    cout << "Before swapping:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    // Interchanging the values
    int temp = a;
    a = b;
    b = temp;

    cout << "After swapping:" << endl;
    cout << "b = " << b << endl;

    return 0;
}

