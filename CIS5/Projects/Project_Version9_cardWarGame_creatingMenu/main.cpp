/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Liliana Darch
 * Created on January 31, 2022, 11:00 PM
 * Purpose: Project Card War Game Version 8
 */


//Execution begins here!
//Execution Begins Here

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Srand
#include <ctime>     //Time library
#include <iomanip>   //Formatting Lbrary
#include <cmath>     //Math Library - Log Function
#include <string>    //String Library
using namespace std;  //STD Name-space where Library is compiled

//User Libraries

//Global Constants not Variables
//Math/Physics/Science/Conversions/Dimensions

//Function Prototypes
void prob1();
void prob2();
void prob3();



//Code Begins Execution Here with function main
int main(int argc, char** argv) {
    //Set random number seed once here
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables here
    int choose;//Choose a problem
    
    //Initialize variables here
    do{
        //Display the menu
        cout<<endl;
        cout<<"*********** CARD WAR GAME***********"<<endl;
        cout<<"Press 1 - Play the game"<<endl;
        cout<<"Press 2 - Learn how to play"<<endl;
        cout<<"Press 3 - Scores"<<endl;
        cout<<"Press 4 to Exit "<<endl;
        cout<<endl;
        cin>>choose;
        
        //Display the Solution to the problems
        switch(choose){
            case 1:prob1();break;
            case 2:prob2();break;
            case 3:prob3();break;
            default:cout<<"Exiting the Menu"<<endl;
        }
    }while(choose>=1 && choose<=3);

    return 0;
}

void prob1(){
    cout<<"Hello"<<endl;
}

void prob2(){
    cout<<"Instructions:"<<endl<<endl;
    cout<<"The game uses a standard 52-card deck of playing cards divided evenly and randomly between two players."<<endl;
    cout<<"Each player gets 26 random cards face down. Both player flip the top card at the same time, compare both"<<endl; 
    cout<<"cards and the player with the higher card wins both cards."<<endl<<endl;
    cout<<"A war consist in a tie between the two player because both players fliped identical cards, each player"<<endl; 
    cout<<"lays three cards face-down, then each player flips one card face-up, compare the new face-up cards played"<<endl;
    cout<<"and the player with the higher rank wins all the cards."<<endl;


}

void prob3(){
    cout<<"bye"<<endl;
}
