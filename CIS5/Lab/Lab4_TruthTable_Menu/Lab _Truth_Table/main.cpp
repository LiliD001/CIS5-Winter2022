/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Liliana Darch
 * Created on January 13, 2022, 11:36 AM
 * Purpose: Truth Table
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
    bool x,y;
    
    //Heading
    cout<<"X   Y   !X   !Y   X&&Y   X||Y   X^Y   X^Y^X  X^Y^Y   !X&&!Y  "
        <<"!(X||Y)   !X||!Y   !(X&&Y)"<<endl;
    
    //First Row
    x=y=true;
    cout<<(x?'T':'F')<<"   ";
    cout<<(y?'T':'F')<<"    ";
    cout<<(!x?'T':'F')<<"    ";
    cout<<(!y?'T':'F')<<"     ";
    cout<<(x&&y?'T':'F')<<"      ";
    cout<<(x||y?'T':'F')<<"     ";
    cout<<(x^y?'T':'F')<<"       ";
    cout<<((x^y)^x?'T':'F')<<"     ";
    cout<<((x^y)^y?'T':'F')<<"        ";
    cout<<(!x&&!y?'T':'F')<<"        ";
    cout<<(!(x||y)?'T':'F')<<"        ";
    cout<<(!x || !y?'T':'F')<<"        ";
    cout<<(!(x&&y)?'T':'F')<<"        ";
    
    cout<<endl;
    
    
   //Second Row
    x=true; y=false;
    cout<<(x?'T':'F')<<"   ";
    cout<<(y?'T':'F')<<"    ";
    cout<<(!x?'T':'F')<<"    ";
    cout<<(!y?'T':'F')<<"     ";
    cout<<(x&&y?'T':'F')<<"      ";
    cout<<(x||y?'T':'F')<<"     ";
    cout<<(x^y?'T':'F')<<"       ";
    cout<<((x^y)^x?'T':'F')<<"     ";
    cout<<((x^y)^y?'T':'F')<<"        ";
    cout<<(!x&&!y?'T':'F')<<"        ";
    cout<<(!(x||y)?'T':'F')<<"        ";
    cout<<(!x || !y?'T':'F')<<"        ";
    cout<<(!(x&&y)?'T':'F')<<"        ";
    
    cout<<endl;
    
    
   //3 Row
    x=false; y=true;
    cout<<(x?'T':'F')<<"   ";
    cout<<(y?'T':'F')<<"    ";
    cout<<(!x?'T':'F')<<"    ";
    cout<<(!y?'T':'F')<<"     ";
    cout<<(x&&y?'T':'F')<<"      ";
    cout<<(x||y?'T':'F')<<"     ";
    cout<<(x^y?'T':'F')<<"       ";
    cout<<((x^y)^x?'T':'F')<<"     ";
    cout<<((x^y)^y?'T':'F')<<"        ";
    cout<<(!x&&!y?'T':'F')<<"        ";
    cout<<(!(x||y)?'T':'F')<<"        ";
    cout<<(!x || !y?'T':'F')<<"        ";
    cout<<(!(x&&y)?'T':'F')<<"        ";
    
    cout<<endl;
    
    
    //4 Row
    x=false; y=false;
    cout<<(x?'T':'F')<<"   ";
    cout<<(y?'T':'F')<<"    ";
    cout<<(!x?'T':'F')<<"    ";
    cout<<(!y?'T':'F')<<"     ";
    cout<<(x&&y?'T':'F')<<"      ";
    cout<<(x||y?'T':'F')<<"     ";
    cout<<(x^y?'T':'F')<<"       ";
    cout<<((x^y)^x?'T':'F')<<"     ";
    cout<<((x^y)^y?'T':'F')<<"        ";
    cout<<(!x&&!y?'T':'F')<<"        ";
    cout<<(!(x||y)?'T':'F')<<"        ";
    cout<<(!x || !y?'T':'F')<<"        ";
    cout<<(!(x&&y)?'T':'F')<<"        ";
    cout<<endl;
    
    
    
    
    //Exit the program
    return 0;
}

