/* 
 * File:   main.cpp
 * Author: Minh Truong
 * Created on June 25, 2022, 10:54 AM
 * Purpose: 
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
    const float Land = 43560.0;//acre of land
    float Tract = 391876;//acre of tract land
    
    //Map inputs to outputs -> The Process
    float acres = Tract / Land;
    
    //Display Results
    cout << "Number of acres in a tract land = " << acres << endl;
    
    //Exit stage right
    return 0;
}

