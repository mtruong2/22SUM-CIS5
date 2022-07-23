/* 
 * File:   main.cpp
 * Author: Minh Truong
 * Created on July 13, 2022, 10:25 AM
 * Purpose: MPG  
 */

#include <iostream> //Input/Output Library

#include <cstdlib> //Random Functions

#include <ctime> //Time Library

using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed

//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

void fillAry(int [],int);

void prntAry(int [],int,int);

void bublSrt(int [],int);

bool binSrch(int [],int,int,int&);

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

//Sorted List

bublSrt(array,SIZE);

//Display the outputs

prntAry(array,SIZE,10);

cout<<"Input the value to find in the array"<<endl;

cin>>val;

if(binSrch(array,SIZE,val,indx))

cout<<val<<" was found at indx = "<<indx<<endl;

//Exit stage right or left!

return 0;

}

void fillAry(int arr[],int n){

for(int i= 0 ;i<n ; ++i){

arr[i] = rand()%100;

}

}

void prntAry(int arr[],int S,int n){

for(int i= 0 ;i<n ; ++i){

cout<<arr[i] <<" ";

}

}

void bublSrt(int arr[],int n){

for (int i = n - 1; i > 0; i--) {

for (int j = 0; j < i; j++) {

if ((arr[j] > arr[j+1])) {

int temp = arr[j];

arr[j] = arr[j+1];

arr[j+1] = temp;

}

}

}

}

bool binSrch(int arr[],int n,int key,int& index){

int low= 0, high = n-1;

while (low <= high)

{

int mid = low + (high-low)/2;

if (arr[mid] == key) {

index = mid;

return true;

}if (arr[mid] < key)

low = mid + 1;

else

high = mid - 1;

}

index = -1;

return false;

}

