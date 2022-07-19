/* 
 * File:   main.cpp
 * Author: Minh Truong
 * Created on July 2, 2022, 2:15 PM
 * Purpose: Fahrenheit to Celsius
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
    float F, //Fahrenheit
          C; //Celcius
    
    //Initialize Variables
    cout << "Temperature Converter" << endl;
    cout << "Input Degrees Fahrenheit" << endl;
    cin >> F;
    
    //Map inputs to outputs -> The Process
    C = 5 * (F-32) / 9;
    
    //Display Results
    cout << fixed <<showpoint << setprecision(1);
    cout<< F <<" Degrees Fahrenheit = "<< C <<" Degrees Centigrade";
    
    //Exit stage right
    return 0;
}

