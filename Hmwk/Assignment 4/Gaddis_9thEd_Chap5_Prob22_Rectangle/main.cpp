/* 
 * File:   main.cpp
 * Author: Minh Truong
 * Created on July 14, 2022, 11:11 AM
 * Purpose:  Rectangle
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
    int rectangleLength;
    char letter;
    
    //Initialize or input i.e. set variable values
    cin >> rectangleLength;
    cin >> letter;
    
    //Map inputs -> outputs
    for (int i = 0; i < rectangleLength; i++) {
    for (int j = 0; j < rectangleLength; j++) {
        cout << letter; }
        
    if (i != rectangleLength - 1) {
            cout << endl;}
    }
    //Display the outputs

    //Exit stage right or left!
    return 0;
}
