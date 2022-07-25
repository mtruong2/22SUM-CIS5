/* 
 * File:   main.cpp
 * Author: Minh Truong
 * Created on: July 22, 2022 6:01 PM
 * Purpose:  Binary Search
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
void prntAry(int arr[],int s, int val, int ind){
    
    for (int i = 0; i < s; i++)
    {
        cout << arr[i] << " ";
        if(i == 9 || i == 19 || i == 29 || i == 39 ||i == 49 || i == 59 || i == 69 || i == 79 ||  i == 89 || i == 99 ) cout << endl;
        
        
    }
    cout << endl;
    cout << "Input the value to find in the array" << endl;
    
    cout << val  << " was found at indx = " << ind << endl;
    
};
void selSrt(int arr[],int s)
{
    int temp;
    for (int i = 0; i < s - 1; i++) 
    {

        for (int j = i + 1; j < s; j++) 
        {

            if (arr[i] > arr[j])
            {

                temp = arr[j];

                arr[j] = arr[i];

                arr[i] = temp;

            }

        }

    }
};
bool binSrch(int arr[],int s,int value,int& index)
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
    
    //Initialize or input i.e. set variable values
     fillAry(array,SIZE);
    cin >> val;
   
    //Sorted List
    selSrt(array,SIZE);
    if(binSrch(array,SIZE,val, indx));
    prntAry(array,SIZE, val, indx);
    //Display the outputs
  //  prntAry(array,SIZE,10);
  //  cout<<"Input the value to find in the array"<<endl;
  //  cin>>val;
  //  if(binSrch(array,SIZE,val,indx))
     //   cout<<val<<" was found at indx = "<<indx<<endl;

    //Exit stage right or left!
    return 0;
