/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Liliana Darch
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Program that converts Fahrenheit temperatures 
 *           to Celsius temperatures
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float F, //Temperature in Fahrenheit
          C; //Temperature in Celsius
     
    
    //Initialize or input i.e. set variable values
    
    cout<<"Temperature Converter"<<endl;
    cout<<"Input Degrees Fahrenheit"<<endl;
    cin>>F;
    
    //Map inputs -> outputs
    C = (F - 32) * 5 / 9;
    
    //Display the outputs
    cout<<fixed<<setprecision(1)<<showpoint;
    cout<<F<< " Degrees Fahrenheit = "<<C<<" Degrees Centigrade";

    //Exit stage right or left!
    return 0;
}