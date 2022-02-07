/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Liliana Darch
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Calculate how much insurance you need
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const unsigned char CNVPERC = 100;

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    char  advice;
    float insrnc,
         rplcCst;
    
    //Initialize or input i.e. set variable values
    advice = 80;
    cout<<"Insurance Calculator"<<endl;
    cout<<"How much is your house worth?"<<endl;
    cin>>rplcCst;
    
    //Map inputs -> outputs
    insrnc = (rplcCst * advice) / CNVPERC;
    
    //Display the outputs
    
    cout<<"You need $"<<insrnc<<" of insurance.";

    //Exit stage right or left!
    return 0;
}