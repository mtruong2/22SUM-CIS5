/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <string>
using namespace std;


//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    int arabic, n1000s,n100s,n10s,n1s;
    
    //Declare Variables
    cout << "Arabic to Roman numeral conversion." <<endl;
    cout << "Input the integer to convert." <<endl;
    cin >> arabic;
    
    n1000s=arabic/1000;
    n100s=(arabic-n1000s*1000)/100;
    n10s=arabic%100/10;
    n1s=arabic%10;
    

    //Initialize or input i.e. set variable values
    
    if ((arabic >=1000) && (arabic <= 3000)){
        cout<< arabic << " is equal to "<< endl;
    }else {
        cout << arabic << " is Out of Range!";
        return 0;
    }
    
    //Map inputs -> outputs
     switch(n1000s) {
        case 3: cout <<"M";break;
        case 2: cout <<"M";break;
        case 1: cout <<"M";break;
    }
    
    switch (n100s) {
        case 9: cout <<"CM"; break;
        case 8: cout <<"DCCC"; break;
        case 7: cout <<"DCC"; break;
        case 6: cout <<"DC"; break;
        case 5: cout <<"D"; break;
        case 4: cout <<"CD"; break;
        case 3: cout <<"C";
        case 2: cout <<"C";
        case 1: cout <<"C";
    }
    
    switch (n10s) {
        case 9: cout <<"XC"; break;
        case 8: cout <<"LXXX"; break;
        case 7: cout <<"LXX"; break;
        case 6: cout <<"LX"; break;
        case 5: cout <<"L"; break;
        case 4: cout <<"XL"; break;
        case 3: cout <<"X";
        case 2: cout <<"X";
        case 1: cout <<"X";
    }
    
    switch (n1s) {
        case 9: cout <<"IX"; break;
        case 8: cout <<"VIII"; break;
        case 7: cout <<"VII"; break;
        case 6: cout <<"VI"; break;
        case 5: cout <<"V"; break;
        case 4: cout <<"IV"; break;
        case 3: cout <<"I";
        case 2: cout <<"I";
        case 1: cout <<"I";
    }
    
    //Display the outputs
    
    
    //Exit stage right or left!
    return 0;
}


 //Output Teens in English
   
    