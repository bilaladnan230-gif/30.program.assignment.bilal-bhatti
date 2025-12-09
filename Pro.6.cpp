#include <iostream>
using namespace std;

int main() {
    int ageYears;
    
    cout << "Enter age in years: ";
    cin >> ageYears;

    int ageMonths = ageYears * 12;   // converting years to months

    cout << "Age in months = " << ageMonths << endl;

    return 0;
}
