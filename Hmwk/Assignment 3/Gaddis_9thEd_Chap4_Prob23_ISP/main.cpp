/* 
 * File:   main.cpp
 * Author: Minh Truong
 * Created on June 22, 2022, 2:23 PM
 * Purpose: C++ Template - To be used in all future Assignments
 */

//System Libraries
#include <iostream>
#include <string>
using namespace std;

//User Libraries

//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    string package;
    float time;
    float price;
    
    //Initialize Variables
    cout << "ISP Bill" << endl;
    cout << "Input Package and Hours" << endl;
    cin >> package;
    
    //Map inputs to outputs -> The Process
    if ((package == "A") || (package == "B") || (package == "C")) {
        cin >> time;
    // Time validation
    if (time <= 744) {
    // Package A
    if (package == "A") {
    if (time > 10) {
        price = 9.95 + (time - 10) * 2;
    } else {
        price = 9.95;
    }
    // Package B
    } else if (package == "B") {
        if (time > 20) {
        price = 14.95 + (time - 20) * 1;
    } else {
        price = 14.95;
    }
    // Package C
    } else {
        price = 19.95;
    }
    } else {
        cout << "Invalid number of hours!";
    }
    } else {
        cout << "Invalid package!";
    }
    
    //Display Results
    cout << "Bill = $ " << price;
    
    //Exit stage right
    return 0;
}

