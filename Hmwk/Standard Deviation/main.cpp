/* 
 * File:   main.cpp
 * Author: Minh Truong
 * Created on: July 22, 2022 5:26 PM
 * Purpose: Standard Deviation
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Srand
#include <ctime>     //Time to set random number seed
#include <cmath>     //Math Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float MAXRAND=pow(2,31)-1;

//Function Prototypes
void  init(float arr[],int s)
{
    for ( int i = 0; i < s; i++)
        {
            cin >> arr[i];
        }
};//Initialize the array
void  print(float a,float b)
{
    cout << fixed << setprecision(7);
    cout << "The average            = " << a << endl;
    cout << "The standard deviation = " << b << endl;
};//Print the array
float avgX(float arr[],int s)
{
    float average, temp;
   for ( int i = 0; i < s; i++)
        {
            temp+= arr[i];
        }
        return average =temp/s;
};//Calculate the Average
float stdX(float arr[],int s)
{
        float temp= 0;
         float sd = 0;
       for ( int i = 0; i < s; i++)
        {
            temp+= arr[i];
        }
        float a = temp/s;
        for(int i = 0; i < s; i++)   
        {
            sd += pow(arr[i] - a, 2);
        }
        return sqrt (sd/(s-1));
};//Calculate the standard deviation

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned>(time(0)));
    
    //Declare Variables
    const int SIZE=20;
    float test[SIZE], average, sd;
    
    //Initialize or input i.e. set variable values
   // init(test,SIZE);
    init(test, SIZE);
    
    
    average =avgX(test,SIZE);
    sd = stdX(test,SIZE);
   
    //Display the outputs
    print(average,sd);
   // print(test,SIZE,5);
  //  cout<<"The average            = "<<avgX(test,SIZE)<<endl;
  //  cout<<"The standard deviation = "<<stdX(test,SIZE)<<endl;

    //Exit stage right or left!
    return 0;
}