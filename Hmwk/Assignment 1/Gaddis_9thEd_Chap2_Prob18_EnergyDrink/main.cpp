/* 
 * File:   main.cpp
 * Author: Minh Truong
 * Created on June 25, 2022, 10:22 AM
 * Purpose: Problem 18: Energy Drink Consumption     
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
    int SURVEY = 16500; 
    float percentED = 0.15; 
    float percentCD = 0.58; 
    
    //Map inputs to outputs -> The Process
    int nEnergy = SURVEY * percentED;
    int nCitrus = nEnergy * percentCD;
    
    //Display Results
    cout << "Numbers of Customers that buy Energy Drinks   = " << nEnergy << endl;
    cout << "Number of Customers that prefer Citrus Drinks = " << nCitrus << endl;
    
    //Exit stage right
    return 0;
}

