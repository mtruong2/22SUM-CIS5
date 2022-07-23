/* 
 * File:   main.cpp
 * Author: Minh
 * Created: July 23, 2022, 3:33 PM
 * Purpose: Calculate the sums in a dice table
 * 
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const int COLS = 6;


//Function Prototypes
void fillTbl(int [][COLS],int);
void prntTbl(const int [][COLS],int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    const int ROWS = 6;
    int tablSum[ROWS][COLS];

    //Initialize or input i.e. set variable values
    fillTbl(tablSum,ROWS);

    //Display the outputs
    prntTbl(tablSum,ROWS);

    //Exit stage right or left!
    return 0;
}

void fillTbl(int tablSum[][COLS], int ROWS) {
    for(int x = 0; x < ROWS; x++) {
        for(int y = 0; y < COLS; y++) {
            tablSum[x][y] = (x+1)+(y+1);
        }
    }
}

void prntTbl(const int tablSum[][COLS], int ROWS) {
    int linenum = 0;
    cout << "Think of this as the Sum of Dice Table\n";
    cout << setw(25) << "C o l u m n s\n"
         << setw(6) << "|";
         for(int n = 1; n <= COLS; n++) {
             cout << setw(4) << n;
         }
         cout << endl << "----------------------------------\n";
    for(int x = 0; x < ROWS; x++) {
        ++linenum;
        if(linenum == 1) cout << "   1 |";
        else if(linenum == 2) cout << "R  2 |";
        else if(linenum == 3) cout << "O  3 |";
        else if(linenum == 4) cout << "W  4 |";
        else if(linenum == 5) cout << "S  5 |";
        else if(linenum == 6) cout << "   6 |";

        for(int y = 0; y < COLS; y++) {
            cout << setw(4) << tablSum[x][y];
        }
        cout << endl;
    }


}