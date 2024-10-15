
#include <iostream>
#include <string>
using namespace std;
int inputValidation(string question,int min,bool inclusiveMin, int max, bool inclusiveMax) {
    //if inclusive(max/min) is true the output can include that number
    cout << question;
    double input;
    bool flag = true;
    while (flag) {
        flag = false;
        cin >> input;
        if (inclusiveMin) {
            if (input < min) flag = true;
        }
        else {
            if (input <= min) flag = true;
        }
        if (inclusiveMax) {
            if (input > max) flag = true;
        }
        else {
            if (input >= max) flag = true;
        }
        if (flag) cout << "\n try again: ";
    }
    return input;
}

int main()
{
    double weight = inputValidation("Enter weight between 0 and 20(can't be 0 can be 20): ",0,false,20,true);
    double distance = inputValidation("Enter a weight between 10 and 3000(can include 10 and 3000): ", 10, true, 3000, true);
    double rate;
    //I know the first part of these if statements isnt necessary but it just seems right to have them
    if (weight <= 2) rate = 1.1;
    else if (weight > 2 && weight <= 6) rate = 2.2;
    else if (weight > 6 && weight <= 10) rate = 3.7;
    else if (weight > 10 && weight <= 20) rate = 4.8;
    cout << "\nThat will cost you " << distance * rate << " at " << rate << "$ per mile";
}
