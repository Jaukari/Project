#include <iostream>
#include <string>

using namespace std;

int main() {

    int choice;
    string systemType;
    long double value;
    long double result;

   std:: cout << "Choose a measurement type:" << std::endl;
   std:: cout << "1) distance" << std::endl;
   std::  cout << "2) temperature" << std::endl;
   std:: cout << "3) mass" << std::endl;
   std::  cout << "Enter 1, 2, or 3:" << std::endl;

    if (!(cin >> choice)) {
      std::cout << "Invalid input." << std::endl;
        return 0;
    }

    if (choice < 1 || choice > 3)
        std::cout << "Invalid input." << std::endl;

    std::<< "Will you enter the value in Metric or Imperial? (m/i):" << endl;
    cin >> systemType;

    if (systemType != "m" && systemType != "i") {
        cout << "Invalid system choice." << endl;
        return 0;
    }

    cout << "Enter the value to convert:" << endl;

    if (!(cin >> value)) {
        cout << "Invalid number." << endl;
        return 0;
    }


    if (choice == 1) {
        
        if (value < 0) {
            cout << "Distance cannot be negative." << endl;
            return 0;
        }

        if (systemType == "m") {
            result = value / 0.3048L;
            cout << value << " meters = " << result << " feet" << endl;
        }
        else {
            result = value * 0.3048L;
            cout << value << " feet = " << result << " meters" << endl;
        }
    }

    else if (choice == 2) {
        
        if (systemType == "m") {
            if (value < -273.15L) {
                cout << "Temperature cannot be below absolute zero (-273.15 C)." << endl;
                return 0;
            }
            result = (value * 9.0L / 5.0L) + 32.0L;
            cout << value << " C = " << result << " F" << endl;
        }
        else {
            result = (value - 32.0L) * 5.0L / 9.0L;
            if (result < -273.15L) {
                cout << "Converted temperature is below absolute zero." << endl;
                return 0;
            }
            cout << value << " F = " << result << " C" << endl;
        }
    }

    else if (choice == 3) {
        
        if (value < 0) {
            cout << "Mass cannot be negative." << endl;
            return 0;
        }

        if (systemType == "m") {
            result = value / 453.592L;
            cout << value << " g = " << result << " lb" << endl;
        }
        else {
            result = value * 453.592L;
            cout << value << " lb = " << result << " g" << endl;
        }
    }

    else {
        cout << "Invalid measurement type." << endl;
    }

    return 0;
}