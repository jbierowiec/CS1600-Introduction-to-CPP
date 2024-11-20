#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    char letter;

    cout << "Enter a string : ";
    getline(cin, input);

    int length = input.length();

    for (char letter = 'a'; letter <= 'z'; letter++) {
        
        int counter = 0; 

        for (int i = 0; i < length; i++) {

            char ch = tolower(input.at(i));
            
            if (ch == letter) {
                counter++;
            }
        }

        if (counter > 0) {
            cout << letter << ": " << counter << " time(s)" << endl;
        }
    }

    return 0;
}
