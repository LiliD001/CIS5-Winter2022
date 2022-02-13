/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Liliana Darch
 * Created on January 18, 2022, 11:40 PM
 * Purpose: Project Card War Game Version 2
 */
 

//System Level Libraries
#include <iostream>  //I/O Library
#include <cstdlib>   //Random Function Library
#include <ctime>     //Time Library
#include <iomanip>   //Formatting Library
#include <fstream>   //File Library
using namespace std;
 
//User Defined Libraries

//Global constants, not Global variables
//These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between
//systems of units!

//Function Prototypes

//Execution begins here!
//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variable Data Types and Constants
    unsigned short face, suit;
    unsigned int nCards;
    unsigned int games;
    
    unsigned short p1, p2,
            p1pnts, p2pnts;
    
    
    //Initialize Variables
    
    nCards=52;
    games=300;
    
    for(int i=0; i<games;i++){
        for(int j=0; j<4;j++){
            suit=rand()%nCards/13; //suit gives me a number from 0 to 3
            cout<<"Suit: "<<suit<<endl;
            for(int k=0; k<13;k++){
                face=rand()%nCards%13; //face gives me a number from 0 to 12
                cout<<"Face: "<<face<<endl;
            }
        }
    }
   
    
    return 0;
}