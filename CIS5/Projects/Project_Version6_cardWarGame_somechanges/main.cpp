/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Liliana Darch
 * Created on January 31, 2022, 11:00 PM
 * Purpose: Project Card War Game Version 6
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
    unsigned short face, suit; // variables for the face and suit of the deck of cards
    unsigned short nCards;     // number of cards in a deck
    unsigned int games;        // The amount of rounds available to play
    unsigned short p1, p2,     // Player one and player two
            p1Card, p2Card;    // The amount of cards that each player has every round
    string winner;             // Holds the winner   
    string name;               // Holds the name of player 1
    char play;                 // Validates the user input if the user would like to keep playing
    bool gmOver;               // To check if we have a winner and a looser
    
    
    
    //Initialize Variables
    cout<<"Please enter your name: "<<endl;
    cin>>name;
    cout<<"Hi "<<name<<" are you ready to play against the computer?"<<endl;
    cout<<"Enter Y to play, any letter to exit"<<endl;
    cin>>play; 
    
   
    nCards=52; // The 52 cards in a deck
    games=200; // We can play these game no more than 200 rounds
    
    for(int i=0; i<games;i++){
        face=rand()%nCards%13; //face gives me a number from 0 to 12
        suit=rand()%nCards/13; //suit gives me a number from 0 to 3 Hearts, diamonds, 
    }
    
   
    
    while (play == 'Y' || play == 'y'){ //Checks if the user would like to play the game
        p1Card = 26; // Initialize player 1 with 26 cards
        p2Card = 26; // Initialize player 2 with 26 cards
        gmOver = false; // Check if there was a winner and a looser
        
        
        //Start the game 
        do {
            
            for(int i = 0; i<games && !gmOver; i++){    
                p1 = rand()%nCards%13; //Assign the random number to Player 1
                p2 = rand()%nCards%13; //Assign the random number to Player 2

                if (p1 > p2){ // If player 1 has the highest card
                    cout<<endl;
                    cout<<"*** ROUND NUMBER "<<setw(3)<<i<<" ***"<<endl;
                    cout<<name<<" card is "<<p1<<endl;
                    cout<<"Computer card is "<<p2<<endl;
                    cout<<name<<" has the highest card "<<p1<<endl;
                    p1Card++;                                           //Adds 1 card to player 1
                    p2Card--;                                           //Subtract 1 card to player 2
                    cout<<"-- The statistics --"<<endl;                 
                    cout<<name<<" has "<<p1Card<<" cards"<<endl;
                    cout<<"Computer has "<<p2Card<<" cards"<<endl;
                }
                if (p2 > p1){ // If player 1 has the highest card
                    cout<<endl;
                    cout<<"*** ROUND NUMBER "<<setw(3)<<i<<" ***"<<endl;
                    cout<<name<<" card is "<<p1<<endl;
                    cout<<"Computer card is "<<p2<<endl;
                    cout<<"Computer has the highest card "<<p2<<endl;
                    p2Card++;                                           //Adds 1 card to player 2
                    p1Card--;                                           //Subtract 1 card to player 2
                    cout<<"-- The statistics --"<<endl;
                    cout<<name<<" has "<<p1Card<<" cards"<<endl;
                    cout<<"Computer has "<<p2Card<<" cards"<<endl;
                }
                if(p1 == p2) { //If we get a match, we have a war!!
                    cout<<endl;
                    cout<<"*** ROUND NUMBER "<<setw(3)<<i<<" ***"<<endl;
                    cout<<name<<" card is "<<p1<<endl;
                    cout<<"Computer card is "<<p2<<endl;
                    cout<<"*** WE HAVE A WAR ***"<<endl;

                    p1 = rand()%nCards%13; //Assign a new the random number to Player 1 to play the war
                    p2 = rand()%nCards%13; //Assign a new the random number to Player 2 to play the war
                    cout<<endl;


                    cout<<"***Round number "<<i<<endl;
                    if (p1 > p2){ // If player 1 has the highest card
                        cout<<name<<" new card is "<<p1<<endl;
                        cout<<"Computer new card is "<<p2<<endl;
                        cout<<name<<" wins the war with the card number "<<p1<<endl;
                        if ((p1Card <48) || (p2Card <48)) {
                            p1Card = p1Card + 4;                            //Add 4 card to player 1
                            p2Card = p2Card - 4;                            //Subtract 4 card to player 2
                            cout<<"-- The statistics --"<<endl;
                            cout<<name<<" has "<<p1Card<<" cards"<<endl;
                            cout<<"Computer has "<<p2Card<<" cards"<<endl;
                        }

                    } else{ // If player 2 has the highest card
                        cout<<name<<" new card is "<<p1<<endl;
                        cout<<"Computer new card is "<<p2<<endl;
                        cout<<"Computer wins the war with the card number "<<p2<<endl;
                        if ((p1Card <=48) || (p2Card <=48)){
                            p2Card = p2Card + 4;                            //Add 4 card to player 2
                            p1Card = p1Card - 4;                            //Subtract 4 card to player 1
                            cout<<"-- The statistics --"<<endl;
                            cout<<name<<" has "<<p1Card<<" cards"<<endl;
                            cout<<"Computer has "<<p2Card<<" cards"<<endl;
                        }
                    }

                }else {
                    cout<<endl;
                }
               
            if( p1Card >= 52 || p2Card >= 52 )      //Check if we have a winner every round
            gmOver = true;                          //Set the boolean to true so the game is over
            }
            
            
        } while (gmOver == false);                   //Keep playing while boolean is equal to false
    
        
        
    winner = p1Card >= 52 ? name:"Computer";         //Assign the winner player to the winner variable

    cout<<endl<<"THE WINNER IS"<<endl;              
    cout<<setw(10)<<winner<<endl;                    //Output the winner
    cout<<endl<<endl;
    
    
    cout<<"Do you want to play again?"<<endl;         //Ask if the user would like to play again 
    cout<<"Enter Y to play, any letter to exit"<<endl;
    cin>>play;    
    }
    
    
    //Exit stage right!
    return 0;
}