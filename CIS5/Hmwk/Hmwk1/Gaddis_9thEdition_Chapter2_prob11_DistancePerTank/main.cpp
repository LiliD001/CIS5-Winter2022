/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Liliana Darch
 * Created on January 12, 2022, 1:45 PM
 * Purpose: Program that calculates the distance a car can travel on one 
 *          tank of gas when driven in town and when driven on the highway
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
    char   carGas; //Gallons of gasoline a car holds
    float drvTown, //Average miles per gallon in town
           drvHwy, //Average miles per gallon on highway
          dstTown, //Distance travel in town
           dstHwy; //Distance travel on highway
    
    //Initialize Variables
    carGas = 20;
    drvTown = 23.5f;
    drvHwy = 28.9f;
    
    //Map the inputs/known to the outputs
    dstTown = carGas * drvTown;
    drvHwy = carGas * drvHwy;
    
    //Display the outputs
    cout<<"The distance the can can travel on one tank of gas when driven in town is "<<dstTown<<endl;
    cout<<"The distance the can can travel on one tank of gas when driven on the highway is "<<drvHwy<<endl;
    
    //Exit the program
    return 0;
}

