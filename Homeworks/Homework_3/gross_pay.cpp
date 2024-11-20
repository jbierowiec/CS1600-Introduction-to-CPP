#include <iostream>

using namespace std;

int main() {

    cout.setf(ios::fixed);
    cout.precision(2);

    float rate = 16.78;
    int hours, dependents;
    float gross_pay, net_pay;
    char choice;

    do {
        cout << endl;
        cout << "How many hours did you work this week? ";
        cin >> hours;
        cout << "How many dependents do you have?       ";
        cin >> dependents;

        if (hours <= 40) {
            gross_pay = rate * hours;
        } else if (hours > 40) {
            int difference1, difference2;

            difference1 = hours - 40;
            difference2 = hours - difference1;

            gross_pay = (rate * 1.5 * difference1) + (rate * difference2);
        }

        float sstax = 0.06 * gross_pay;
        float fitax = 0.14 * gross_pay;
        float sitax = 0.05 * gross_pay;
        float uniondue = 10;
        float healins = 35;

        if (dependents < 3) {
            net_pay = (gross_pay - sstax - fitax - sitax - uniondue);

            cout << endl;
            cout << "Your gross pay is:                     $" << gross_pay << endl;
            cout << "Your social security tax is:           $" << sstax << endl;
            cout << "Your federal income tax is:            $" << fitax << endl;
            cout << "Your state income tax is:              $" << sitax << endl;
            cout << "Your union dues are:                   $" << uniondue << endl;
            cout << "Your net pay is:                       $" << net_pay << endl;
            cout << endl;

        } else if (dependents >= 3) {
            net_pay = (gross_pay - sstax - fitax - sitax - uniondue - healins);

            cout << endl;
            cout << "Your gross pay is:                     $" << gross_pay << endl;
            cout << "Your social security tax is:           $" << sstax << endl;
            cout << "Your federal income tax is:            $" << fitax << endl;
            cout << "Your state income tax is:              $" << sitax << endl;
            cout << "Your union dues are:                   $" << uniondue << endl;
            cout << "Your health insurance is:              $" << healins << endl;
            cout << "Your net pay is:                       $" << net_pay << endl; 
            cout << endl;
        }

        cout << "Would you like repeat the calculation? ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    return 0;
}