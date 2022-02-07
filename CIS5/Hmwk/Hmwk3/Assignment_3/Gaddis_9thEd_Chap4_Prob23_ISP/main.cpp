/* 
 * File:   main.cpp
 * Author: Liliana Darch
 * Created on January 17, 2019, 4:00 PM
 * Purpose:  Program that calculates a customer’s Internet monthly bill
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>  // Format Library
#include <string>   // String Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    string pckg;  // Internet Package
    int  hours,   // Aditional hours 
         hrsFee;  // Extra hours fee
    float  bill;  // Bill Package A
    
    //Initialize or input i.e. set variable values
    hours = 0;
    cout<<"ISP Bill"<<endl;
    cout<<"Input Package and Hours"<<endl;
    cin>>pckg>>hours;
    
    
    //Map inputs -> outputs
    if (pckg == "A"){           // Package A: $9.95 per month, 10 hrs provided. Extra: $2.00 per hour
        if (hours > 10){
            hrsFee = hours - 10;
            bill = 9.95 + (hrsFee * 2.00);
            cout<<"Bill = $"<<setw(6)<<bill;
        } else {
            cout<<"Bill = $"<<setw(6)<<9.95;
        }
    } 
    else if (pckg == "B"){      // Package B: $14.95 per month, 20 hrs provided. Extra: $1.00 per hour
        if (hours > 20){
            hrsFee = hours - 20;
            bill = 14.95 + (hrsFee * 1.00);
            cout<<"Bill = $"<<setw(6)<<bill;
        } else {
            cout<<"Bill = $"<<setw(6)<<14.95;
        }
    }
    else {                      // Package C: $19.95 per month, unlimited access is provided.
        cout<<"Bill = $"<<setw(6)<<19.95;
    }
   
      
    
    //Display the outputs
    

    //Exit stage right or left!
    return 0;
}