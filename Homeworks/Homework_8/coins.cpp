#include <iostream>

using namespace std;

void compute_coins(int coin_value, int& num, int& amount_left) {

    num = amount_left / coin_value;
    amount_left = amount_left % coin_value;
}   

int main() {

    int change;
    int quarter = 25, dime = 10, nickel = 5, penny = 1;
    int number_of_quarters = 0, number_of_dimes = 0, number_of_nickels = 0, number_of_pennies = 0;

    cout << "What is your amount of change from 1 to 99 cents? ";
    cin >> change;

    int original_change = change;

    compute_coins(quarter, number_of_quarters, change);
    compute_coins(dime, number_of_dimes, change);
    compute_coins(nickel, number_of_nickels, change);
    compute_coins(penny, number_of_pennies, change);

    cout << original_change << " cents can be given as " << endl;
    cout << number_of_quarters << " quarter(s) " << number_of_dimes << " dime(s) " << number_of_nickels << " nickel(s) " << number_of_pennies << " penny/pennies " << endl;

    return 0;
}