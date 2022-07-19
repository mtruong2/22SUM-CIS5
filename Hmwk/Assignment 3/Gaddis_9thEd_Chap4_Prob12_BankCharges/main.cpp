/* 
 * File:   main.cpp
 * Author: Minh Truong
 * Created on June 22, 2022, 2:23 PM
 * Purpose: C++ Template - To be used in all future Assignments
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
    
    //Declare Variables
    int checks;
    float balance, 
          checkfee, 
          newbal,
          monfee = 10.00,
          minbal = 400,
          lowfee = 15.00;
    
    //Initialize Variables
    
   
    //Map inputs to outputs -> The Process
    cout << "Monthly Bank Fees" << endl;
    cout << "Input Current Bank Balance and Number of Checks" << endl;
    cin >> balance >> checks;
	
      
    {
        if (checks < 20)
            checkfee = 0.10 * checks;
        else if (checks >= 20&& checks < 40)
            checkfee = 0.08 * checks;
        else if (checks >= 40&& checks < 60)
            checkfee = 0.06 * checks;
        else checkfee = 0.04 * checks;
    }
	{
	    if(balance < 400)
	        lowfee = 15;
	   else lowfee = 0;     
	}
	
   newbal = balance - checkfee - monfee - lowfee;
   
    //Display Results
    cout << fixed << setprecision(2);
    cout << "Balance     $" << setw(9) << balance  << endl;
    cout << "Check Fee   $" << setw(9) << checkfee << endl;
    cout << "Monthly Fee $" << setw(9) << monfee   << endl;
    cout << "Low Balance $" << setw(9) << lowfee   << endl;
    cout << "New Balance $" << setw(9) << newbal;
    
    //Exit stage right
    return 0;
}

