#include <iostream>
#include <cmath>

using namespace std;

int main() {

    cout.setf(ios::fixed);
    cout.precision(2);

    string name;
    int cervbooks, hombooks, shksprebooks;
    float cervantes = 41.25;
    float homer = 15.85;
    float shakespeare = 30.50;
    float cervtot, homtot, shkspretot;
    float tot;
    float tax = 0.10;
    float taxtot, totwtax;

    cout << "Welcome to the Bronx Bookstore" << endl;
    cout << "Enter your first name: ";
    cin >> name;
    cout << "Enter number of Cervantes books: ";
    cin >> cervbooks;
    cout << "Enter number of Homer books: ";
    cin >> hombooks;
    cout << "Enter number of Shakespeare books: ";
    cin >> shksprebooks;

    cervtot = cervantes * cervbooks;
    homtot = homer * hombooks;
    shkspretot = shakespeare * shksprebooks;

    tot = cervtot + homtot + shkspretot;

    taxtot = tot * tax;

    totwtax = tot + taxtot;

    cout << "Total cost of order is: $" << totwtax << endl;

    float pay;

    cout << endl;
    cout << "How much money will you pay? $";
    cin >> pay;
    cout << endl;

    float change;

    change = abs(pay - totwtax);

    cout << "--------" << endl;
    cout << "Customer: " << name << endl;
    cout << "--------" << endl;
    cout << "Item        Number   Price" << endl;
    cout << "Cervantes   " << cervbooks << "        $" << cervtot << endl;
    cout << "Homer       " << hombooks << "        $" << homtot << endl;
    cout << "Shakespeare " << shksprebooks << "        $" << shkspretot << endl;
    cout << "--------" << endl;
    cout << "Tax                  $" << taxtot << endl;
    cout << "--------" << endl;
    cout << "Total                $" << totwtax << endl;
    cout << "User pay             $" << pay << endl;
    cout << "--------" << endl;
    cout << "Change               $" << change << endl;
    cout << endl;

    return 0;
}