/* 
 * File:   main.cpp
 * Author: Minh Truong
 * Created on: July 12, 2022 10:56 AM 
 * Purpose:  2 or 3 Max
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

double max(double x, double y){
    if(x > y) return x;
    else return y;
    }
 double max(double x, double y, double z){
        double temp = max(x, y);
        if(temp > z) return temp;
    else return z;
    }   

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    double a, b, c;
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout << "Enter first number:" << endl;
    cin >> a;
    cout << endl;
   
    cout << "Enter Second number:" << endl;
    cin >> b;
    cout << endl;
 
    cout << "Enter third number:" << endl;
    cin >> c;
    cout << endl;
    
    //Display the outputs
    cout << fixed << setprecision(1);
    cout << "Largest number from two parameter function:" << endl;
    cout << "" << max(a, b) << endl;
    cout << endl;
    cout << "Largest number from three parameter function:" << endl;
    cout << "" << max(a, b, c) << endl;
    
    //Exit stage right or left!
    return 0;
}

