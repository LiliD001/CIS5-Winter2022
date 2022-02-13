/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Liliana Darch
 * Created on Feb 12, 2022, 1:00 PM
 * Purpose: Project Card War Game Version 18
 */


//Execution begins here!


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
void prob1();  //Main menu option 1
void prob2();  //Main menu option 2
void prob3();  //Main menu option 3
void prob4();  //Main menu option 4
void prob5();  //Main menu option 5
void start(string &, char &);   //Function to start the game
int  shuffle(int [] , int );    //Function to shuffle the deck of cards
void prntP1(int, int, int, int, int, string);   //Function to print if player 1 won the round
void prntP2(int, int, int, int, int, string);   //Function to print if player 2 won the round
void prntWar(int, int, int, string);            //Function to print if we have a war on that round
void file(fstream &, unsigned int, string);     //Function to append in the file
bool gameO(bool, int, int);                     //Function to check if the player would like to keep playing
void dkCards();                                 //Function to print the deck of cards using a 2d dimension array
void prntDck(int [],int,int);                   //Function to print the deck of cards     
void mrkSrt(int [],int);                        //Function Mark sort
void bublSrt(int [],int);                       //Function Bubble sort
int  binSrch(int [],int,int);                   //Function binary search

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
        cout<<"Press 4 - Sort a deck of cards "<<endl;
        cout<<"Press 5 - End Credits"<<endl;
        cout<<"Press 6 to Exit "<<endl;
        cout<<endl;
        cin>>choose;
        
        //Display the Solution to the problems
        switch(choose){
            case 1:prob1();break;
            case 2:prob2();break;
            case 3:prob3();break;
            case 4:prob4();break;
            case 5:prob5();break;
            default:cout<<"Exiting the Menu"<<endl;
        }
    }while(choose>=1 && choose<=3);

    return 0;
}



//************************************************
//              GAME FUNCTIONS                   *
//************************************************

//Function ask for player's name and check if the player would like to play
void start(string &name, char &play){
    cout<<"Please enter your name: "<<endl;                                     //Ask for the player's name
    cin>>name;                                                                  //Read the player name
    cout<<"Hi "<<name<<" are you ready to play against the computer?"<<endl;    
    cout<<"Enter Y to play, any letter to exit"<<endl;                          
    cin>>play;                                                                  //Read the user input about playing again
}

//Function to Shuffle the deck of cards
int shuffle(int deck[], int n){                                                 
    int temp = 0;
    int randInd = 0;
    
    for(int i = 0; i < n; i++){
        randInd = rand() % n;
    }
    return randInd;    
}


//Print the player 1 and 2 card and the statistics 
void prntP1(int i, int p1, int p2, int p1Card, int p2Card, string name){        
    cout<<endl;
    cout<<"*** ROUND NUMBER "<<setw(3)<<i<<" ***"<<endl;                        
    cout<<name<<" card is "<<p1<<" and computer card is "<<p2<<endl;
    cout<<name<<" has the highest card "<<p1<<endl;
    cout<<"-- The statistics --"<<endl;                 
    cout<<name<<" has "<<abs(p1Card)<<" cards"<<endl;
    cout<<"Computer has "<<abs(p2Card)<<" cards"<<endl;

    
}

//Function to Print the player 1 and 2 card and the statistics 
void prntP2(int i, int p1, int p2, int p1Card, int p2Card, string name){        
    cout<<endl;
    cout<<"*** ROUND NUMBER "<<setw(3)<<i<<" ***"<<endl;                        
    cout<<name<<" card is "<<p1<<endl;
    cout<<"Computer card is "<<p2<<endl;
    cout<<"Computer has the highest card "<<p2<<endl;
    cout<<"-- The statistics --"<<endl;
    cout<<name<<" has "<<abs(p1Card)<<" cards"<<endl;
    cout<<"Computer has "<<abs(p2Card)<<" cards"<<endl;

}

//Function to Print the war message player 1 and 2 card have matching cards
void prntWar(int i, int p1, int p2, string name){                               
    cout<<endl;
    cout<<"*** ROUND NUMBER "<<setw(3)<<i<<" ***"<<endl;                        
    cout<<name<<" card is "<<p1<<endl;
    cout<<"Computer card is "<<p2<<endl;
    cout<<"*** WE HAVE A WAR ***"<<endl;
}

//Function to Append the winner to the file score.txt
void file(fstream &myFile, unsigned int game, string winner){
    myFile.open("score.txt", ios::app);                                         // Open a file 
    myFile<<"Game number "<<game<<"! The winner is: "<<winner<<"!"<<endl;       //Output in the file
    myFile.close();  
}

//Function that Check if we have a winner every round 
bool gameO(bool gmOver, int p1Card, int p2Card){
    if( p1Card >= 52 || p2Card >= 52 ){                                         //Set the bool to true so the game is over
        return true;
    }
    else{
        return false;
    }
}





//*************************************************
//               MAIN MENU                        *
//*************************************************


//Option 1 from main menu - Play the game
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
    start(name, play);                                                          //Calling the start game function
    
   
    games=200;                                                                  // We can play these game no more than 200 rounds
    
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
                    prntP1(i, p1, p2, p1Card, p2Card, name);                    //Call the print Player 1 function

                }
                if (p1 < p2){ // If player 1 has the highest card
                    p2Card++;                                                   //Adds 1 card to player 2
                    p1Card--;                                                   //Subtract 1 card to player 2
                    prntP2(i, p1, p2, p1Card, p2Card, name);                    //Call the print Player 2 function

                }
                if(p1 == p2) { //If we get a match, we have a war!!
                    prntWar(i, p1, p2, name);                                   //Call the print war function

                    p1 = shuffle(deck, 13);                                     //Assign the random card to Player 1
                    p2 = shuffle(deck, 13);                                     //Assign a new the random card to Player 2 to play the war
                    cout<<endl;

                    if (p1 > p2){                                               // If player 1 has the highest card
                        if ((p1Card <48) || (p2Card <48)) {                     //control the amount of cards played
                            p1Card = p1Card + 4;                                //Add 4 card to player 1
                            p2Card = p2Card - 4;                                //Subtract 4 card to player 2   
                        }
                        prntP1(i, p1, p2, p1Card, p2Card, name);                //Call the print Player 1 function

                    } else{                                                     //If player 2 has the highest card
                        if ((p1Card <=48) || (p2Card <=48)){
                            p2Card = p2Card + 4;                                //Add 4 card to player 2
                            p1Card = p1Card - 4;                                //Subtract 4 card to player 1
                        }
                        prntP2(i, p1, p2, p1Card, p2Card, name);                //Call the print Player 2 function
                    }

                }else {
                    cout<<endl;
                }
               
            gmOver = gameO(gmOver, p1Card,p2Card);                              //Call the game over function
            }
            
            
        } while (gmOver == false);                                              //Keep playing while boolean is equal to false
    
        
        
    winner = p1Card >= 52 ? name:"Computer";                                    //Assign the winner player to the winner variable


    cout<<endl<<"THE WINNER IS"<<endl;              
    cout<<setw(10)<<winner<<endl;                                               //Output the winner
    cout<<endl<<endl;                                                           //close the file
    
    game++;                                                                     // counts how many games were played
    file(myFile, game, winner);                                                 //Call the File function
    
    cout<<"Do you want to play again?"<<endl;                                   //Ask if the user would like to play again 
    cout<<"Enter Y to play, any letter to exit"<<endl;
    cin>>play;                                                                  //Read the user input about playing again
    }
  
    
}


//************************************************
//         OPTION 2 MAIN MENU FUNCTION           *
//************************************************

//Function to print the deck of cards using a 2d dimension array
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



//Option 2 from main menu - Learn how to play
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
    
    dkCards();                                                                  //Calling Function to print the deck of cards using a 2d dimension array
  
}

//Option 3 from main menu - Scores
//Function to read the file 
void prob3(){
    fstream        myFile; 
    myFile.open("score.txt", ios::in);                                          
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

//Option 4 from main menu - Sort a deck of cards
void prob4(){
    
    //Declare Variables
    int val, indx;
    const int SIZE=52;
    int deck[SIZE] = {2,3,4,5,6,7,8,9,10,11,12,13,1,
                      2,3,4,5,6,7,8,9,10,11,12,13,1,
                      2,3,4,5,6,7,8,9,10,11,12,13,1,
                      2,3,4,5,6,7,8,9,10,11,12,13,1};
    
    cout<<"Input a number from 1 to 13"<<endl;
    cin>>val;
    
    //Display the outputs
    cout<<"---------------------------------------------------"<<endl;
    
    cout<<"Deck of cards organized by suit:"<<endl;
    prntDck(deck,SIZE,13);                                                      //Calling function 
    cout<<endl<<endl;
    cout<<"---------------------------------------------------"<<endl;

    
    
    //Display the outputs
    cout<<"Deck of cards organized by face using Mark sort:"<<endl;
    mrkSrt(deck,SIZE);                                                          //Calling function to sort
    prntDck(deck,SIZE,13);
    cout<<endl;
    
    indx=binSrch(deck,SIZE,val);
    cout<<val<<" was found at index = "<<indx<<endl;
    cout<<endl;

    
    //Display the outputs
    cout<<"---------------------------------------------------"<<endl;
    cout<<"Deck of cards organized by face using Bubble search:"<<endl;
    bublSrt(deck,SIZE);                                                         //Calling function to sort
    prntDck(deck,SIZE,13);
    
}

//************************************************
//         OPTION 4 MAIN MENU FUNCTION           *
//************************************************

//Function Bubble search
void bublSrt(int deck[],int n){                                                 
    bool swap;
    do{
        swap=false;
        n--;
        for(int i=0;i<n;i++){
            if(deck[i]>deck[i+1]){
                swap=true;
                int temp=deck[i];
                deck[i]=deck[i+1];
                deck[i+1]=temp;
            }
        }
    }while(swap);
}

//Function to sort the deck of cards
void mrkSrt(int deck[],int n){                                                  
    for(int pos=0;pos<n-1;pos++){
        for(int i=pos+1;i<n;i++){
            if(deck[pos]>deck[i]){
                int temp=deck[pos];
                deck[pos]=deck[i];
                deck[i]=temp;
            }
        }
    }
}           


//Function to print the deck of cards
void prntDck(int deck[],int n,int perLine){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<setw(3)<<deck[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

//Function Binary search 
int  binSrch(int deck[],int n,int val){
    int high=n-1,low=0;
    do{
        int middle=(high+low)/2;
        if(val==deck[middle]){
            return middle;
        }else if(val<deck[middle]){
            high=middle-1;
        }else{
            low=middle+1;
        }
    }while(low<high);
    return -1;
}


//Option 5 from main menu - End credits
void prob5(){
    cout<<"END CREDITS"<<endl<<endl;
    cout<<"The Card War game was created by Liliana Darch"<<endl;
    cout<<"Course CIS 5 "<<endl;
    cout<<"Winter 2022"<<endl;
    cout<<"Professor Dr. Mark Lehr"<<endl;
    
    
    
}