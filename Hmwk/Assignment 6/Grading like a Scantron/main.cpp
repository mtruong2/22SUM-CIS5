/* 
 * File:   main.cpp
 * Author:
 * Created on:
 * Purpose: Compare the answer sheet to the key
 *          and grade
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <fstream>   //File I/O
#include <string>    //String Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
void print(const string &);
void read(const char [],string &);
int  compare(const string &,const string &,string &);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    string key,answers,score;
    char fileKey[]="key.dat",fileAns[]="answer.dat";
    float pRight;
    
    //Initialize or input i.e. set variable values
    read(fileKey,key);
    read(fileAns,answers);
    
    //Score the exam
    pRight=compare(key,answers,score);
    
    //Display the outputs
    cout<<"Key     ";print(key);
    cout<<"Answers ";print(answers);
    cout<<"C/W     ";print(score);
    cout<<"Percentage Correct = "<<pRight/score.size()*100<<"%"<<endl;
    

    //Exit stage right or left!
    return 0;
}
//Function that reads data from file
void read(const char fileName[], string &res)
{
//Opening file
fstream fin(fileName, ios::in);

//Reading data from file
fin >> res;

//Closing file
fin.close();
}

//Function that prints string
void print(const string &res)
{
//Iterating over each character
for(int i=0; i<res.length(); i++)
cout << res[i] << " ";
}

//Function that compares the key and answers
int compare(const string &key,const string &answer,string &score)
{
int cnt=0, i=0;

//Assigning temporary string
score = "WWWWWWWWWWWWWWWWWWWW";

//Iterating over each character
for(i=0; i<key.length(); i++)
{
//Comparing char by char
if(key[i] == answer[i])
{
//Incrementing count
cnt += 1;
score[i] = 'C';
}
}

return cnt;
}
