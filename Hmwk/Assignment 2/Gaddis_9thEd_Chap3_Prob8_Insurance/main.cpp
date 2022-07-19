/* 
 * File:   main.cpp
 * Author: Minh Truong
 * Created on July 2, 2022, 1:31 PM
 * Purpose: Insurance
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
    float INS_PER = 0.8;
    
    //Declare Variables
     float repCOST,
          insAmt;
    
     //Initialize Variables
    cout <<"Insurance Calculator"<<endl; 
    cout <<"How much is your house worth?"<<endl;
    cin>>repCOST;
    
    //Map inputs to outputs -> The Process
    insAmt = repCOST * INS_PER;
   
    //Display Results
    cout<<"You need $"<<insAmt<<" of insurance.";
    //Exit stage right
    return 0;
}

