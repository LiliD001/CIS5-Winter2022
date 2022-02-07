/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Liliana Darch
 * Created on January 12, 2022, 2:06 PM
 * Purpose: Program that add the subtotal of the sale, the amount of sales tax 
 *          and gives you the total amount.
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
const unsigned char CNVPERC = 100;

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Initialize Random Seed once here!
    
    //Declare Variables
    float item1, // Price of the item 1 in dollars
          item2, // Price of the item 2 in dollars
          item3, // Price of the item 3 in dollars
          item4, // Price of the item 4 in dollars
          item5, // Price of the item 5 in dollars
         subttl, // Subtotal of the sale in dollars
            tax, // The amount of sales tax in percent
         taxPrc, // Tax price in dollars
         ttlPrc; // Total price in dollars
            
    
    //Initialize Variables
    item1 = 15.95;
    item2 = 24.95;
    item3 =  6.95;
    item4 = 12.95;
    item5 =  3.95;
    tax   =  7;
    
    //Map the inputs/known to the outputs
    subttl = item1 + item2 + item3 + item4 + item5;
    taxPrc = (subttl * tax) / CNVPERC;
    ttlPrc = subttl + taxPrc;
    
    //Display the outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"The price of item 1 is $"<<item1<<endl;
    cout<<"The price of item 2 is $"<<item2<<endl;
    cout<<"The price of item 3 is $"<<item3<<endl;
    cout<<"The price of item 4 is $"<<item4<<endl;
    cout<<"The price of item 5 is $"<<item5<<endl;
    cout<<"Subtotal of the sale is $"<<subttl<<endl;
    cout<<"The amount of tax is $"<<taxPrc<<endl;
    cout<<"Your total is $"<<ttlPrc;
    
    //Exit the program
    return 0;
}

