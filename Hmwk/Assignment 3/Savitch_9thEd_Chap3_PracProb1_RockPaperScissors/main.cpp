/* 
 * File:   main.cpp
 * Author: Minh Truong
 * Created on June 22, 2022, 2:23 PM
 * Purpose: C++ Template - To be used in all future Assignments
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
     srand(static_cast<unsigned int>(time(0)));
    //Declare Variables
    char p1, p2;
    //Initialize Variables
    cout << "Rock Paper Scissors Game" <<endl;
    cout << "Input Player 1 and Player 2 Choices" <<endl;
    cin >> p1 >> p2;
    //Map inputs to outputs -> The Process
    if(p1 == p2)
			cout << "Nobody wins" << endl;
		if( (p1 == 'P' && p2 == 'p') || (p1 == 'p' && p2 == 'P') )
			cout << "Nobody wins";
		if( (p1 == 'S' && p2 == 's') || (p1 == 'S' && p2 == 's') )
			cout << "Nobody wins";
		if( (p1 == 'R' && p2 == 'r') || (p1 == 'R' && p2 == 'r') )
			cout << "Nobody wins" << endl;

		if((p1 == 'P' || p1 == 'p') && (p2 == 'R' || p2 == 'r'))
			cout << "Paper covers rock.";
		if((p1 == 'R' || p1 == 'r') && (p2 == 'P' || p2 == 'p'))
			cout << "Paper covers rock.";

		if((p1 == 'R' || p1 == 'r') && (p2 == 'S' || p2 == 's'))
			cout << "Rock breaks scissors.";
		if((p1 == 'S' || p1 == 's') && (p2 == 'R' || p2 == 'r'))
			cout << "Rock breaks scissors.";
	   
        if((p1 == 'P' || p1 == 'p') && (p2 == 'S' || p2 == 's'))
			cout << "Scissors cuts paper.";
		if((p1 == 'S' || p1 == 's') && (p2 == 'P' || p2 == 'p'))
			cout << "Scissors cuts paper.";

    //Display Results
    
    //Exit stage right
    return 0;
}

