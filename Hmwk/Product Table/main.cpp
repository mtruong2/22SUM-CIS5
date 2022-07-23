/* 
 * File:   main.cpp
 * Author: Minh Truong
 * Created: July 22, 2022 5:22 PM
 * Purpose:  Product Table
 * 
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const int COLS=6;

//Function Prototypes
void fillTbl(int arr[][COLS])
{

    for(int i = 0; i < 6;i++ )
    {
    
        for (int j = 0 ; j <6 ; j++)
            arr[i][j] =(i+1)* (j+1) ;
    }
    
};

void prntTbl(const int arr[][COLS])
{
   
   cout << "Think of this as a Product/Muliplication Table" << endl;
    
    cout << "           C o l u m n s" << endl;
    cout << "     |   1   2   3   4   5   6" << endl;
    cout << "----------------------------------" << endl;

    for ( int i = 0; i < 6 ; i ++)
    {
        if( i == 0) cout << "   1 |";
       
       else if( i == 1) cout << "R  2 |";
       
       else if (i == 2) cout << "O  3 |";
       
       else if (i == 3) cout << "W  4 |";
       
       else if (i == 4) cout << "S  5 |";
       
       else if (i == 5) cout << "   6 |";
    for(int j = 0; j  < 6; j++)
       
        {
           if (arr[i][j] < 10) cout << "   " << arr[i][j];
           else  cout << "  " << arr[i][j] ;
      }  
        cout << endl;
    }
};

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    const int ROWS=6;
    int tblProd[ROWS][COLS];
    
    //Initialize or input i.e. set variable values
    fillTbl(tblProd);
    
   // Display the outputs
    prntTbl(tblProd);

    //Exit stage right or left!
    return 0;
}

