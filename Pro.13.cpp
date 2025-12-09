#include <iostream>
using namespace std;

int main() {
    float mm;

    cout << "Enter millimeters: ";
    cin >> mm;

    float inches = mm / 25.4;

    cout << mm << " mm = " << inches << " inches" << endl;

    return 0;
}
