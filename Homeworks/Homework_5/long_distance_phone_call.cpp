#include <iostream>

using namespace std;

int main() {

    cout.setf(ios::fixed);
    cout.precision(2);

    char choice;

    do
    {
        string dayofweek;
        int timestarted, callength;
        float rate;

        cout << "Enter the day of week you made the call: ";
        cin >> dayofweek;
        cout << "Enter the time the call started: ";
        cin >> timestarted;
        cout << "Enter how long the call was: ";
        cin >> callength;

        if((dayofweek == "Sa" || dayofweek == "Su") && (timestarted >= 0 && timestarted <= 2359)) {
            rate = 0.15;
        } else if ((dayofweek == "Mo" || dayofweek == "Tu" || dayofweek == "We" || dayofweek == "Th" || dayofweek == "Fr") && (timestarted < 800 || timestarted > 1800)) {
            rate = 0.25;
        } else if ((dayofweek == "Mo" || dayofweek == "Tu" || dayofweek == "We" || dayofweek == "Th" || dayofweek == "Fr") && (timestarted >= 800 && timestarted <= 1800)) {
            rate = 0.40;
        } 

        float cost = rate * callength;

        cout << "Your call costs: $" << cost << endl;
        cout << "Would you like repeat the calculation? ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');
    
    return 0;
}