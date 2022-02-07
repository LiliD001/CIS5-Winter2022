/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Liliana Darch
 * Created on January 10, 2022, 8:45 PM
 * Purpose: Program that predicts how much the East Coast
 *          division will generate.
 */
 

//System Level Libraries
#include <cstdlib>
#include <iostream> //Input-Output Library
using namespace std;
 
//User Defined Libraries

//Global constants, not Global variables
//These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between
//systems of units!
const char CONSPCT = 100;

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Initialize Random Seed once here!
    
    //Declare Variables
    int ttlslct, // percentage of total sales
        slsyear, // sales in the year in $
          total; // sales prediction   
    
    
    //Initialize Variables
    ttlslct = 58;     // 58 percentage of total sales
    slsyear = 8600000; // million in sales this year
    
    //Map the inputs/known to the outputs
    total = (slsyear * ttlslct) / CONSPCT;
    
    //Display the outputs
    cout<<"The sales prediction for this year is: $"<<total;
    
    //Exit the program
    return 0;
}

