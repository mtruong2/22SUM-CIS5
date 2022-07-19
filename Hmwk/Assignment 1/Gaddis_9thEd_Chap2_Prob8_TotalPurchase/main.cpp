/* 
 * File:   main.cpp
 * Author: Minh Truong
 * Created on June 24, 2022, 6:30 PM
 * Purpose: Problem 8: Total Purchase
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
    float SALES_TAX = 0.07;
    float item1 = 15.95;
    float item2 = 24.95;
    float item3 = 6.95;
    float item4 = 12.95;
    float item5 = 3.95;
    
    //Initialize Variables
    
    
    //Map inputs to outputs -> The Process
    float subtotal = item1 + item2 + item3 + item4 + item5;
    float salesTax = subtotal * SALES_TAX;
    float total = subtotal + salesTax;
    
    //Display Results
    cout << "Item 1 = $"    << item1 << endl;
    cout << "Item 2 = $"    << item2 << endl;
    cout << "Item 3 = $"    << item3 << endl;
    cout << "Item 4 = $"    << item4 << endl;
    cout << "Item 5 = $"    << item5 << endl;
    cout << "Subtotal = $"  << subtotal << endl;
    cout << "Sales Tax = $" << salesTax <<endl;
    cout << "Total = $"     << total << endl;
    
    //Exit stage right
    return 0;
}

