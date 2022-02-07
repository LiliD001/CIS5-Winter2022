/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Liliana Darch
 * Created on January 10, 2022, 1:36 PM
 * Purpose: All projects start by using the CPP Template
 *          It shows where to place/code your projects
 */
 

//System Level Libraries
#include <cstdlib>
#include <iostream> //Input-Output Library
#include <iomanip> // Format Library
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
    float mealCst, //meal cost
              tax, //tax of the meal cost
              tip, //tip is 20 percent of the total after adding tax
          ttlBill; //total bill 
    
    //Initialize Variables
    mealCst = 88.67;
    tax = 6.75;
    tip = 20;
    
    //Map the inputs/known to the outputs
    tax = (mealCst * tax) / CNVPERC;
    tip = ((mealCst + tax) * tip) / CNVPERC;
    ttlBill = mealCst + tax + tip;
    
    //Display the outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"The meal cost is $"<<mealCst<<endl;
    cout<<"The tax amount is $"<<tax<<endl;
    cout<<"The tip amount is $"<<tip<<endl;
    cout<<"Your total bill is $"<<ttlBill;
    
    //Exit the program
    return 0;
}

