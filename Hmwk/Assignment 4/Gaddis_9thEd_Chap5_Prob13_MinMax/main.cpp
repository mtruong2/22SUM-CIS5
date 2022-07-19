/* 
 * File:   main.cpp
 * Author: Minh Truong
 * Created on July 11, 2019, 11:45 PM
 * Purpose:  Min Max
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int max=0,num=0,min=10000000;
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    while (num != -99)
    {
        cin >> num;
    if(num==-99)break;
    if (num>max)
        max=num;
    if (num<min)
        min=num;
    }
    //Display the outputs
    cout << "Smallest number in the series is " << min << endl;
    cout << "Largest  number in the series is " << max;
    //Exit stage right or left!
    return 0;
}

