/* 
 * File:   main.cpp
 * Author: Minh Truong
 * Created on July 7, 2022, 8:45 PM
 * Purpose: Lab Assignment 3: Gas Tax
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
    float GALLON = 6.06;
    
    //Declare Variables
    float tradeFEE = 0.10,
          oilProfit = 0.065, 
          exciseTAX = 0.39,
          salesTAX = 0.08, 
          fedTAX = 0.184, 
          sTAX,
          profitCO,  
          govtTAX;
    
    //Initialize Variables
    cout << "The amount it cost you per gallon the last time you put gas in your car." << endl;
    cin >> GALLON;
    
    //Map inputs to outputs -> The Process
    sTAX = GALLON * salesTAX;
    govtTAX = sTAX + tradeFEE + exciseTAX + fedTAX; 
    profitCO = GALLON * oilProfit;
            
    
    //Display Results
    cout << fixed << setprecision(2);        
    cout << "Total oil profit = $ " << profitCO << endl;
    cout << "Total govt taxes = $ " << govtTAX; 
    
    //Exit stage right
    return 0;
}

