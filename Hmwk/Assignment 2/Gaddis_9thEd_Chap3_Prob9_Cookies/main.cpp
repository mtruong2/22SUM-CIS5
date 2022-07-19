/* 
 * File:   main.cpp
 * Author: Minh Truong
 * Created on July 2, 2022, 1:21 PM
 * Purpose: How Many Calories
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
    
    const int COOKIES = 40, NUM_SERV = 10, CAL_SERV = 300; 
    
    //Declare Variables
    
    int numCookies, cookieServ, calCookie, totalCal;    
   
    
    
    //Initialize Variables
    cout << "Calorie Counter" << endl;
    cout << "How many cookies did you eat?" << endl;
    cin >> numCookies;
        
        
    //Map inputs to outputs -> The Process
    
    cookieServ = COOKIES / NUM_SERV;
    calCookie = CAL_SERV / cookieServ;
    totalCal = calCookie * numCookies;
   
    //Display Results
    cout << "You consumed " << totalCal << " calories.";
    //Exit stage right
    return 0;
}

