/* 
 * File:   main.cpp
 * Author: Minh Truong
 * Created on July 10, 2022, 1:40 AM
 * Purpose: Sort Names
 */

//System Libraries
#include <iostream>
#include <string>
using namespace std;

//User Libraries

//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    string n1, n2, n3;
    //Initialize Variables
    cout << "Sorting Names" << endl;
    cout << "Input 3 names" << endl;
    cin >> n1 >> n2 >> n3;
    //Map inputs to outputs -> The Process
    if (n1 <= n2 && n1 <= n3 && n2 <= n3) {
        cout << n1 << "" << endl;
        cout << n2 << "" << endl;
        cout << n3;
    } else if (n1 <= n2 && n1 <= n3 && n3 <= n2) {
        cout << n1 << "" << endl;
        cout << n3 << "" << endl;
        cout << n2;
    } else if (n2 <= n1 && n2 <= n3 && n1 <= n3) {
        cout << n2 << endl; 
        cout << ""<< n1 << endl;
        cout << "" << n3;
    } else if (n2 <= n1 && n2 <= n3 && n3 <= n1) {
        cout << n2 << "" << endl;
        cout << n3 << "" << endl; 
        cout << n1;
    } else if (n3 <= n1 && n3 <= n2 && n1 <= n2) {
        cout << n3 << "" << endl;
        cout << n1 << "" << endl;
        cout << n2;
    } else {
        cout << n3 << "" << endl;
        cout << n2 << "" << endl;
        cout << n1;
    }
    //Display Results
    
    //Exit stage right
    return 0;
}

