/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Liliana Darch
 * Created on January 31, 2022, 1:36 PM
 * Purpose: Project Card War Game Version 0
 */
 
//System Libraries
#include <iostream> //
#include <iomanip>  //Format Library
#include <cstdlib>  //Srand/Rand
#include <ctime>    //Time function
#include <cmath>    //Math Function
using namespace std;//namespace I/O stream library created

//User Libraries

//Global constants, not Global variables
//These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between
//systems of units!

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    int loop,maxRnd,minRnd;
    
    //Initialize values
    loop=2100000000;
    maxRnd=minRnd=rand();
    for(int i=1;i<=loop;i++){
        int random=rand();
        if(maxRnd<random)maxRnd=random;
        if(minRnd>random)minRnd=random;
    }
    
    //Display the min and max Random number
    cout<<fixed<<setprecision(0);
    cout<<"Number of random function calls = "<<loop<<endl;
    cout<<"The Minimum random number detected = "<<minRnd<<endl;
    cout<<"The Maximum random number detected = "<<maxRnd<<endl;
   
    
    //Exit program!
    return 0;
}