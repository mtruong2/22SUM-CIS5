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
    string runner1, runner2, runner3;
    int time1, time2, time3;
    //Initialize Variables
    cout << "Race Ranking Program" << endl;
    cout << "Input 3 Runners" << endl;
    cin >> runner1 >> time1;
    cin >> runner2 >> time2;
    cin >> runner3 >> time3;
    
    
    cout << "Their names, then their times" << endl;
    
   
    //Map inputs to outputs -> The Process
    if (time1 < time2 && time1 < time3) {
        cout << "" << runner1 << "\t" << setw(3) << time1 << endl;

        if (time2 < time3) {
            cout << "" << runner2 << "\t" << setw(3) << time2 << endl;
            cout << "" << runner3 << "\t" << setw(3) << time3;
        }
        else if (time3 < time2) {
            cout << "" << runner3 << "\t" << setw(3) << time3 << endl;
            cout << "" << runner2 << "\t" << setw(3) << time2;
        }
    }
    else if (time2 < time1 && time2 < time3) {
        cout << "" << runner2 << "\t" << time2 << setw(3) << endl;

        if (time1 < time3) {
            cout << "" << runner1 << "\t" << setw(3) << time1 << endl;
        }
        else if (time3 < time1) {
            cout << "" << runner3 << "\t" << setw(3) << time3 << endl;
            cout << "" << runner2 << "\t" << setw(3) << time2;
        }
    }
    else if (time3 < time2 && time3 < time1) {
            cout << "" << runner3 << "\t" << setw(3) << time3 << endl;

        if (time2 < time1) {
            cout << "" << runner2 << "\t" << setw(3) << time2 << endl;
            cout << "" << runner1 << "\t" << setw(3) << time1;
        }
        else if (time1 < time2) {
            cout << "" << runner1 << "\t" << time1 << endl;
            cout << "" << runner2 << "\t" << time2;
        }
    }
    else {
            cout << "Error! Please restart the program and input a positive value" << endl;
    }
    //Display Results
    
    //Exit stage right
    return 0;
}

