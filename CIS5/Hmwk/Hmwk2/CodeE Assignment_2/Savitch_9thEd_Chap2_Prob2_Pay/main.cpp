/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Liliana Darch
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Program that Calculate the new compensation
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>  // Format Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const unsigned char CNSPERC = 100;

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float retroact, // pay increase retroactive for 6 months
           retrprc, // retroactive in percent
            salary, // Previous salary
            oldMnt, // Other months
           nAnlSlr, // New anual salary
           nMntSlr, // New monthly salary
            sixMnt;  // Six months
    
    
    //Initialize or input i.e. set variable values
    retroact = 7.6;
    cout<<"Input previous annual salary."<<endl;
    cin>>salary;
    
    
    //Map inputs -> outputs
    oldMnt = salary / 12;
    sixMnt = oldMnt * 6;
    retrprc = retroact / CNSPERC;
    retroact = (sixMnt * retrprc);
    nAnlSlr = (salary * retrprc) + salary;
    nMntSlr = (oldMnt * retrprc) + oldMnt;
    
    
    //Display the outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Retroactive pay    = $"<<setw(7)<<retroact<<endl;
    cout<<"New annual salary  = $"<<nAnlSlr<<endl;
    cout<<"New monthly salary = $"<<setw(7)<<nMntSlr;

    //Exit stage right or left!
    return 0;
}