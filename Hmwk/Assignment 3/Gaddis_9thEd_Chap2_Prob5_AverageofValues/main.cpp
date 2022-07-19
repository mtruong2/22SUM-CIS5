/* 
 * File:   main.cpp
 * Author: Minh Truong
 * Created on June 22, 2022, 2:23 PM
 * Purpose: Problem 5: Average of Values
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
    int value1 = 28;
    int value2 = 32;
    int value3 = 37;
    int value4 = 24;
    int value5 = 33;
    
    //Initialize Variables
    int sum = value1 + value2 + value3 + value4 + value5;
    
    //Map inputs to outputs -> The Process
    float average = sum / 5;
    
    //Display Results
    cout << average << endl;
    
    //Exit stage right
    return 0;
}

