/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Liliana Darch
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Sum positive, negative and all numbers.
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>  // Format Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float num1, num2, num3, num4, num5, num6, num7, num8, num9, num10,
        sumPost, 
         sumNeg,
         sumttl;
    
    //Initialize or input i.e. set variable values
    cout<<"Input 10 numbers, any order, positive or negative"<<endl;
    cin>>num1>>num2>>num3>>num4>>num5>>num6>>num7>>num8>>num9>>num10;
    
    //Map inputs -> outputs
    // num 1
    if (num1 >= 0){
        sumPost = sumPost + num1;
    } else {
        sumNeg = sumNeg + num1;
    }
    
    //num2
    if (num2 >= 0){
        sumPost = sumPost + num2;
    } else {
        sumNeg = sumNeg + num2;
    }
    
    //num 3
    if (num3 >= 0){
        sumPost = sumPost + num3;
    } else {
        sumNeg = sumNeg + num3;
    }
    
    //num 4
    if (num4 >= 0){
        sumPost = sumPost + num4;
    } else {
        sumNeg = sumNeg + num4;
    }
    
    
    // num 5
    if (num5 >= 0){
        sumPost = sumPost + num5;
    } else {
        sumNeg = sumNeg + num5;
    }
    
    // num 6
    if (num6 >= 0){
        sumPost = sumPost + num6;
    } else {
        sumNeg = sumNeg + num6;
    }
    
    // num 7
    if (num7 >= 0){
        sumPost = sumPost + num7;
    } else {
        sumNeg = sumNeg + num7;
    }
    
    // num 8
    if (num8 >= 0){
        sumPost = sumPost + num8;
    } else {
        sumNeg = sumNeg + num8;
    }
    
     // num 9
    if (num9 >= 0){
        sumPost = sumPost + num9;
    } else {
        sumNeg = sumNeg + num9;
    }
    
     // num 10
    if (num10 >= 0){
        sumPost = sumPost + num10;
    } else {
        sumNeg = sumNeg + num10;
    }
    
    sumttl = num1 + num2 + num3 + num4 + num5 + num6 + num7 + num8 + num9 + num10;
    
    //Display the outputs
    cout<<"Negative sum ="<<setw(4)<<static_cast<int>(sumNeg)<<endl;
    cout<<"Positive sum ="<<setw(4)<<static_cast<int>(sumPost)<<endl;
    cout<<"Total sum    ="<<setw(4)<<static_cast<int>(sumttl);

    //Exit stage right or left!
    return 0;
}