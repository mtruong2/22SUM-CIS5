/* 
 * File:   main.cpp
 * Author: Minh Truong
 * Created on July 1, 2022, 3:00 PM
 * Purpose: Monthly Payments
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
    const double NUM_TESTS = 5;
    //Declare Variables
    double testScore1,		// To hold the 1st test score
		   testScore2,		// To hold the 2nd test score
		   testScore3,		// To hold the 3rd test score
		   testScore4,		// To hold the 4th test score
		   testScore5,		// To hold the 5th test score
		   testScoreAvg;	// To hold the test score average

    //Initialize Variables
    // Get test score #1.
	cout << "Enter the first test score: ";
	cin >> testScore1;

	// Get test score #2.
	cout << "Enter the second test score: ";
	cin >> testScore2;

	// Get test score #3.
	cout << "Enter the third test score: ";
	cin >> testScore3;

	// Get test score #4.
	cout << "Enter the fourth test score: ";
	cin >> testScore4;

	// Get test score #5.
	cout << "Enter the fifth test score: ";
	cin >> testScore5;
    //Map inputs to outputs -> The Process
    testScoreAvg = (testScore1 + testScore2 + testScore3 + 
			        testScore4 + testScore5) / NUM_TESTS ;
    //Display Results
    cout << "\nThe test score average is "
		 << fixed << showpoint << setprecision(1) 
		 << testScoreAvg << endl;
    //Exit stage right
    return 0;
}

