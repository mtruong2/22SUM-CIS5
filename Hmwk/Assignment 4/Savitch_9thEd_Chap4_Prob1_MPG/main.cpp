/* 
 * File:   
 * Author: Minh Truong
 * Created on July 13, 2022, 4:32 PM
 * Purpose:  MPG
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
float const LITER = 0.264172;
float mGALLON (int ml, int lt);
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    char repeat;
    int lt, ml;
   
    //Initialize or input i.e. set variable values
    repeat ='y';
    //Map inputs -> outputs
    while (repeat == 'y')
	{
            cout << "Enter number of liters of gasoline:" << endl;
            cin >> lt;
            cout << endl;
            
            cout <<"Enter number of miles traveled:" << endl;;
            cin >> ml;
            cout << endl;
            
            cout << fixed << setprecision(2);
            cout << "miles per gallon:" << endl; 
            cout << mGALLON(ml, lt) << endl;
           
            cout << "Again:" << endl;
            cin >> repeat;
           
        
            if (repeat =='y')
            
            cout << endl;
        
	} 
           
    //Display the outputs

    //Exit stage right or left!
    return 0;
}


float mGALLON (int m, int l)

{
	float gallons;
	gallons = LITER * l;
	return (m/gallons);
}
