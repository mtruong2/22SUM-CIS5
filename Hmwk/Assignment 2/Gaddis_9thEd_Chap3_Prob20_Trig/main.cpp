/* 
 * File:   main.cpp
 * Author: Minh Truong
 * Created on July 3, 2022, 9:11 PM
 * Purpose: Trig
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned array
const float PI = 3.14159265358979323846;
//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    float sin1, cos1, tan1, rad, var, conv; 
    
    //Declare Variables
    rad = PI/180;
    
    
    //Initialize Variables
    cout << "Calculate trig functions" <<endl;
    cout << "Input the angle in degrees." <<endl;
    cin >> var;
    
    //Map inputs to outputs -> The Process
    conv = var * rad;
    sin1 = sin(conv);
    cos1 = cos(conv);
    tan1 = tan(conv);
    
    //Display Results
    cout << setprecision(0) << fixed << "sin("<<var<<") = " << setprecision(4) << fixed << sin1 <<endl;
    cout << setprecision(0) << fixed << "cos("<<var<<") = " << setprecision(4) << fixed << cos1 <<endl;
    cout << setprecision(0) << fixed << "tan("<<var<<") = " << setprecision(4) << fixed << tan1;
    
    //Exit stage right
    return 0;
}

