/* 
 * File:   main.cpp
 * Author: Minh Truong
 * Created on July 2, 2022, 12:39 AM
 * Purpose: Average
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
    const int NUM_TESTS =5;
    //Declare Variables
    float score1, score2, score3, score4, score5, average;
    
    //Initialize Variables
    cout << "Input 5 numbers to average." << endl;
    cin >> score1 >> score2 >> score3 >> score4 >> score5;
    
    //Map inputs to outputs -> The Process
    average = (score1 + score2 + score3 + score4 + score5) / NUM_TESTS;
    
    //Display Results
    cout << fixed << showpoint << setprecision(1);
    cout<< "The average = " << average;  
    
    //Exit stage right
    return 0;
}

