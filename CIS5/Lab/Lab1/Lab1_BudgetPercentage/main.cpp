/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Liliana Darch
 * Created on January 10, 2022, 1:36 PM
 * Purpose: Calculate the military budget as a percentage
 *          of the federal budget.
 */
 

//System Level Libraries
#include <cstdlib>
#include <iostream> //Input-Output Library
#include <iomanip>  //Format Library
using namespace std;
 
//User Defined Libraries

//Global constants, not Global variables
//These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between
//systems of units!
const unsigned char CNVPERC=100; // Conversion to Percentage

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Initialize Random Seed once here!
    
    //Declare Variables
    float fedBdgt, //Federal Budget in dollars
          milBdgt, //Military Budget in dollars
          mlPrcnt, //Military Budget as a Percentage
           NSBdgt, //NASA Budget in dollars
          NSPrcnt; //NASA Budget as a Percentage 
    
    //Initialize Variables
    fedBdgt=6.820e12f; //Federal Budget = 4.1 Trillion
    milBdgt=7.529e11f; //Military Budget = 700 Billion
    NSBdgt=2.52e10f;  //Nasa Budget = 25 Billion
    
    
    //Map the inputs/known to the outputs
    mlPrcnt = (milBdgt/fedBdgt)*CNVPERC;
    NSPrcnt = (NSBdgt/fedBdgt)*CNVPERC;
    
    //Display the outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"The Military Budget as a percentage of the Federal Budget is "<<mlPrcnt<<"%"<<endl;
    cout<<"The NASA Budget as a percentage of the Federal Budget is "<<NSPrcnt<<"%"<<endl;
    
    //Exit the program
    return 0;
}

