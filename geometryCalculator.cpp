// geometryCalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
int inputValidation(string question, int min, bool inclusiveMin, int max, bool inclusiveMax) {
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
double nonNeg() {
    double num; cin >> num;
    while (num < 0) {
        cout << "\n Please Enter a Positive Number: ";
        cin >> num;
    }
    return num;
}
int main()
{
    bool flag = true;
    while (flag) {
        cout << "\nGeometry Calculator" << "\n\t 1.Calculate the Area of a Circle" << "\n\t 2.Calculate the Area of a Rectangle" << "\n\t 3.Calculate the Area of a Triangle " << "\n\t 4.Quit";
        int choice = inputValidation("\nChoice: ", 1, true, 4, true);
        switch (choice) {
        case(1): {
            double radius; cout << "Radius of Circle: "; radius = nonNeg();
            cout << "Area of Circle: " << radius * radius * 3.14159;
            break;
        }
        case(2): {
            double w, l; cout << "Width of Rectangle: "; w = nonNeg(); cout << "Length of Rectangle"; l = nonNeg();
            cout << "Area of Rectangle: " << w * l;
            break;
        }
        case(3): {
            double b, h; cout << "Base of Triangle: "; b = nonNeg(); cout << "Height of Triangle: "; h = nonNeg();
            cout << "Area of Triangle" << b * h * 0.5;
            break;
        }
        case(4): {
            flag = false;
            break;
        }
        }
    }
    return 0;
}
