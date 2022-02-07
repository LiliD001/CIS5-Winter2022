/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Liliana Darch
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Program that calculates letal dose in
 *           Diet Coke
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float CONVLBS = 453.592f;
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    
    int   numCans; //number of cans before the expiration quantity
    float     mkm, //mass that kill a mouse in grams
           mouseM, //mouse mass in grams
          sodaMss, //soda can mass in grams
          usrWght, //friend weight in pounds
          ltDose, //letal dose per can in grams
           mkUser; //mass that kill a friend in grams
    const float swtCan = 0.001f; //artificial sweetener per diet soda can
    
    //Initialize or input i.e. set variable values
    mkm = 5;
    mouseM = 35;
    sodaMss = 350;
 
    cout<<"Program to calculate the limit of Soda Pop Consumption."<<endl;
    cout<<"Input the desired dieters weight in lbs."<<endl;
    cin>>usrWght;
    
    //Map inputs -> outputs
    usrWght = usrWght * CONVLBS; // convert the friend weight from pounds to grams
    
    mkUser = (mkm/mouseM) * usrWght; // mass that kill a user proportional to mass that kill a mouse
    
    ltDose = sodaMss * swtCan; // letal dose in each can
    
    numCans = mkUser / ltDose; // diet soda pop it is possible to drink without dying as a result
    
    //Display the outputs
    cout<<"The maximum number of soda pop cans"<<endl;
    cout<<"which can be consumed is "<<numCans<<" cans";

    //Exit stage right or left!
    return 0;
}