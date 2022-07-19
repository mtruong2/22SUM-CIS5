/* 
 * File:   main.cpp
 * Author: Minh Truong
 * Created on July 4, 2022, 11:56 PM
 * Purpose: Diet Coke
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
    const float percent = 0.001f;
    
    //Declare Variables
    int dietSoda;
    float sMouse = 0.0110231,
          wMouse = 0.0771618,
          artSwtnr,
          wDieter = 100,
          sodaPop = 0.771618,
          sDieter;
    
    //Initialize Variables
    cout << "Program to calculate the limit of Soda Pop Consumption." <<endl;
    cout << "Input the desired dieters weight in lbs." <<endl;
    cin >> wDieter;
    
    //Map inputs to outputs -> The Process
    artSwtnr = (sMouse/wMouse) * wDieter;
    sDieter = artSwtnr/percent;
    dietSoda = sDieter/sodaPop;
    
    //Display Results
    cout << "The maximum number of soda pop cans" <<endl;
    cout << "which can be consumed is " << dietSoda << " cans";
    //Exit stage right
    return 0;
}

