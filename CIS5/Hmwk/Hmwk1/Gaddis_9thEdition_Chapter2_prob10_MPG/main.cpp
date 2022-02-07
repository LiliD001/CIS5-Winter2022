/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Liliana Darch
 * Created on January 12, 2022, 1:36 PM
 * Purpose: Program that calculates the number of miles per gallon
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

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Initialize Random Seed once here!
    
    //Declare Variables
    int carGas, //Gallons of gasoline a car holds
       mlsDrvn, //Miles driven
           MPG; //Miles per gallon
    
    //Initialize Variables
    carGas = 15;
    mlsDrvn = 375;
    
    //Map the inputs/known to the outputs
    MPG = mlsDrvn / carGas;
    
    //Display the outputs
    cout<<"The number of miles per gallon is "<<MPG;
    
    //Exit the program
    return 0;
}

