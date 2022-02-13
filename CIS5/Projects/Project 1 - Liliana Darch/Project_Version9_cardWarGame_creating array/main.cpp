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
bool discard (char [], int, int);

//Execution begins here!
//Execution Begins Here



int main(int argc, char** argv) {
    //Declare variables
    int size=4;
    int deckCard = 52;
    char suit[size]={'H', 'C', 'S', 'D'};
    int size2=12;
    int face[size2]={2,3,4,5,6,7,8,9,10,11,12,13};
    
    char cardDiscard[size]={'x','x','x','x'};
    int num; //hold the random number
    int again; // allow user to continue
    int p1, p1suit, p2, p2suit;
    
    char suit1;
    int face1;
    
    do{
    //get the card value 
    
    
    //get random number
    //num=rand() % size + 1;
    //cout<<"This is the number: "<<num<<endl;
    
    p1 = rand()%deckCard%13;
    p1suit = rand()%deckCard%3;     
    
    p2 = rand()%deckCard%13;     
    p2suit = rand()%deckCard%3;    
    
    
    
    for(int card=0; card<deckCard; card++){
        switch(card/13){
            case 0:suit1='S';break;
            case 1:suit1='D';break;
            case 2:suit1='C';break;
            default:suit1='H';
        }
        char cmod=card%13;
        face1 = cmod==0 ? '2':
               cmod==1 ? '3':
               cmod==2 ? '4':
               cmod==3 ? '5':
               cmod==4 ? '6':
               cmod==5 ? '7':
               cmod==6 ? '8':
               cmod==7 ? '9':
               cmod==8 ? '0':
               cmod==9 ? 'J':
               cmod==10 ?'Q':
               cmod==11 ?'K':'A';
        cout<<face1<<suit1<<endl;                     
    }
    
    cout<<" p1 "<<p1<<endl;
    cout<<" p2 "<<p2<<endl;
    cout<<" p1suit "<<p1suit<<endl;
    cout<<" p2suit "<<p2suit<<endl;
    
    //Display the card that corresponds to the random number
    for(int i=0; i<52; i++){
        if(discard(cardDiscard, size, num)){
            cout<<face[i]<<endl;
           i=4;
       }
       else{
            cout<<"card taken"<<endl;
       }
    }   
    cout<<"Finish enter -99, other enter a number"<<endl;
    cin>>again;
    
    
    
    
    }while(again !=-99);
//Exit stage right!
return 0;
}

//Bool function
bool discard (char x[], int size, int num){
    for(int i=0; i<size; i++){
        if(i+1==num && x[i]=='x'){ //find the location && find if active
            x[i]=='a';
            return true;
        }
        return false;
    }
} 