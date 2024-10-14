#include <iostream>
#include <string>
    using namespace std;
    int main()
    {
        // global arrays with month data in them
        string MONTHS[12] = { "JAN","FEB","MAR","APR","MAY","JUN","JUL","AUG","SEP","OCT","NOV","DEC" };
        int DAYS[12] = { 31,-1,31,30,31,30,31,31,30,31,30,31 };
        string letterMonth = "";
        int month = 0;
        // get valid month 
        while(!((month > 0) && (month < 13))) {
            cout << "enter number of current month(1-12)\n";
            cin >> month;
        if ((month > 0) && (month < 13)){
            letterMonth = MONTHS[month - 1];

            cout << letterMonth;
        }
        else {
            cout << "number invalid\n";
        }
        }
        //cout for regular months
        if (DAYS[month-1] != -1) cout << "has" << DAYS[month-1] << "days";
       //determine if its a leap year and cout
        else {
            int year;
            cout << " YEAR:";
            cin >> year;
            if (year % 4 == 0) {
                if ((year % 100) == 0) {
                    if ((year % 400) == 0) {
                        cout << "FEB has 29 days";
                    }
                    else {
                        cout << "FEB has 28 days";
                    }
                }
                else {
                    cout << "FEB has 29 days";
                }
            }
            else {
                cout << "FEB has 28 days";
            }
        }

    }
