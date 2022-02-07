/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Liliana Darch
 * Created on January 10, 2022, 8:36 PM
 * Purpose: Program that adds two numbers.
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
    short int num1, //integer 1
              num2, //integer 2
             total; //total sum
    
    //Initialize Variables
    num1 = 50;
    num2 = 100;
    
    //Map the inputs/known to the outputs
    total = num1 + num2;
    
    //Display the outputs
    cout<<"The total sum of "<<num1<<" + "<<num2<<" is: "<<total;
    
    //Exit the program
    return 0;
}

