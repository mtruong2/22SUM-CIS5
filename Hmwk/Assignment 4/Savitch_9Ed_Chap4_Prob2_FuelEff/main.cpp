/* 
 * File:   
 * Author: Minh Truong
 * Created on July 14, 2022 11:15 AM
 * Purpose: FuelEff
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
    int lt;
	float ml;
	float MPG, MPG2;
	char repeat;
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    repeat = 'y';
    //Display the outputs
    while (repeat =='y') {       
        
        cout << "Car 1" << endl;
	    cout << "Enter number of liters of gasoline:" << endl;
        cin >> lt;
            
        cout <<"Enter number of miles traveled:" << endl;;
        cin >> ml;
            
        cout << fixed << setprecision(2);
        cout << "miles per gallon:" << setw(1) << "" << mGALLON(ml, lt) << endl <<endl;
        
        MPG = ml / (lt * LITER);
        
        

        cout << "Car 2" << endl;
	    cout << "Enter number of liters of gasoline:" << endl;
        cin >> lt;
            
        cout <<"Enter number of miles traveled:" << endl;;
        cin >> ml;
            
        cout << fixed << setprecision(2);
        cout << "miles per gallon:" << setw(1) << "" << mGALLON(ml, lt) << endl <<endl;
        
        MPG2 = ml / (lt * LITER);
           
            
        if (MPG > MPG2) {
            cout << "Car 1 is more fuel efficient" << endl << endl;
        }else{
            cout << "Car 2 is more fuel efficient" << endl << endl;
        }    
            
            cout << "Again:" << endl;
            cin >> repeat;
           
            if (repeat =='y')
            cout << endl;
    	}    
	 
	//Exit stage right or left!
	return 0;
}
    float mGALLON (int m, int l)

{
	float gallons;
	gallons = LITER * l;
	return (m/gallons);
}

