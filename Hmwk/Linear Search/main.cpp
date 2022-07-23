/* 
 * File:   main.cpp
 * Author: Minh Truong
 * Created on: July 22, 2022 5:56 PM
 * Purpose:  Linear Search
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Random Functions
#include <ctime>     //Time Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
void fillAry(int arr[],int s)
{
    for(int i = 0 ; i < s; i++)
        cin >> arr[i];
};
void prntAry(int arr[],int ind , int val){
    
    cout << val << " was found at indx = " << ind << endl;
    
};
bool linSrch(int arr[],int s,int value,int& index)
{
     
    for (int i= 0; i < s ; i++)
    {
        if (arr[i] == value)
         {
              index = i;
             return true;
         }
         
    }
    
};

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=100;
    int array[SIZE];
    int indx,val;
    
    val = 50;
    fillAry(array,SIZE);
    
    if(linSrch(array,SIZE,val,indx))
    {
        prntAry(array,indx, val);
    }
    
    
    //Initialize or input i.e. set variable values
   // val=50;
   // fillAry(array,SIZE);
    
    //Display the outputs
   // prntAry(array,SIZE,10);
  //  if(linSrch(array,SIZE,val,indx))
       // cout<<val<<" was found at indx = "<<indx<<endl;
    
    //Exit stage right or left!
    return 0;
}
//Execution Begins Here!


