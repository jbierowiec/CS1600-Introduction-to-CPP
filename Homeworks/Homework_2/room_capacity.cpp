#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int maxcap, numpeop;
    char choice;

    do {
        cout << "What is the maximum room capacity?       ";
        cin >> maxcap;
        cout << "How many people will attend the meeting? ";
        cin >> numpeop;

        int rem = abs(maxcap - numpeop);

        if (numpeop <= maxcap) {
        cout << "It is legal to hold the meeting. " << rem << " additional people may legally attend." << endl;
        } else if (numpeop > maxcap) {
            cout << "The meeting cannot be held as planned due to fire regulartions. " << rem << " must be excluded in order to meet the fire regulations." << endl;
        }

        cout << "Would you like repeat the calculation?   ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    return 0;
}