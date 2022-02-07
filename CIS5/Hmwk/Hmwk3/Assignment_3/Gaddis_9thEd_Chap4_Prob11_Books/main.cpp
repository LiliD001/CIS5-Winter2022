/* 
 * File:   main.cpp
 * Author: Liliana Darch
 * Created on January 17, 2019, 12:15 PM
 * Purpose:  Book worm
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int nBooks, // Number of books purchased each month
     points; // points awarded 
    
    //Initialize or input i.e. set variable values
    cout<<"Book Worm Points"<<endl;
    cout<<"Input the number of books purchased this month."<<endl;
    cin>>nBooks;
    
    //Map inputs -> outputs
    points =  nBooks >= 4 ? 60:   // if he/she purchase 4 or more books, earns 60 points 
              nBooks == 3 ? 30:   // if he/she purchase 3 books, earns 30 points 
              nBooks == 2 ? 15:   // if he/she purchase 2 books, earns 15 points 
              nBooks == 1 ? 5: 0; // if he/she purchase 1 books, earns 5 points.0 books == 0 points
     
    
    //Display the outputs
    cout<<"Books purchased ="<<setw(3)<<nBooks<<endl;
    cout<<"Points earned   ="<<setw(3)<<points;

    //Exit stage right or left!
    return 0;
}