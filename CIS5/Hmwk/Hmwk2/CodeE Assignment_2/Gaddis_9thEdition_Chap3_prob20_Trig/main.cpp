/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Liliana Darch
 * Created on January 13, 2019, 6:36 PM
 * Purpose:  The program that displays the sine, cosine, and tangent 
 *           of the angle
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cmath>     //Math library
#include <iomanip>   //Format Libray
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float PI = 4*atan(1);

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float angle, // Angle in degrees
        radiant; // convert the angle in radiant

    
    //Initialize or input i.e. set variable values
    cout<<"Calculate trig functions"<<endl;
    cout<<"Input the angle in degrees."<<endl;
    cin>>angle;
    
    //Map inputs -> outputs
    radiant = (angle * PI) / 180;
    
    //Display the outputs
    cout<<fixed<<setprecision(4)<<showpoint;
    cout<<"sin("<<static_cast<int>(angle)<<") = "<<sin(radiant)<<endl;
    cout<<"cos("<<static_cast<int>(angle)<<") = "<<cos(radiant)<<endl;
    cout<<"tan("<<static_cast<int>(angle)<<") = "<<tan(radiant);


    //Exit stage right or left!
    return 0;
}