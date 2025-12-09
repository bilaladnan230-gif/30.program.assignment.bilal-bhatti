#include <iostream>
using namespace std;

int main() {
    int number;
    
    // Input a number from the user
    cout << "Enter an integer: ";
    cin >> number;
    
    // Check if the number is even or odd
    if (number % 2 == 0) {
        cout << number << " is even." << endl;
    }
    
    if (number % 2 != 0) {
        cout << number << " is odd." << endl;
    }
    
    return 0;
}
