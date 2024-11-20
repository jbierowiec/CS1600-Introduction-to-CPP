#include <iostream>

using namespace std;

float hatsize(float weight, float height) {
    float hatsize = (weight / height) * 2.9;

    return hatsize;
}

float jacketsize(float height, float weight, int age) {
    float jacketsize = (height * weight) / 288;

    int age_adjust = (age - 30) / 10;

    if (age_adjust >= 0) {
        jacketsize = (height * weight) / 288 + (age_adjust * 0.125);
    }

    return jacketsize;
}

float waistsize(float weight, int age) {
    float waistsize = weight / 5.7;

    int age_adjust = (age - 28) / 2;

    if (age_adjust >= 0) {
        waistsize = (weight / 5.7) + (age_adjust * 0.10);
    }

    return waistsize;
}

int main() {

    cout.setf(ios::fixed);
    cout.precision(2);

    float height, weight;
    int age;
    float hat, jacket, waist;
    char choice;

    do
    {
        cout << "Enter your height: ";
        cin >> height;
        cout << "Enter your weight: ";
        cin >> weight;
        cout << "Enter your age:    ";
        cin >> age;

        hat = hatsize(weight, height);
        jacket = jacketsize(height, weight, age);
        waist = waistsize(weight, age);

        cout << "Your hat size is:    " << hat << endl;
        cout << "Your jacket size is: " << jacket << endl;
        cout << "Your waist size is:  " << waist << endl;

        cout << "Would you like repeat the calculation? ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    return 0;
}