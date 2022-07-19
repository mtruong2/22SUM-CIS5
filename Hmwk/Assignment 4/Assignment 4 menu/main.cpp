/* 
 * File:   main.cpp
 * Author: Minh Truong
 * Created on July 14, 2022, 8:35 PM
 * Purpose:  Assignment 4 Menu
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Srand
#include <ctime>     //Time library
#include <iomanip>   //Formatting Lbrary
#include <cmath>     //Math Library - Log Function
using namespace std;  //STD Name-space where Library is compiled

//User Libraries

//Global Constants not Variables
//Math/Physics/Science/Conversions/Dimensions
float const LITER = 0.264172;
float mGALLON (int ml, int lt);
float calcInflation(float current_cost, float previous_cost );
double max(double x, double y){
    if(x > y) return x;
    else return y;
    }
 double max(double x, double y, double z){
        double temp = max(x, y);
        if(temp > z) return temp;
    else return z;
    }   
//Function Prototypes

//Code Begins Execution Here with function main
int main(int argc, char** argv) {
    //Set random number seed once here
    
    //Declare variables here
    int choose;//Choose a problem
    
    //Initialize variables here
    do{
        //List of Problems which can be run by the program
       cout<<"Choose from the following Menu Items"<<endl;
        cout<<"Problem 0 - Gaddis_9thEd_Chap5_Prob1_Sum"<<endl;
        cout<<"Problem 1 - Gaddis_9thEd_Chap5_Prob7_PayInPennies"<<endl;
        cout<<"Problem 2 - Gaddis_9thEd_Chap5_Prob13_MinMax"<<endl;
        cout<<"Problem 3 - Gaddis_9thEd_Chap5_Prob22_Rectangle"<<endl;
        cout<<"Problem 4 - Gaddis_9thEd_Chap5_Prob23_Pattern"<<endl;
        cout<<"Problem 5 - Savitch_9thEd_Chap4_Prob1_MPG"<<endl;
        cout<<"Problem 6 - Savitch_9Ed_Chap4_Prob2_FuelEff" <<endl;
        cout<<"Problem 7 - Savitch_9Ed_Chap4_Prob4_Inflation" <<endl;
        cout<<"Problem 8 - Savitch_9Ed_Chap4_Prob5_EstCost" <<endl;
        cout<<"Problem 9 - Savitch_9Ed_Chap4_Prob9_2or3Max" <<endl;
        cout<<"10 or greater, all negatives to exit"<<endl;
        cin>>choose;
        
        switch(choose){
            case 0:{
                int value;
                int sum = 0;
                do
                {
		cin >> value;

                } while (value < 0);

                for(int count = 1; count <= value; count++)
                {
		sum += count;
                }
                cout << "Sum = " << sum;
                break;}
            case 1:{
                int num, days;        
                double pay, total;
                num = 1;
                pay = 0.01;
                total = 0;
    
                cin >> days;
                while (days<1)
                {
                cout<<"Number of days worked must be at least 1";
                }
                while (num<=days)
                {
                total=total+pay;
                pay=pay*2;
                num++;
                }
                cout << fixed << setprecision(2);
                cout <<"Pay = $" << total;
                break;}
            case 2:{
                int max=0,num=0,min=10000000;   
                while (num != -99)
                {
                cin >> num;
                if(num==-99)break;
                if (num>max)
                max=num;
                if (num<min)
                min=num;
                } 
                break;}
            case 3:{
                int rectangleLength;
                char letter;
                cin >> rectangleLength;
                cin >> letter;
                for (int i = 0; i < rectangleLength; i++) {
                for (int j = 0; j < rectangleLength; j++) {
                cout << letter; }
        
                if (i != rectangleLength - 1) {
                cout << endl;}
                }
                break;}
            case 4:{
                int size;
                cin >> size;
                for (int rows = 1; rows <= size; rows++) {
		for(int cols=1; cols<=rows; cols++) {
		   	cout << "+";
			
                }
                cout << endl << endl;
                }
	
                for(int rows=1; rows<=size; rows++) {
                for(int cols=1; cols<=size+1-rows; cols++) {
	        cout << '+';
                }
                if(rows<size) cout << endl << endl;
                }
                break;}
            case 5:{
                char repeat;
                int lt, ml;
                repeat ='y';
                
                while (repeat == 'y')
                {
                cout << "Enter number of liters of gasoline:" << endl;
                cin >> lt;
                cout << endl;
            
                cout <<"Enter number of miles traveled:" << endl;;
                cin >> ml;
                cout << endl;
            
                cout << fixed << setprecision(2);
                cout << "miles per gallon:" << endl; 
                cout << mGALLON(ml, lt) << endl;
           
                cout << "Again:" << endl;
                cin >> repeat;
           
        
                if (repeat =='y')
            
                cout << endl;
        
                } 
                break;}
            case 6: {
                int lt;
                float ml;
                float MPG, MPG2;
                char repeat;
                repeat = 'y';
                while (repeat =='y') {       
        
                cout << "Car 1" << endl;
                cout << "Enter number of liters of gasoline:\n";
                cin >> lt;
            
                cout <<"Enter number of miles traveled:\n";
                cin >> ml;
            
                cout << fixed << setprecision(2);
                cout << "miles per gallon:" << setw(1) << "" << mGALLON(ml, lt) << endl << endl;
        
                MPG = ml / (lt * LITER);
       
                cout << "Car 2" << endl;
                cout << "Enter number of liters of gasoline:\n";
                cin >> lt;
            
                cout <<"Enter number of miles traveled:\n";
                cin >> ml;
            
                cout << fixed << setprecision(2);
                cout << "miles per gallon:" << setw(1) << "" << mGALLON(ml, lt) << endl << endl;
        
                MPG2 = ml / (lt * LITER);
           
            
                if (MPG > MPG2) {
                cout << "Car 1 is more fuel efficient\n\n";
                }else{
                cout << "Car 2 is more fuel efficient\n\n";
                }    
            
                cout << "Again:\n";
                cin >> repeat;
           
                if (repeat =='y')
                cout << endl;
                }    
                break;}
            case 7:{
                float cost_lastyear, cost_thisyear;
                char repeat;

                repeat ='y';
                while (repeat == 'y') {
    
                cout << "Enter current price:" << endl;
                cin >> cost_thisyear;


                cout << "Enter year-ago price:" << endl;
                cin >> cost_lastyear;

                float inflation = calcInflation(cost_thisyear, cost_lastyear);

                cout << "Inflation rate: " << fixed << setprecision(2) << inflation << "%" << endl <<endl;
        
                cout << "Again:" << endl;
                cin >> repeat;
        
                if (repeat == 'y')
                cout << endl;
                }
                break;}
            case 8:{
                float cost_lastyear, cost_thisyear;
                float oneyear, twoyear;
                char repeat;
                
                repeat ='y';
                while (repeat == 'y') {
    
                cout << "Enter current price:" << endl;
                cin >> cost_thisyear;


                cout << "Enter year-ago price:" << endl;
                cin >> cost_lastyear;

                float inflation = calcInflation(cost_thisyear, cost_lastyear);
                cout << "Inflation rate: " << fixed << setprecision(2) << inflation << "%" << endl <<endl;
        
                float rate = inflation/100;
                oneyear = cost_thisyear + (cost_thisyear * rate);
                twoyear = oneyear + (oneyear * rate); 
        
                cout << "Price in one year: $" << oneyear << endl;
                cout << "Price in two year: $" << twoyear << endl << endl;
                cout << "Again:" << endl;
                cin >> repeat;
        
                if (repeat == 'y')
                cout << endl;
                }
                break;}
            case 9: {
                double a, b, c;
                cout << "Enter first number:" << endl;
                cin >> a;
                cout << endl;
   
                cout << "Enter Second number:" << endl;
                cin >> b;
                cout << endl;
 
                cout << "Enter third number:" << endl;
                cin >> c;
                cout << endl;
                cout << fixed << setprecision(1);
                cout << "Largest number from two parameter function:" << endl;
                cout << "" << max(a, b) << endl;
                cout << endl;
                cout << "Largest number from three parameter function:" << endl;
                cout << "" << max(a, b, c) << endl;
                break;}
               
            default:cout<<"Exiting the Menu"<<endl;
        }
    }while(choose>=0 && choose<=9);

    return 0;
}

float calcInflation(float current_cost, float previous_cost ){
float rate = ((current_cost - previous_cost)/previous_cost)*100;
return rate;
}

float mGALLON (int m, int l)

{
	float gallons;
	gallons = LITER * l;
	return (m/gallons);
}