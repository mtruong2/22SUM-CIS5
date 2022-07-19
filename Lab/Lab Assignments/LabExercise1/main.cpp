/* 
 * File:   main.cpp
 * Author: Minh Truong
 * Created on June 29, 2022, 12:34 PM
 * Purpose: Lab Exercise 1
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
    //Knowns for Particular Vehicle
    float gage = 0.75, //D4
          tank = 22, //D5
          mileage = 17, //D6
          galFILL = tank * (1 - gage); //D7
    
   //Calculate the cost of Gas Station 1
    float gas = 4.25, //D12
          milesGS = 10; //D13
     
   //Calculate the cost of Gas Station 2
    float gas2 = 4.09, //D22
          milesGS2 = 20; //D23
    
   //Map inputs to outputs -> The Process
      
    float costFILL = gas * galFILL, //D14
          totDIST = 2 * milesGS, //D15
          cost = totDIST / mileage * gas, //D16
          total = costFILL + cost, //D17
          price = total / galFILL;
    
    
    float costFILL2 = gas2 * galFILL, //D24
          totDIST2 = 2 * milesGS2, //D25
          cost2 = totDIST2 / mileage * gas2, //D26
          total2 = costFILL2 + cost2, //D27
          price2 = total2 / galFILL;
    
    
    
            
            
    //Display Results
    
    cout << "Gallons required to fill up = " << galFILL << "\n\n";
    cout << "Cost to fill up at Gas Station 1 = $" << costFILL << endl;
    cout << "Total Distance driven in Miles to Gas Station 1 = " << totDIST << endl;
    cout << "Cost to drive distance to and from gas station 1 = " << cost << endl;
    cout << "Total Cost with mileage to gas station 1 = $" << total << endl;
    cout << "Price per gallon when adding in mileage to station = " << price << "\n\n";
    
    
    cout << "Cost to fill up at Gas Station 2 = $" << costFILL2 << endl;
    cout << "Total Distance driven in Miles to Gas Station 2 = " << totDIST2 << endl;
    cout << "Cost to drive distance to and from gas station 2 = " << cost2 << endl;
    cout << "Total Cost with mileage to gas station 2 = $" << total2 << endl;
    cout << "Price per gallon when adding in mileage to station = " << price2 << endl;
    
    
    //Exit stage right
    return 0;
}

