/* 
 * File:   main.cpp
 * Author: Minh Truong
 * Created on June 24, 2022, 9:20 PM
 * Purpose: Problem 4: Restaurant Bill
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    
    
    //Initialize Variables
    float TAX = 0.0675;
    float TIP = 0.2;
    float cost = 88.67;
    
    //Map inputs to outputs -> The Process
    float tax = cost * TAX;
    float tip = (cost + TAX) * TIP;
    float total = cost + tax + tip;
  
    //Display Results
    cout << "Meal: $"  << cost  << endl;
    cout << "Tax: $"   << tax   << endl;
    cout << "Tip: $"   << tip   << endl;
    cout << "Total: $" << total << endl;
 
    
    //Exit stage right
    return 0;
}

