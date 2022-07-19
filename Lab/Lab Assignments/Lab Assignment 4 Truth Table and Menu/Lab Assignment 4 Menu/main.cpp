/* 
 * File:   main.cpp
 * Author: Minh Truong
 * Created on July 10, 2022, 10:28 PM
 * Purpose:  Lab Assignment 4 Menu
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

//Function Prototypes

//Code Begins Execution Here with function main
int main(int argc, char** argv) {
    //Set random number seed once here
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables here
    int choose;//Choose a problem
    
    //Initialize variables here
    do{
        //Display the menu
        cout<<endl;
        cout<<"Choose from the following Menu Items"<<endl;
        cout<<"Problem 0 - Gaddis_9thEd_Chap4_Prob8_SortNames"<<endl;
        cout<<"Problem 1 - Gaddis_9thEd_Chap4_Prob11_Books"<<endl;
        cout<<"Problem 2 - Gaddis_9thEd_Chap4_Prob12_BankCharges"<<endl;
        cout<<"Problem 3 - Gaddis_9thEd_Chap4_Prob14_Race"<<endl;
        cout<<"Problem 4 - Gaddis_9thEd_Chap4_Prob14_Race"<<endl;
        cout<<"Problem 5 - Savitch_9thEd_Chap4_PracProb1_RockPaperScissors"<<endl;
        cout<<"Problem 6 - Savitch_9thEd_Chap4_Prob3_RomanConversion"<<endl;
        cout<<"Problem 7 - Savitch_9thEd_Chap4_PracProb4_CompatibleSigns"<<endl;
        cout<<"10 or greater, all negatives to exit"<<endl;
        cout<<endl;
        cin>>choose;
        
        //Display the Solution to the problems
        switch(choose){
            case 0:{
                //Declare Variables
                string n1, n2, n3;
                //Initialize or input i.e. set variable values
                cout << "Sorting Names" << endl;
                cout << "Input 3 names" << endl;
                cin >> n1 >> n2 >> n3;
                //Map inputs -> outputs
                if (n1 <= n2 && n1 <= n3 && n2 <= n3) {
                    cout << n1 << "" << endl;
                    cout << n2 << "" << endl;
                    cout << n3;
                } else if (n1 <= n2 && n1 <= n3 && n3 <= n2) {
                    cout << n1 << "" << endl;
                    cout << n3 << "" << endl;
                    cout << n2;
                } else if (n2 <= n1 && n2 <= n3 && n1 <= n3) {
                    cout << n2 << endl; 
                    cout << ""<< n1 << endl;
                    cout << "" << n3;
                } else if (n2 <= n1 && n2 <= n3 && n3 <= n1) {
                    cout << n2 << "" << endl;
                    cout << n3 << "" << endl; 
                    cout << n1;
                } else if (n3 <= n1 && n3 <= n2 && n1 <= n2) {
                    cout << n3 << "" << endl;
                    cout << n1 << "" << endl;
                    cout << n2;
                } else {
                    cout << n3 << "" << endl;
                    cout << n2 << "" << endl;
                    cout << n1;
                }
                break;}
            
            case 1:{
                //Declare Variables
                int numBooks;
                //Initialize or input i.e. set variable values
                cout << "Book Worm Points\n";
                cout << "Input the number of books purchased this month.\n";
                cin >> numBooks;
                cout << "Books purchased =  " << numBooks << endl;
                //Map inputs -> outputs
                if (numBooks == 0)
                    cout << "Points earned   =  0";
                else if (numBooks == 1)
                    cout << "Points earned   =  5";
                else if (numBooks == 2)
                    cout << "Points earned   = 15";
                else if (numBooks == 3)
                    cout << "Points earned   = 30";
                else if (numBooks >= 4)
                    cout << "Points earned   = 60";
                else
                    cout << "That's an invalid number of books";
                break;}
            
            case 2:{
                //Declare Variables
                int checks;
                float balance, 
                    checkfee, 
                    newbal,
                    monfee = 10.00,
                    minbal = 400,
                    lowfee = 15.00;
                //Initialize or input i.e. set variable values
                cout << "Monthly Bank Fees" << endl;
                cout << "Input Current Bank Balance and Number of Checks" << endl;
                cin >> balance >> checks;
                //Map inputs -> outputs
               {
                if (checks < 20)
                checkfee = 0.10 * checks;
                else if (checks >= 20&& checks < 40)
                checkfee = 0.08 * checks;
                else if (checks >= 40&& checks < 60)
                checkfee = 0.06 * checks;
                else checkfee = 0.04 * checks;
                }
                {
                if(balance < 400)
	        lowfee = 15;
                else lowfee = 0;     
                }
                newbal = balance - checkfee - monfee - lowfee;
                //Display the outputs
                cout << fixed << setprecision(2);
                cout << "Balance     $" << setw(9) << balance  << endl;
                cout << "Check Fee   $" << setw(9) << checkfee << endl;
                cout << "Monthly Fee $" << setw(9) << monfee   << endl;
                cout << "Low Balance $" << setw(9) << lowfee   << endl;
                cout << "New Balance $" << setw(9) << newbal;
                break;}
            
            case 3:{
                //Declare Variables
                string runner1, runner2, runner3;
                int time1, time2, time3;
                //Initialize or input i.e. set variable values
                cout << "Race Ranking Program" << endl;
                cout << "Input 3 Runners" << endl;
                cin >> runner1 >> time1;
                cin >> runner2 >> time2;
                cin >> runner3 >> time3;
                cout << "Their names, then their times" << endl;
                //Map inputs -> outputs
                if (time1 < time2 && time1 < time3) {
                    cout << "" << runner1 << "\t" << setw(3) << time1 << endl;

                if (time2 < time3) {
                    cout << "" << runner2 << "\t" << setw(3) << time2 << endl;
                    cout << "" << runner3 << "\t" << setw(3) << time3;
                }
                else if (time3 < time2) {
                    cout << "" << runner3 << "\t" << setw(3) << time3 << endl;
                    cout << "" << runner2 << "\t" << setw(3) << time2;
                }
                }
                else if (time2 < time1 && time2 < time3) {
                    cout << "" << runner2 << "\t" << time2 << setw(3) << endl;

                if (time1 < time3) {
                    cout << "" << runner1 << "\t" << setw(3) << time1 << endl;
                }
                else if (time3 < time1) {
                    cout << "" << runner3 << "\t" << setw(3) << time3 << endl;
                    cout << "" << runner2 << "\t" << setw(3) << time2;
                }
                }
                else if (time3 < time2 && time3 < time1) {
                    cout << "" << runner3 << "\t" << setw(3) << time3 << endl;

                if (time2 < time1) {
                    cout << "" << runner2 << "\t" << setw(3) << time2 << endl;
                    cout << "" << runner1 << "\t" << setw(3) << time1;
                }
                else if (time1 < time2) {
                    cout << "" << runner1 << "\t" << time1 << endl;
                    cout << "" << runner2 << "\t" << time2;
                }
                }
                else {
                cout << "Error! Please restart the program and input a positive value" << endl;
                }
                break;}
            
            case 4:{
                //Declare Variables  
                string package;
                float time;
                float price;
                //Initialize or input i.e. set variable values
                cout << "ISP Bill" << endl;
                cout << "Input Package and Hours" << endl;
                cin >> package;
                //Map inputs -> outputs
                if ((package == "A") || (package == "B") || (package == "C")) {
                cin >> time;
                // Time validation
                if (time <= 744) {
                // Package A
                if (package == "A") {
                if (time > 10) {
                price = 9.95 + (time - 10) * 2;
                } else {
                price = 9.95;
                }
                // Package B
                } else if (package == "B") {
                if (time > 20) {
                price = 14.95 + (time - 20) * 1;
                } else {
                price = 14.95;
                }
                // Package C
                } else {
                price = 19.95;
                }
                } else {
                    cout << "Invalid number of hours!";
                }
                } else {
                    cout << "Invalid package!";
                }
                //Display the outputs
                cout << "Bill = $ " << price;
                break;}
            
            case 5:{
                //Declare Variables
                char p1, p2;
                //Initialize or input i.e. set variable values
                cout << "Rock Paper Scissors Game" <<endl;
                cout << "Input Player 1 and Player 2 Choices" <<endl;
                cin >> p1 >> p2;
                //Map inputs to outputs -> The Process
                if(p1 == p2)
                    cout << "Nobody wins" << endl;
		if( (p1 == 'P' && p2 == 'p') || (p1 == 'p' && p2 == 'P') )
                    cout << "Nobody wins";
		if( (p1 == 'S' && p2 == 's') || (p1 == 'S' && p2 == 's') )
                    cout << "Nobody wins";
		if( (p1 == 'R' && p2 == 'r') || (p1 == 'R' && p2 == 'r') )
                    cout << "Nobody wins" << endl;

		if((p1 == 'P' || p1 == 'p') && (p2 == 'R' || p2 == 'r'))
                    cout << "Paper covers rock.";
		if((p1 == 'R' || p1 == 'r') && (p2 == 'P' || p2 == 'p'))
                    cout << "Paper covers rock.";

		if((p1 == 'R' || p1 == 'r') && (p2 == 'S' || p2 == 's'))
                    cout << "Rock breaks scissors.";
		if((p1 == 'S' || p1 == 's') && (p2 == 'R' || p2 == 'r'))
                    cout << "Rock breaks scissors.";
	   
                if((p1 == 'P' || p1 == 'p') && (p2 == 'S' || p2 == 's'))
                    cout << "Scissors cuts paper.";
		if((p1 == 'S' || p1 == 's') && (p2 == 'P' || p2 == 'p'))
                    cout << "Scissors cuts paper.";
                break;}
            
            case 6:{
                 //Declare Variables
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
                    cout << arabic << " is equal to ";
                }else {
                cout << arabic << " is Out of Range!";
                return 0;
                }
                //Map inputs -> outputs
                switch(n1000s) {
                    case 3: cout <<"M";
                    case 2: cout <<"M";
                    case 1: cout <<"M";
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
                break;}
            
            case 7:{
                //Declare Variables
                string s1, s2;
                //Initialize or input i.e. set variable values
                cout << "Horoscope Program which examines compatible signs." << endl;
                cout << "Input 2 signs." << endl;
                cin >> s1 >> s2;
                //Map inputs -> outputs
                if(s1 =="Taurus" or s1 == "Virgo" or s1 =="Capricorn")
                {
                if(s2 == "Taurus" or s2 == "Virgo" or s2 == "Capricorn")
                    cout << s1 << " and " << s2 << " are compatible Earth signs.";
                else 
                    cout << s1 << " and " << s2 << " are not compatible signs.";
                }else if(s1 == "Aries" or s1 == "Leo" or s1 == "Sagittarius")
                {
                if(s1 == "Aries" or s1 == "Leo" or s1 == "Sagittarius")
                    cout << s1 << " and " << s2 << " are compatible Fire signs.";
                else 
                    cout << s1 << " and " << s2 << " are not compatible signs.";    
                }else if(s1 == "Aries" or s1 == "Libra" or s1 == "Aquarius")
                {
                if(s1 == "Aries" or s1 == "Libra" or s1 == "Aquarius")
                    cout << s1 << " and " << s2 << " are compatible Air signs.";
                else 
                    cout << s1 << " and " << s2 << " are not compatible signs."; 
                }else if(s1 == "Cancer" or s1 == "Scorpio" or s1 == "Pisces")
                {
                if(s1 == "Cancer" or s1 == "Scorpio" or s1 == "Pisces")
                    cout << s1 << " and " << s2 << " are compatible Water signs.";
                else 
                cout << s1 << " and " << s2 << " are not compatible signs."; 
                }                
                break;}
            
            case 8:cout<<"Place Problem 8 here"<<endl;break;
            
            case 9:cout<<"Place Problem 9 here"<<endl;break;
            
            default:cout<<"Exiting the Menu"<<endl;
        
            }
    }while(choose>=0 && choose<=9);
   
       return 0;
}