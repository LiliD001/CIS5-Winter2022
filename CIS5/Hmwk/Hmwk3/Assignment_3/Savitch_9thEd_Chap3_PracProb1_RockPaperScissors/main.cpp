/* 
 * File:   main.cpp
 * Author: Liliana Darch
 * Created on January 17, 2019, 5:00 PM
 * Purpose: Score Rock Paper Scissors
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <string>    // String Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    string player1, //Player1 input 
           player2; //Player2 input
    
    
    //Initialize or input i.e. set variable values
    cout<<"Rock Paper Scissors Game"<<endl;
    cout<<"Input Player 1 and Player 2 Choices"<<endl;
    cin>>player1>>player2;
    
    //Map inputs -> outputs
    
    if ((player1 == "P") || (player1 == "p")){      //Check if player1 input "Paper"
        if ((player2 == "R") || (player2 == "r")){  
            cout<<"Paper covers rock.";
        } else {
            cout<<"Scissors cuts paper.";
        }
    }
    else if ((player1 == "R") || (player1 == "r")){ //Check if player1 input "Rock"
        if ((player2 == "S") || (player2 == "s")){
            cout<<"Rock breaks scissors.";
        } else {
            cout<<"Paper covers rock.";
        }
    } 
     else if ((player1 == "S") || (player1 == "s")){ //Check if player1 input "Scissors"
        if ((player2 == "P") || (player2 == "p")){
            cout<<"Scissors cuts paper.";
        } else {
            cout<<"Rock breaks scissors.";
        }
    } 
    else {
        cout<<"Nobody wins."; // Check if player1 and player2 input the same option
    }
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}