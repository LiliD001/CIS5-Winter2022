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
    int acre, // Acre of land in square feet
        land, // total land in square feet
     ttlAcre; // Total acre in a tract of land
    
    //Initialize Variables
    acre = 43560;
    land = 391876;
    
    //Map the inputs/known to the outputs
    ttlAcre = land / acre;
    
    //Display the outputs
    cout<<"The number of acres in a tract of land with "<<land<<" square feet is "<<ttlAcre;
    
    //Exit the program
    return 0;
}

