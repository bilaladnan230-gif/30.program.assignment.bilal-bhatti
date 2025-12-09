#include <iostream>
using namespace std;

int main() {
    int num1, num2, sum, product;

    // Getting two numbers from user
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    // Calculating sum and product
    sum = num1 + num2;
    product = num1 * num2;

    // Printing results
    cout << "Sum = " << sum << endl;
    cout << "Product = " << product << endl;

    return 0;
}
