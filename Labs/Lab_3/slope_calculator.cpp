#include <iostream>
#include <cmath>

using namespace std;

int main() {

    double x1, x2, y1, y2, slope, distance;

    cout << "Enter x1 : ";
    cin >> x1;
    cout << "Enter y1 : ";
    cin >> y1;
    cout << "Enter x2 : ";
    cin >> x2;
    cout << "Enter y2 : ";
    cin >> y2;

    slope = ((y2 - y1) / (x2 - x1));
    distance = sqrt( pow((x2 - x1), 2) + pow((y2 - y1), 2) );

    cout << "The slope for the line that connects two points (" << x1 << "," << y1 << ") and (" << x2 << "," << y2 << ") is " << slope << endl;
    cout << "The distance between the two points is " << distance << endl;

    return 0;
}