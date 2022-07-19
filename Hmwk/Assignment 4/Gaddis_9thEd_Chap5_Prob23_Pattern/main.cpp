/* 
 * File:   main.cpp
 * Author: Minh Truong
 * Created on July 13, 2022, 9:39 AM
 * Purpose:  Pattern
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
    int size;
        
    
    //Initialize or input i.e. set variable values
    cin >> size;
   
    //Map inputs -> outputs
    for (int rows = 1; rows <= size; rows++) {
		for(int cols=1; cols<=rows; cols++) {
		   	cout << "+";
			
        }
	    cout << endl << endl;
	}
	
	for(int rows=1; rows<=size; rows++) {
	    for(int cols=1; cols<=size+1-rows; cols++) {
	        cout << '+';
	    }
	    if(rows<size) cout << endl << endl;
	}
	
	
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}
