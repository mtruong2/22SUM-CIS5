/* 
 * File:   main.cpp
 * Author: Minh Truong
 * Created on July 5, 2022, 2:40 PM
 * Purpose: Room
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
    int maxCap = 0, numPPL=0;
    
    //Initialize Variables
    cout << "Input the maximum room capacity and the number of people" << endl;
    cin >> maxCap >> numPPL;
    //Map inputs to outputs -> The Process
    
    //Display Results
    if (numPPL > maxCap)
    {
        cout << "Meeting cannot be held." <<endl;
        cout << "Reduce number of people by " << (numPPL - maxCap) << " to avoid fire violation.";
    }
    
    else if(numPPL <= maxCap)
    {
        cout << "Meeting can be held." <<endl;
        cout << "Increase number of people by " << (maxCap - numPPL) << " will be allowed without violation.";
    }
    //Exit stage right
    return 0;
}

