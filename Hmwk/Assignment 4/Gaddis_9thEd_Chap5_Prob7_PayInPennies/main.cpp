/* 
 * File:   main.cpp
 * Author: Minh Truong
 * Created on July 12, 2022 1:57 PM
 * Purpose:  Pay in Pennies
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int num, days;        
    double pay, total;
	
    //Initialize or input i.e. set variable values
    num = 1;
    pay = 0.01;
    total = 0;
    
    cin >> days;
    
    //Map inputs -> outputs
    while (days<1)
	{
	    cout<<"Number of days worked must be at least 1";
	}
    while (num<=days)
    {
        total=total+pay;
        pay=pay*2;
        num++;
    }
    
    //Display the outputs
    cout << fixed << setprecision(2);
    cout <<"Pay = $" << total;
    
    //Exit stage right or left!
    return 0;
}


