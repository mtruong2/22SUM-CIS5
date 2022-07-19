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
    int numBooks;
    
    //Initialize Variables
    cout << "Book Worm Points\n";
    cout << "Input the number of books purchased this month.\n";
    cin >> numBooks;
    cout << "Books purchased =  " << numBooks << endl;
    
    //Map inputs to outputs -> The Process
    if (numBooks == 0)
		cout << "Points earned   =  0";
	else if (numBooks == 1)
		cout << "Points earned   =  5";
	else if (numBooks == 2)
		cout << "Points earned   = 15";
	else if (numBooks == 3)
		cout << "Points earned   = 30";
	else if (numBooks >= 4)
		cout << "Points earned   = 60";
	else
		cout << "That's an invalid number of books";
        
    //Display Results
    
    //Exit stage right
    return 0;
}

