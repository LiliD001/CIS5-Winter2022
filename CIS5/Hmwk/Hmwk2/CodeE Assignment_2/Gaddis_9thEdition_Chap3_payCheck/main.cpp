/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Liliana Darch
 * Created on January 13, 2019, 7:10 PM
 * Purpose: Program that calculate the gross pay
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>  //Format Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int payRate,  //Rate of pay in $'s/hr
        hrsWrkd;  //Hours worked
    float payChck;//Paycheck in $'s
    
    //Initialize Variables
    cout<<"This program calculates the gross paycheck."<<endl;
    cout<<"Input the pay rate in $'s/hr and the number of hours."<<endl;
    cin>>payRate>>hrsWrkd;
    
    //Map the inputs/known to the outputs
    payChck = hrsWrkd<40?                         //Boolean Test
              hrsWrkd*payRate:                    //If Test is true do this
              40*payRate+(hrsWrkd-40)*2*payRate;  //If Test is false do this
            
    
    //Display the outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Paycheck = $"<<setw(7)<<payChck;

    //Exit stage right or left!
    return 0;
}