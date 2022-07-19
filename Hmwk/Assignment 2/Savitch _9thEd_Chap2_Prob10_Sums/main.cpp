/* 
 * File:   main.cpp
 * Author: Minh Truong
 * Created on July 4, 2022, 7:43 PM
 * Purpose: Sums
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
    
    //Declare Variables
    float num, pSum=0, nSum=0, total=0;
    //Initialize Variables
    cout << "Input 10 numbers, any order, positive or negative" << endl;
    //Map inputs to outputs -> The Process
    for(int i=0;i<10;i++)
    {
        cin >> num;
        
        total += num;
        if(num>0)
            pSum += num;
        else
            nSum += num;
    }
    
    
    //Display Results
    cout << "Negative sum" << setw(2) <<   "="   << setw(1) <<  "" << nSum << endl;
    cout << "Positive sum" << setw(2) <<   "="   << setw(2) <<  "" << pSum << endl;
    cout << "Total sum"    << setw(5) <<   "="   << setw(3) <<  "" << total;
    
    
    //Exit stage right
    return 0;
}

