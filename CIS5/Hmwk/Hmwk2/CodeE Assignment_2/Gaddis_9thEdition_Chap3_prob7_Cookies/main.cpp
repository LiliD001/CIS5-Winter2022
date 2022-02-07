/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Dr. Liliana Darch
 * Created on January 13, 2019, 4:36 PM
 * Purpose:  Counting calories
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
    int bagCks, // bags of cookies 
         srvng, // serving per bag 
       cksSrvg, // Cookies per serving
       clrSrvg, // calories per serving
       clrCkie, // calories per cookies
        atecks, // cookies that user atecks
       ttlClrs; // Total calores eaten
       
    
    //Initialize or input i.e. set variable values
    bagCks = 40;
    srvng = 10;
    clrSrvg = 300;
    cout<<"Calorie Counter"<<endl;
    cout<<"How many cookies did you eat?"<<endl;
    cin>>atecks;
    
    
    //Map inputs -> outputs
    cksSrvg = bagCks / srvng;
    clrCkie = clrSrvg / cksSrvg;
    ttlClrs = clrCkie * atecks;
    
    
    //Display the outputs
    cout<<"You consumed "<<ttlClrs<<" calories.";

    //Exit stage right or left!
    return 0;
}