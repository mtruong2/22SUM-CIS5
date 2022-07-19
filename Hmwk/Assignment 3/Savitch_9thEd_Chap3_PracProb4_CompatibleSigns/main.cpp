/* 
 * File:   main.cpp
 * Author: Minh Truong
 * Created on June 22, 2022, 2:23 PM
 * Purpose: C++ Template - To be used in all future Assignments
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
     string s1, s2;
     
    //Initialize Variables
    cout << "Horoscope Program which examines compatible signs." << endl;
    cout << "Input 2 signs." << endl;
    cin >> s1 >> s2;
    
    //Map inputs to outputs -> The Process
    if(s1 =="Taurus" or s1 == "Virgo" or s1 =="Capricorn")
    {
        if(s2 == "Taurus" or s2 == "Virgo" or s2 == "Capricorn")
            cout << s1 << " and " << s2 << " are compatible Earth signs.";
        else 
            cout << s1 << " and " << s2 << " are not compatible signs.";
    }else if(s1 == "Aries" or s1 == "Leo" or s1 == "Sagittarius")
    {
        if(s1 == "Aries" or s1 == "Leo" or s1 == "Sagittarius")
            cout << s1 << " and " << s2 << " are compatible Fire signs.";
        else 
            cout << s1 << " and " << s2 << " are not compatible signs.";    
    }else if(s1 == "Aries" or s1 == "Libra" or s1 == "Aquarius")
    {
        if(s1 == "Aries" or s1 == "Libra" or s1 == "Aquarius")
            cout << s1 << " and " << s2 << " are compatible Air signs.";
        else 
            cout << s1 << " and " << s2 << " are not compatible signs."; 
    }else if(s1 == "Cancer" or s1 == "Scorpio" or s1 == "Pisces")
    {
        if(s1 == "Cancer" or s1 == "Scorpio" or s1 == "Pisces")
            cout << s1 << " and " << s2 << " are compatible Water signs.";
        else 
            cout << s1 << " and " << s2 << " are not compatible signs."; 
    }                
    //Display Results
    
    //Exit stage right
    return 0;
}

