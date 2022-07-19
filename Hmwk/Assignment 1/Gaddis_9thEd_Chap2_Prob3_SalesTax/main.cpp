/* 
 * File:   main.cpp
 * Author: Minh Truong
 * Created on June 24, 2022, 6:00 PM
 * Purpose: Problem 3: Sales Tax
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
    float purchase = 95;
    float stateTax, countyTax;
    
    //Initialize Variables
    
    //Map inputs to outputs -> The Process
    stateTax = 0.04 * purchase;
    countyTax = 0.02 * purchase;
    
    //Display Results
    cout << "State tax is: $"  << stateTax             <<"\n";
    cout << "County tax is: $" << countyTax            <<"\n";
    cout << "Total tax is: $"  << stateTax + countyTax <<"\n";
    
    //Exit stage right
    return 0;
}

