/* 
 * File:   main.cpp
 * Author: Liliana Darch
 * Created on January 17, 2019, 1:50 PM
 * Purpose:  Place the runners
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   // Format Library
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
    string rName1,  // Runner 1 Name
           rName2,  // Runner 2 Name
           rName3,  // Runner 3 Name
           firstN,  // 1st place Name
           secondN, // 2nd place Name
           thirdN;  // 3rd place Name
           
    
    int  rTime1, // Runner 1 Time
         rTime2, // Runner 2 Time
         rTime3, // Runner 3 Time
         firstT, // 1st place Time
        secondT, // 2nd place Time
         thirdT;  // 3rd place Time
    
    
    //Initialize or input i.e. set variable values
    cout<<"Race Ranking Program"<<endl;
    cout<<"Input 3 Runners"<<endl;
    cin>>rName1>>rTime1;
    cin>>rName2>>rTime2;
    cin>>rName3>>rTime3;
    
    
    //Map inputs -> outputs

    // Runners times
    
    if (rTime1 < rTime2 && rTime1 < rTime3){      // If runner1 time is the faster
        firstT  = rTime1;
        secondT = rTime2 < rTime3 ? rTime2 : rTime3;
        thirdT  = rTime2 > rTime3 ? rTime2 : rTime3;
    }  
    else if (rTime2 < rTime1 && rTime2 < rTime3){ // If runner2 time is the faster
        firstT  = rTime2;
        secondT = rTime1 < rTime3 ? rTime1 : rTime3;
        thirdT  = rTime1 > rTime3 ? rTime1 : rTime3;
    }
    else {                                       // If runner3 time is the faster
        firstT  = rTime3;
        secondT = rTime1;
        thirdT  = rTime2;
    }
    
    
    //Matching first place
    if      (firstT == rTime1) firstN = rName1;
    else if (firstT == rTime2) firstN = rName2;
    else                       firstN = rName3;
    
    //Matching second place
    if      (secondT == rTime1) secondN = rName1;
    else if (secondT == rTime2) secondN = rName2;
    else                        secondN = rName3;
    
    //Matching second place
    if      (thirdT == rTime1) thirdN = rName1;
    else if (thirdT == rTime2) thirdN = rName2;
    else                       thirdN = rName3;
    
    //Display the outputs
    cout<<"Their names, then their times"<<endl;
    cout<<firstN <<"\t"<<setw(3)<<firstT <<endl; 
    cout<<secondN<<"\t"<<setw(3)<<secondT<<endl;
    cout<<thirdN <<"\t"<<setw(3)<<thirdT;
   
        
    //Exit stage right or left!
    return 0;
}