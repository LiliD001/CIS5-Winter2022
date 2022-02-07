/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Liliana Darch
 * Created on January 12, 2022, 9:36 PM
 * Purpose: Program that display personal information 
 *          Using a single cout statement.
 */
 

//System Level Libraries
#include <cstdlib>
#include <iostream> //Input-Output Library
#include <string>  //String Library
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
    string name, // person's name
        address, // address
        phoneNm, //Phone number
          major; // College major
            
    
    //Initialize Variables
    name = "Lili";
    address = "100, Riverside, CA, 92507";
    phoneNm = "951-000-0000";
    major = "Computer Science";
    
    //Map the inputs/known to the outputs
    
    
    //Display the outputs
    cout<<"My name is "<<name<<endl<<"My address is "<<address<<endl<<"My phone number is "<<phoneNm<<endl<<"My college major is "<<major;
    
    //Exit the program
    return 0;
}

