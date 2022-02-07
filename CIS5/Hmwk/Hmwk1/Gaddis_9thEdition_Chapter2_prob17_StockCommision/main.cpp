/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Liliana Darch
 * Created on January 12, 2022, 4:10 PM
 * Purpose: Program that calculate and display Stock Commission
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
const unsigned char CNVPERC = 100;

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Initialize Random Seed once here!
    
    //Declare Variables
    int shrStck, // Shares of stock
         pdStck, // Amount paid for the stock
        cmsnPct, // Percent commission for the transaction
        prcCmsn, // commission paid to stockbroker
        ttlPaid; // Total amount paid
    float prcShr; // Price per share
            
    
    //Initialize Variables
    shrStck = 750;
    prcShr  = 35.00f;
    cmsnPct = 2;
    
    
    //Map the inputs/known to the outputs
    pdStck = shrStck * prcShr;
    prcCmsn = (pdStck * cmsnPct) / CNVPERC;
    ttlPaid = pdStck + prcCmsn;
    
    //Display the outputs
    cout<<"The amount paid for the stock alone is $"<<pdStck<<endl;
    cout<<"The amount of the commission is $"<<prcCmsn<<endl;
    cout<<"The total amount paid is $"<<ttlPaid;
    
    //Exit the program
    return 0;
}

