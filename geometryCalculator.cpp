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
int main()
{
    bool flag = true;
    while (flag) {
        cout << "\nGeometry Calculator" << "\n\t 1.Calculate the Area of a Circle" << "\n\t 2.Calculate the Area of a Rectangle" << "\n\t 3.Calculate the Area of a Triangle " << "\n\t 4.Quit";
        int choice = inputValidation("\nChoice: ", 1, true, 4, true);
        switch (choice) {
        case(1): {
            double radius; cout << "Radius of Circle: "; cin >> radius;
            cout << "Area of Circle: " << radius * radius * 3.14159;
            break;
        }
        case(2): {
            double w, l; cout << "Width of Rectangle: "; cin >> w; cout << "Length of Rectangle"; cin >> l;
            cout << "Area of Rectangle: " << w * l;
            break;
        }
        case(3): {
            double b, h; cout << "Base of Triangle: "; cin >> b; cout << "Height of Triangle: "; cin >> h;
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

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
