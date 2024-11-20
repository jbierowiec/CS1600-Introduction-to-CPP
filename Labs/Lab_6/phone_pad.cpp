#include <iostream>

using namespace std;

char getNumFromLetter(char c) {

    switch(c) {
        case 'A':
        case 'B':
        case 'C':
        case 'a':
        case 'b':
        case 'c':
            return '2';
        break;

        case 'D':
        case 'E':
        case 'F':
        case 'd':
        case 'e':
        case 'f':
            return '3';
        break;

        case 'G':
        case 'H':
        case 'I':
        case 'g':
        case 'h':
        case 'i':
            return '4';
        break;

        case 'J':
        case 'K':
        case 'L':
        case 'j':
        case 'k':
        case 'l':
            return '5';
        break;

        case 'M':
        case 'N':
        case 'O':
        case 'm':
        case 'n':
        case 'o':
            return '6';
        break;

        case 'P':
        case 'Q':
        case 'R':
        case 'S':
        case 'p':
        case 'q':
        case 'r':
        case 's':
            return '7';
        break;

        case 'T':
        case 'U':
        case 'V':
        case 't':
        case 'u':
        case 'v':
            return '8';
        break;

        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
        case 'w':
        case 'x':
        case 'y':
        case 'z':
            return '9';
        break;

        default:
            return 'X';

    }

    return c;

}

int main() {

    string phone;
    int len, i;
    char ans, ch, digit;

    do {
        cout << endl;
        cout << "Please enter a phone string: ";
        cin >> phone;
        len = phone.length();

        for (i = 0; i < len; i++) {
            ch = phone.at(i);

            if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
                digit = getNumFromLetter(ch);
                cout << digit;
            } else {
                cout << ch;
            }
        }

        cout << endl;
        cout << endl;
        cout << "Want to process another phone? y=yes, n=no : ";
        cin >> ans;

    } while(ans =='y' || ans == 'Y');

    cout << endl;
    cout << "Have a nice day!" << endl;
    cout << endl;

    return 0;

}
