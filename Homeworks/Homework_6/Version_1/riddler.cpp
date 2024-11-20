#include <iostream>

using namespace std;

int main() {
    int value;

    for (int i = 0; i <= 9999; i++) {
        int thousands = i / 1000;
        int hundreds = (i / 100) % 10;
        int tens = (i / 10) % 10;
        int ones = i % 10;

        int sum = ones + tens + hundreds + thousands;

        if (sum == 27 && thousands == 3 * tens && thousands != hundreds && thousands != tens && thousands != ones && hundreds != tens && hundreds != ones && tens != ones) {  
            value = i;
        }
    }
    
    cout << "The Riddler is planning his next caper on " << value << " Pennsylvania Avenue." << endl;

    return 0;
}