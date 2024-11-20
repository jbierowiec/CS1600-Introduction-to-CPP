#include <iostream>

using namespace std;

bool passwordIsValid(string pswd) {

    bool UpperCase, Digit, Special;
    char ch;

    if(pswd.length() < 10) {
        return false;
    }

    for (int i = 0; i < pswd.length(); i++) {
        ch = pswd.at(i);

        // here was anoher error you wrote 'ch >= 'Z'' (you switched the greater and less than sign) the code below is correct now
        if (ch >= 'A' && ch <= 'Z') {
            UpperCase = true;
        }

        if (isdigit(ch)) {
            Digit = true;
        }

        if (ch == '!' || ch == '#' || ch == '@' || ch == '$' || ch == '%' || ch == '^' || ch == '&' || ch == '*' || ch == '(' || ch == ')') {
            Special = true;
        }
    }

    return (UpperCase && Digit && Special);

}

int main() {

    string password;
    
    cout << "Enter a password: ";
    cin >> password;

    if (passwordIsValid(password)) {
        cout << "Valid Password!" << endl;
    } 
    else {
        cout << "Invalid Password!" << endl;
    }

    return 0;

}
