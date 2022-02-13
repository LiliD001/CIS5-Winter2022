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
 

//System Level Libraries
#include <iostream>  //I/O Library
#include <cstdlib>   //Random Function Library
#include <ctime>     //Time Library
#include <iomanip>   //Formatting Library
#include <string>    //String library
#include <fstream>   //File library
#include <cmath>     //Math libray
using namespace std;
 
//User Defined Libraries

//Global constants, not Global variables
//These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between
//systems of units!

//Function Prototypes
int  shuffle(int [] , int );
void prntP1(int, int, int, int, int, string);
void prntP2(int, int, int, int, int, string);
void prntWar(int, int, int, string);

//Execution begins here!
//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variable Data Types and Constants
    unsigned short face, suit,                                                  //variables for the face and suit of the deck of cards
                   nCards,                                                      //number of cards in a deck
                   p1, p2;                                                      //Player one and player two
    unsigned int   games, game;                                                 //The amount of rounds available to play
    int            p1Card, p2Card;                                              //The amount of cards that each player has every round
    string         winner;                                                      //Holds the winner   
    string         name;                                                        //Holds the name of player 1
    char           play;                                                        //Validates the user input  keep playing
    bool           gmOver;                                                      //To check if we have a winner and a looser
    fstream        myFile;                                                      //File to hold the winner from each game
    
    const int SIZE=13;
    int deck[SIZE] = {2,3,4,5,6,7,8,9,10,11,12,13};
    
    
    //Initialize Variables
    cout<<"Please enter your name: "<<endl;                                     //Ask for the player's name
    cin>>name;                                                                  //Read the player name
    cout<<"Hi "<<name<<" are you ready to play against the computer?"<<endl;    
    cout<<"Enter Y to play, any letter to exit"<<endl;                          
    cin>>play;                                                                  //Read the user input about playing again
    
    
    games=50;                                                                  // We can play these game no more than 200 rounds
    
    while (play == 'Y' || play == 'y'){                                         //Checks if the user would like to play the game
        p1Card = 26;                                                            //Initialize player 1 with 26 cards
        p2Card = 26;                                                            //Initialize player 2 with 26 cards
        gmOver = false;                                                         //Check if there was a winner and a looser
        
        
        //Start the game 
        do {
            
            for(int i = 0; i<games && !gmOver; i++){    
                p1 = shuffle(deck, 13);                                        //Assign the random card to Player 1
                p2 = shuffle(deck, 13);                                          //Assign the random card to Player 2

                if (p1 > p2){                                                   //If player 1 has the highest card
                    p1Card++;                                                   //Adds 1 card to player 1
                    p2Card--;                                                   //Subtract 1 card to player 2   
                    prntP1(i, p1, p2, p1Card, p2Card, name);                   //Show the round number

                }
                if (p1 < p2){ // If player 1 has the highest card
                    p2Card++;                                                   //Adds 1 card to player 2
                    p1Card--;                                                   //Subtract 1 card to player 2
                    prntP2(i, p1, p2, p1Card, p2Card, name); 

                }
                if(p1 == p2) { //If we get a match, we have a war!!
                    prntWar(i, p1, p2, name);

                    p1 = shuffle(deck, 13);                                     //Assign the random card to Player 1
                    p2 = shuffle(deck, 13);                                     //Assign a new the random card to Player 2 to play the war
                    cout<<endl;

                    if (p1 > p2){                                               // If player 1 has the highest card
                        if ((p1Card <48) || (p2Card <48)) {                     //control the amount of cards played
                            p1Card = p1Card + 4;                                //Add 4 card to player 1
                            p2Card = p2Card - 4;                                //Subtract 4 card to player 2   
                        }
                        prntP1(i, p1, p2, p1Card, p2Card, name);                   //Show the round number

                    } else{                                                     //If player 2 has the highest card
                        if ((p1Card <=48) || (p2Card <=48)){
                            p2Card = p2Card + 4;                                //Add 4 card to player 2
                            p1Card = p1Card - 4;                                //Subtract 4 card to player 1
                        }
                        prntP2(i, p1, p2, p1Card, p2Card, name); 
                    }

                }else {
                    cout<<endl;
                }
               
            if( p1Card >= 52 || p2Card >= 52 )                                  //Check if we have a winner every round
            gmOver = true;                                                      //Set the boolean to true so the game is over
            }
            
            
        } while (gmOver == false);                                              //Keep playing while boolean is equal to false
    
        
        
    winner = p1Card >= 52 ? name:"Computer";                                    //Assign the winner player to the winner variable


    cout<<endl<<"THE WINNER IS"<<endl;              
    cout<<setw(10)<<winner<<endl;                                               //Output the winner
    cout<<endl<<endl;
    
    myFile.open("score.txt", ios::app);                                         // Open a file 
    myFile<<"Game number "<<game<<"! The winner is: "<<winner<<"!"<<endl;        //Output in the file
    game++;                                                                     // counts how many games were played
    myFile.close();                                                             //close the file
    
    cout<<"Do you want to play again?"<<endl;                                   //Ask if the user would like to play again 
    cout<<"Enter Y to play, any letter to exit"<<endl;
    cin>>play;                                                                  //Read the user input about playing again
    }
    
    
//Exit stage right!
return 0;
}

int shuffle(int deck[], int n){
    int temp = 0;
    int randInd = 0;
    
    for(int i = 0; i < n; i++){
        randInd = rand() % n;
    }
    return randInd;    
}

void prntP1(int i, int p1, int p2, int p1Card, int p2Card, string name){
    cout<<endl;
    cout<<" INSIDE THE FUNCTION P1"<<endl;
    cout<<"*** ROUND NUMBER "<<setw(3)<<i<<" ***"<<endl;        //Show the round number
    cout<<name<<" card is "<<p1<<" and computer card is "<<p2<<endl;
    cout<<name<<" has the highest card "<<p1<<endl;

    cout<<"-- The statistics --"<<endl;                 
    cout<<name<<" has "<<abs(p1Card)<<" cards"<<endl;
    cout<<"Computer has "<<abs(p2Card)<<" cards"<<endl;
    
    
}

void prntP2(int i, int p1, int p2, int p1Card, int p2Card, string name){
    cout<<endl;
    cout<<" INSIDE THE FUNCTION P2"<<endl;
    cout<<"*** ROUND NUMBER "<<setw(3)<<i<<" ***"<<endl;        //Show the round number
    cout<<name<<" card is "<<p1<<endl;
    cout<<"Computer card is "<<p2<<endl;
    cout<<"Computer has the highest card "<<p2<<endl;
    cout<<"-- The statistics --"<<endl;
    cout<<name<<" has "<<abs(p1Card)<<" cards"<<endl;
    cout<<"Computer has "<<abs(p2Card)<<" cards"<<endl;

}

void prntWar(int i, int p1, int p2, string name){
    cout<<endl;
    cout<<"*** ROUND NUMBER "<<setw(3)<<i<<" ***"<<endl;        //Show the round number
    cout<<name<<" card is "<<p1<<endl;
    cout<<"Computer card is "<<p2<<endl;
    cout<<"*** WE HAVE A WAR ***"<<endl;
}

