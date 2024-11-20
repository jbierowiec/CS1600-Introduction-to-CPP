#include <iostream>

using namespace std;

int main() {

    cout.setf(ios::fixed);
    cout.precision(2);

    int Nclassexer;
    int score, points;
    int sumscore = 0, sumpoints = 0;
    float percentage;

    cout << "How many exercises to input? ";
    cin >> Nclassexer;
    cout << endl;

    for (int i = 0; i < Nclassexer; i++)
    {
        cout << "Score received for exercise " << i + 1 << ": ";
        cin >> score;
        cout << "Total points possible for exercise " << i + 1 << ": ";
        cin >> points;
        cout << endl;

        sumscore += score;
        sumpoints += points;

        percentage = ( float(sumscore) / float(sumpoints)) * 100;
    }
    
    cout << "Your total is " << sumscore << " out of " << sumpoints << ", or " << percentage << "%." << endl;

    return 0;
}