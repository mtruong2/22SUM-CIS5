/* 
 * File:   main.cpp
 * Author: Minh Truong
 * Created on July 6, 2022, 11:09 AM
 * Purpose: Truth Table
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
    bool x, y;
    //Heading 
    cout<<"X Y !X !Y X&&Y X||Y X^Y X^Y^X X^Y^Y !X&&!Y "
        <<"!(X||Y) !X||!Y !(X&&Y)"<<endl;
    
    //First Row
    x=y=true;
    cout << (x?'T':'F')       << " ";
    cout << (y?'T':'F')       << "  ";
    cout << (!x?'T':'F')      << "  ";
    cout << (!y?'T':'F')      << "   ";
    cout << (x&&y?'T':'F')    << "    ";
    cout << (x||y?'T':'F')    << "   ";
    cout << (x^y?'T':'F')     << "    ";
    cout << (x^y^x?'T':'F')   << "     ";
    cout << (x^y^y?'T':'F')   << "      ";
    cout << (!x&&!y?'T':'F')  << "       ";
    cout << (!(x||y)?'T':'F') << "      ";
    cout << (!x||!y?'T':'F')  << "      ";
    cout << (!(x&&y)?'T':'F') << " ";
    cout << endl;
    
    //Second Row
    y=false;
    cout << (x?'T':'F')       << " ";
    cout << (y?'T':'F')       << "  ";
    cout << (!x?'T':'F')      << "  ";
    cout << (!y?'T':'F')      << "   ";
    cout << (x&&y?'T':'F')    << "    ";
    cout << (x||y?'T':'F')    << "   ";
    cout << (x^y?'T':'F')     << "    ";
    cout << (x^y^x?'T':'F')   << "     ";
    cout << (x^y^y?'T':'F')   << "      ";
    cout << (!x&&!y?'T':'F')  << "       ";
    cout << (!(x||y)?'T':'F') << "      ";
    cout << (!x||!y?'T':'F')  << "      ";
    cout << (!(x&&y)?'T':'F') << " ";
    cout << endl;
    
    
    x=false;
    cout << (x?'T':'F')       << " ";
    cout << (y?'T':'F')       << "  ";
    cout << (!x?'T':'F')      << "  ";
    cout << (!y?'T':'F')      << "   ";
    cout << (x&&y?'T':'F')    << "    ";
    cout << (x||y?'T':'F')    << "   ";
    cout << (x^y?'T':'F')     << "    ";
    cout << (x^y^x?'T':'F')   << "     ";
    cout << (x^y^y?'T':'F')   << "      ";
    cout << (!x&&!y?'T':'F')  << "       ";
    cout << (!(x||y)?'T':'F') << "      ";
    cout << (!x||!y?'T':'F')  << "      ";
    cout << (!(x&&y)?'T':'F') << " ";
    cout << endl;
    
    y=true;
    cout << (x?'T':'F')       << " ";
    cout << (y?'T':'F')       << "  ";
    cout << (!x?'T':'F')      << "  ";
    cout << (!y?'T':'F')      << "   ";
    cout << (x&&y?'T':'F')    << "    ";
    cout << (x||y?'T':'F')    << "   ";
    cout << (x^y?'T':'F')     << "    ";
    cout << (x^y^x?'T':'F')   << "     ";
    cout << (x^y^y?'T':'F')   << "      ";
    cout << (!x&&!y?'T':'F')  << "       ";
    cout << (!(x||y)?'T':'F') << "      ";
    cout << (!x||!y?'T':'F')  << "      ";
    cout << (!(x&&y)?'T':'F') << " ";
    cout << endl;
    //Exit stage right
    return 0;
}

