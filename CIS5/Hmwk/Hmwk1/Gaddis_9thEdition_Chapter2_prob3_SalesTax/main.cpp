/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Liliana Darch
 * Created on January 12, 2022, 7:26 PM
 * Purpose: Program that compute the total sales tax on a purchase
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
const unsigned char CNVPERC=100; // Conversion to Percentage

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Initialize Random Seed once here!
    
    //Declare Variables
    float purPrc, //Purchase price in Dollars before tax sale
         stateTx, //State sales tax 
          cntyTx, //County sales tax
           ttlTx, //Total taxes in purchase
          ttlPrc; //Total sales tax
    
    
    //Initialize Variables
    purPrc = 95;
    stateTx = 4;
    cntyTx = 2;
    
    //Map the inputs/known to the outputs
    stateTx = (purPrc * stateTx) / CNVPERC;
    cntyTx = (purPrc * cntyTx) / CNVPERC;
    ttlTx = stateTx + cntyTx;
    ttlPrc = purPrc + ttlTx;
    
    //Display the outputs
    cout<<"Your purchase before taxes is $"<<purPrc<<endl;
    cout<<"The state tax on your purchase is $"<<stateTx<<endl;
    cout<<"The county tax on your purchase is $"<<cntyTx<<endl;
    cout<<"You are going to pay $"<<ttlTx<<" in taxes"<<endl;
    cout<<"The total price for your purchase is $"<<ttlPrc;
    
    //Exit the program
    return 0;
}

