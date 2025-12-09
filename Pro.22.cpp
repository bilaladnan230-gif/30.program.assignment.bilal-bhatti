#include <iostream>
using namespace std;

int main() {
    float r, area, circumference;
    const float PI = 3.1416;

    cout << "Enter radius: ";
    cin >> r;

    area = PI * r * r;
    circumference = 2 * PI * r;

    cout << "Area = " << area << endl;
    cout << "Circumference = " << circumference << endl;

    return 0;
}
