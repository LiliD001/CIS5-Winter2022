/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Liliana Darch
 * Created on Fev 11, 2022, 1:00 PM
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
#include <fstream>   //File Library
using namespace std;  //STD Name-space where Library is compiled

//User Libraries

//Global Constants not Variables
//Math/Physics/Science/Conversions/Dimensions

//Function Prototypes
void prob1();
void prob2();
void prob3();
void prob4();
void start(string &, char &);
int  shuffle(int [] , int );
void prntP1(int, int, int, int, int, string);
void prntP2(int, int, int, int, int, string);
void prntWar(int, int, int, string);
void file(fstream &, unsigned int, string);
bool gameO(bool, int, int);
void dkCards();

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
        cout<<"Press 4 - Credits"<<endl;
        cout<<"Press 5 to Exit "<<endl;
        cout<<endl;
        cin>>choose;
        
        //Display the Solution to the problems
        switch(choose){
            case 1:prob1();break;
            case 2:prob2();break;
            case 3:prob3();break;
            case 4:prob4();break;
            default:cout<<"Exiting the Menu"<<endl;
        }
    }while(choose>=1 && choose<=3);

    return 0;
}



//************************************************
//              GAME FUNCTIONS                   *
//************************************************

void start(string &name, char &play){
    cout<<"Please enter your name: "<<endl;                                     //Ask for the player's name
    cin>>name;                                                                  //Read the player name
    cout<<"Hi "<<name<<" are you ready to play against the computer?"<<endl;    
    cout<<"Enter Y to play, any letter to exit"<<endl;                          
    cin>>play;                                                                  //Read the user input about playing again
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

void file(fstream &myFile, unsigned int game, string winner){
    myFile.open("score.txt", ios::app);                                         // Open a file 
    myFile<<"Game number "<<game<<"! The winner is: "<<winner<<"!"<<endl;        //Output in the file
    myFile.close();  
}

bool gameO(bool gmOver, int p1Card, int p2Card){
    if( p1Card >= 52 || p2Card >= 52 ){                                         //Check if we have a winner every round                                                      //Set the boolean to true so the game is over
        return true;
    }
    else{
        return false;
    }
}





//*************************************************
//               MAIN MENU                        *
//*************************************************

void prob1(){
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
    start(name, play);
    
   
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
               
            gmOver = gameO(gmOver, p1Card,p2Card);
            }
            
            
        } while (gmOver == false);                                              //Keep playing while boolean is equal to false
    
        
        
    winner = p1Card >= 52 ? name:"Computer";                                    //Assign the winner player to the winner variable


    cout<<endl<<"THE WINNER IS"<<endl;              
    cout<<setw(10)<<winner<<endl;                                               //Output the winner
    cout<<endl<<endl;                                                           //close the file
    
    game++;                                                                     // counts how many games were played
    file(myFile, game, winner);
    
    cout<<"Do you want to play again?"<<endl;                                   //Ask if the user would like to play again 
    cout<<"Enter Y to play, any letter to exit"<<endl;
    cin>>play;                                                                  //Read the user input about playing again
    }
  
    
}

void dkCards(){
    //Declare Variables
    const int ROWS = 4;
    const int COLS = 13;
    char deck[ROWS][COLS] = {
        {'H','S','C','D'}, 
        {'2','3','4','5','6','7','8','9','T','J','Q','K','A'}
    };

    cout<<"           DECK OF CARDS"<<endl<<endl;
    for (int i = 0; i < COLS; i++) {
        for (int j = 0; j < ROWS; j++) {
            
            string suit;                                                        //switch the suit based on index of array
            switch (deck[0][j]) {
                case 'H': suit = "Hearts"; break;
                case 'S': suit = "Spades"; break;
                case 'C': suit = "Clubs"; break;
                case 'D': suit = "Diamonds"; break;
            }
            cout << suit << deck[1][i] << "   ";                               //output suit and current number
        }
        cout << endl;
    }
}


void prob2(){
    cout<<"Instructions:"<<endl<<endl;
    cout<<"The game uses a standard 52-card deck of playing cards divided evenly and randomly between two players."<<endl;
    cout<<"Each player gets 26 random cards face down. Both player flip the top card at the same time, compare both"<<endl; 
    cout<<"cards and the player with the higher card wins both cards."<<endl<<endl;
    cout<<"A war consist in a tie between the two player because both players fliped identical cards, each player"<<endl; 
    cout<<"lays three cards face-down, then each player flips one card face-up, compare the new face-up cards played"<<endl;
    cout<<"and the player with the higher rank wins all the cards."<<endl;
    cout<<endl;
    cout<<"Card denomination:"<<endl;
    cout<<"A is the highest card = 13"<<endl;
    cout<<"2 is the lowest card  =  1"<<endl<<endl;
    
    dkCards();
  
}


void prob3(){
    fstream        myFile; 
    myFile.open("score.txt", ios::in);                                          // Read from the file
    if(!myFile.is_open()){
        cout<<"Unable to read file"<<endl;
    }
    if (myFile.is_open()){
        string line;
        while(getline(myFile, line)){
            cout<<line<<endl;
        }
    }
    myFile.close();
}


void prob4(){
    cout<<"END CREDITS"<<endl<<endl;
    cout<<"The Card War game was created by Liliana Darch"<<endl;
    cout<<"Course CIS 5 "<<endl;
    cout<<"Winter 2022"<<endl;
    cout<<"Professor Dr. Mark Lehr"<<endl;
}

