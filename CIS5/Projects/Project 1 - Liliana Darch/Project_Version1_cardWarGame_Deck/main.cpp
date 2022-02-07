/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Liliana Darch
 * Created on January 31, 2022, 11:40 PM
 * Purpose: Project Card War Game Version 1
 */
 

//System Level Libraries
#include <cstdlib>
#include <iostream> //Input-Output Library
#include <fstream>
using namespace std;
 
//User Defined Libraries

//Global constants, not Global variables
//These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between
//systems of units!

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
   
    //Declare Variables
    const char NCARDS=52;
   // fstream out;
    char suit;
    char face;
    
    
    //Initialize Variables
    //out.open("cards.dat", ios::out);
    
    //Map the inputs/known to the outputs
    for(int card=0; card<NCARDS; card++){
        switch(card/13){
            case 0:suit='S';break;
            case 1:suit='D';break;
            case 2:suit='C';break;
            default:suit='H';
        }
        char cmod=card%13;
        face = cmod==0 ? '2':
               cmod==1 ? '3':
               cmod==2 ? '4':
               cmod==3 ? '5':
               cmod==4 ? '6':
               cmod==5 ? '7':
               cmod==6 ? '8':
               cmod==7 ? '9':
               cmod==8 ? '10':
               cmod==9 ? 'J':
               cmod==10 ?'Q':
               cmod==11 ?'K':'A';
        cout<<face<<suit<<endl;                     
    }
    
   
    
    
    
    
    // Clean up files
    //out.close();
  
    
    //Exit the program
    return 0;
}

