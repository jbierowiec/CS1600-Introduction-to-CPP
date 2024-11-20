#include <iostream>

using namespace std;

int main() {

    double v0, v1, t, a;

    cout << "Enter the starting velocity vO : ";
    cin >> v0;
    cout << "Enter the ending velocity v1   : ";
    cin >> v1;
    cout << "Enter the time t               : ";
    cin >> t;

    a = ((v1 - v0) / t);

    cout << "The average acceleration is " << a << endl;

    return 0;
}