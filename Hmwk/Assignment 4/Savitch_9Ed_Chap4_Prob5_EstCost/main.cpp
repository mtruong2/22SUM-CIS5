/* 
 * File:   
 * Author: Minh Truong  
 * Created on July 14, 2022 11:12 PM
 * Purpose:  Est Cost
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
float calcInflation(float current_cost, float previous_cost );
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    float cost_lastyear, cost_thisyear;
    float oneyear, twoyear;
    char repeat;
    
    //Declare Variables
    repeat ='y';
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
 while (repeat == 'y') {
    
        cout << "Enter current price:" << endl;
        cin >> cost_thisyear;


        cout << "Enter year-ago price:" << endl;
        cin >> cost_lastyear;

        float inflation = calcInflation(cost_thisyear, cost_lastyear);
        cout << "Inflation rate: " << fixed << setprecision(2) << inflation << "%" << endl <<endl;
        
        float rate = inflation/100;
        oneyear = cost_thisyear + (cost_thisyear * rate);
        twoyear = oneyear + (oneyear * rate); 
        
        cout << "Price in one year: $" << oneyear << endl;
        cout << "Price in two year: $" << twoyear << endl << endl;
        
        
        
        cout << "Again:" << endl;
        cin >> repeat;
        
        if (repeat == 'y')
        cout << endl;
    }
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}

float calcInflation(float current_cost, float previous_cost ){
float rate = ((current_cost - previous_cost)/previous_cost)*100;
return rate;
}