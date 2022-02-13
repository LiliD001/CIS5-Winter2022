/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Liliana Darch
 * Created on January 31, 2022, 11:00 PM
 * Purpose: Project Card War Game Version 4
 */
 

//System Level Libraries
#include <iostream>  //I/O Library
#include <cstdlib>   //Random Function Library
#include <ctime>     //Time Library
#include <iomanip>   //Formatting Library
#include <string>    //String library
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
    string name;
    char play;
    
    //Initialize Variables
    cout<<"Please enter your name: "<<endl;
    cin>>name;
    cout<<"Hi "<<name<<" are you ready to play against the computer?"<<endl;
    cout<<"Enter Y to play, any letter to exit"<<endl;
    cin>>play;

   
    nCards=52;
    games=300;
    
    for(int i=0; i<games;i++){
        face=rand()%nCards%13; //face gives me a number from 0 to 12
        suit=rand()%nCards/13; //suit gives me a number from 0 to 3
    }
    
    p1pnts = 26; 
    p2pnts = 26;
    
    if(play == 'Y' || play == 'y'){
    
        //Start the game 
        do {
            for(int i = 0; i<games; i++){
                if ((p1pnts < 52) || (p2pnts < 52)) {
                    p1 = rand()%nCards%13; //Assign the random number to Player 1
                    p2 = rand()%nCards%13; //Assign the random number to Player 2
                    cout<<name<<" card is "<<p1<<endl;
                    cout<<"Computer card is "<<p2<<endl;

                    if(p1 == p2) { //If we get a match, we have a war!!
                        cout<<endl;
                        cout<<"***We have a war!!***"<<endl;

                        p1 = rand()%nCards%13; //Assign a new the random number to Player 1 to play the war
                        p2 = rand()%nCards%13; //Assign a new the random number to Player 2 to play the war
                        cout<<name<<" new card is "<<p1<<endl;
                        cout<<"Computer new card is "<<p2<<endl;
                        cout<<endl;
                        
                        
                        cout<<"***Round number "<<i<<endl;
                        if (p1 > p2){ // If player 1 has the highest card
                            cout<<name<<" wins the war with the card number "<<p1<<endl;
                            p1pnts = p1pnts + 4;
                            cout<<name<<" points is "<<p1pnts<<endl;

                        } else{ // If player 2 has the highest card
                            cout<<"Computer wins the war with the card number "<<p2<<endl;
                            p2pnts = p2pnts + 4;
                            cout<<"Computer points is "<<p2pnts<<endl;
                        }
                    
                    }else {
                        cout<<endl;
                        cout<<"***Round number "<<i<<endl;
                        if (p1 > p2){ // If player 1 has the highest card
                            cout<<name<<" has the highest card "<<p1<<endl;
                            p1pnts++;
                            cout<<name<<" points is "<<p1pnts<<endl;


                        } else{ // If player 2 has the highest card
                            cout<<"Computer has the highest card "<<p2<<endl;
                            p2pnts++;
                            cout<<"Computer points is "<<p2pnts<<endl;
                        }
                        cout<<endl;
                    }
                }
            }
        } while ((p1pnts <= 52) || (p2pnts <= 52));
        
        if(p1pnts >= 52){
        cout<<name<<" is the winner"<<endl;
        }
        if(p2pnts >= 52){
            cout<<"Computer is the winner"<<endl;
        }
    }
    
    
    
    //Exit stage right!
    return 0;
}