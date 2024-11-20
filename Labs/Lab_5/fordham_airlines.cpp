#include <iostream>

using namespace std;

int main() {

    cout.setf(ios::fixed);
    cout.precision(2);

    char destination, daytype;
    int time, ticketnum;
    float ticketprice, tickettot;
    float pay, change;

    float MiamiWeekdayDaytime = 150, MiamiWeekdayNightime = 100, MiamiWeekendDaytime = 180, MiamiWeekendNightime = 120;
    float ChicagoWeekdayDaytime = 75, ChicagoWeekdayNightime = 50, ChicagoWeekendDaytime = 90, ChicagoWeekendNightime = 60;
    float PortlandWeekdayDaytime = 300, PortlandWeekdayNightime = 200, PortlandWeekendDaytime = 360, PortlandWeekendNightime = 240;

    cout << endl;
    cout << "Welcome to Fordham Airlines" << endl;
    cout << "What is your destination? ([C]hicago, [M]iami, or [P]ortland) ";
    cin >> destination;
    cout << "What time will you travel? (Enter time between 0-2359) ";
    cin >> time;
    cout << "What type of day are you traveling? (week[E]nd or week[D]ay) ";
    cin >> daytype;

    if (destination == 'M' && (time >= 500 && time <= 1900) && daytype == 'D') {
        ticketprice = MiamiWeekdayDaytime;
    } else if (destination == 'M' && (time >= 500 && time <= 1900) && daytype == 'E') {
        ticketprice = MiamiWeekendDaytime;
    } else if (destination == 'M' && (time < 500 || time > 1900) && daytype == 'D') {
        ticketprice = MiamiWeekdayNightime;
    } else if (destination == 'M' && (time < 500 || time > 1900) && daytype == 'E') {
        ticketprice = MiamiWeekendNightime;
    }   

    if (destination == 'C' && (time >= 500 && time <= 1900) && daytype == 'D') {
        ticketprice = ChicagoWeekdayDaytime;
    } else if (destination == 'C' && (time >= 500 && time <= 1900) && daytype == 'E') {
        ticketprice = ChicagoWeekendDaytime;
    } else if (destination == 'C' && (time < 500 || time > 1900) && daytype == 'D') {
        ticketprice = ChicagoWeekdayNightime;
    } else if (destination == 'C' && (time < 500 || time > 1900) && daytype == 'E') {
        ticketprice = ChicagoWeekendNightime;
    }

    if (destination == 'P' && (time >= 500 && time <= 1900) && daytype == 'D') {
        ticketprice = PortlandWeekdayDaytime;
    } else if (destination == 'P' && (time >= 500 && time <= 1900) && daytype == 'E') {
        ticketprice = PortlandWeekendDaytime;
    } else if (destination == 'P' && (time < 500 || time > 1900) && daytype == 'D') {
        ticketprice = PortlandWeekdayNightime;
    } else if (destination == 'P' && (time < 500 || time > 1900) && daytype == 'E') {
        ticketprice = PortlandWeekendNightime;
    } 

    cout << "Each ticket will cost: $" << ticketprice << endl;
    cout << "How many tickets do you want? ";
    cin >> ticketnum;

    tickettot = ticketprice * ticketnum;

    cout << "You owe $" << tickettot << endl;
    cout << "How much will you pay? ";
    cin >> pay;

    if (pay < tickettot) {
        cout << "That is too little! No tickets ordered." << endl;
        cout << endl;
    } else if (pay >= tickettot) {
        change = pay - tickettot;
        cout << "You will get $" << change << " in change." << endl;
        cout << "Your tickets have been ordered!" << endl;
        cout << endl;
    }

    return 0;
}