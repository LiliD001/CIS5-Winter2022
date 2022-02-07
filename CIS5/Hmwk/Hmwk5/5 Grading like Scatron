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
#include <string.h>    //String Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
//void print(const string &);
//void read(const char [],string &);
//int  compare(const string &,const string &,string &);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    //char fileKey[]="key.dat",fileAns[]="answer.dat";
    string score;
    float pRight;
    
    //Initialize or input i.e. set variable values
    const int SIZE=21;
    string keys[SIZE];
    string answers[SIZE];
    
   
    for(int i=0; i<SIZE; i++){
        cin>>keys[i];
    }
    
    
    for(int j=0; j<SIZE; j++){
        cin>>answers[j];
    }
  
      
    cout<<"C/W     ";
    for(int c = 1; c < SIZE; c++){
        if(keys[c] == answers[c]){
            cout<<'C'<<" ";
            pRight++;
        }else{
            cout<<'W'<<" ";
        }
    }
    cout<<endl;
   
   
    
    //Score the exam
    //pRight=compare(key,answers,score);
    
    //Display the outputs
   
    cout<<"Percentage Correct = "<<pRight/(SIZE-1)*100<<"%"<<endl;
    

    //Exit stage right or left!
    return 0;
}
