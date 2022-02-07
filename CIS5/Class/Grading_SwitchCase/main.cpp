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
#include <ctime> 
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
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    char grade;
    unsigned char score;
    
    //Initialize Variables
    score=rand()%51+50; //[50,100]
    
    //Map the inputs/known to the outputs
    switch(score/10){
        case 10:
        case  9:grade='A'; break;
        case  8:grade='B'; break;
        case  7:grade='C'; break;
        case  6:grade='D'; break;
        default :grade='F';
    }
    
    //Display the outputs
    cout<<"A score of "<<static_cast<int>(score)<<" = "<<grade<<endl;        
    
    //Exit the program
    return 0;
}

