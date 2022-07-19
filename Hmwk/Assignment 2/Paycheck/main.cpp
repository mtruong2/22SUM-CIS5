/* 
 * File:   main.cpp
 * Author: Minh Truong
 * Created on July 2, 2022, 12:37 AM
 * Purpose: Paycheck
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float payRate,
          hrsWrkd,
          payChck;
    
    //Initialize Variables
    cout << "This program calculates the gross paycheck." << endl;
    cout << "Input the pay rate in $'s/hr and the number of hours." << endl;
    cin >> payRate >> hrsWrkd;
    
    //Map inputs to outputs -> The Process
    payChck = payRate * hrsWrkd;
    payChck += hrsWrkd > 40?payRate * (hrsWrkd-40):0;
    
    //Display Results
    cout << fixed << setprecision(2) << showpoint;
    cout << "Paycheck = $" << setw(7) << payChck;
    
    //Exit stage right
    return 0;
}

