/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Dr. Liliana Darch
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Calculate the average
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
    //Set the random number seed
   
    //Declare Variables
    float test1;
    float test2;
    float test3;
    float test4;
    float test5;
    float average;
    
    //Initialize or input i.e. set variable values
    cout<<"Input 5 numbers to average."<<endl;
    cin>>test1>>test2>>test3>>test4>>test5;
    
    
    //Map inputs -> outputs
    average = (test1+test2+test3+test4+test5)/5;
    
    
    //Display the outputs
    cout<<fixed<<setprecision(1)<<showpoint;
    cout<<"The average = "<<average;
    
    
    //Exit stage right or left!
    return 0;
}