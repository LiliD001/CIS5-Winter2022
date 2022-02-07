/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Liliana Darch
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Calculate room occupancy and limits.
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int maxPpl, // Maximum room capacity
        numPpl; //Number of people attending the meeting
       
    
    //Initialize or input i.e. set variable values
    cout<<"Input the maximum room capacity and the number of people"<<endl;
    cin>>maxPpl>>numPpl;

    
    
    //Map inputs -> outputs
    
    
    //Display the outputs
    if (maxPpl <= numPpl){
        cout<<"Meeting cannot be held."<<endl<<"Reduce number of people by "<<(numPpl - maxPpl)<<" to avoid fire violation.";
    }
    else {
        cout<<"Meeting can be held."<<endl<<"Increase number of people by "<<(maxPpl-numPpl)<<" will be allowed without violation."; 
    }

    //Exit stage right or left!
    return 0;
}