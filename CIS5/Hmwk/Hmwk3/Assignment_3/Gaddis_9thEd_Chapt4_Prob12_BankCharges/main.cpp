/* 
 * File:   main.cpp
 * Author: Liliana Darch
 * Created on January 17, 2019, 1:00 PM
 * Purpose:  Program that asks for the beginning balance and the number of 
             checks written. Compute and display the bank’s service fees

for the month.
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //format Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int   nChecks; // number of checks per month

    float balance, // Acount balance
          lowBlnc, // Low balance fee if the account falls bellow $400
          mnthFee, // $10 charge per month
          chckFee, // Bank fee based on checks
          newBlnc; // New balance after fees
       
    
    //Initialize or input i.e. set variable values
    mnthFee = 10.00; // $10.00 charge per month
    lowBlnc = 0;     // Low balance fee 
    
    
    cout<<"Monthly Bank Fees"<<endl;
    cout<<"Input Current Bank Balance and Number of Checks"<<endl;
    cin>>balance>>nChecks;
    
    //Map inputs -> outputs
    
    if (balance < 400) // Checking if the balance of the account falls below $400
        lowBlnc = 15;  // Charge the $15.00 fee
    
    
    chckFee =                     nChecks < 20 ? nChecks * 0.10 :                 // Fee $0.10 for fewer than 20 checks
              (nChecks >= 20 && nChecks <= 39) ? nChecks * 0.08 :                 // Fee $0.08 for 20-39 checks
              (nChecks >= 40 && nChecks <= 59) ? nChecks * 0.06 : nChecks * 0.04; // Fee $0.06 for 40-59 checks, otherwise $0.04 
    
    newBlnc = balance - (lowBlnc + chckFee + mnthFee); // Calculate new Balance
    
    
    //Display the outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Balance     $"<<setw(9)<<balance<<endl;
    cout<<"Check Fee   $"<<setw(9)<<chckFee<<endl;
    cout<<"Monthly Fee $"<<setw(9)<<mnthFee<<endl;
    cout<<"Low Balance $"<<setw(9)<<lowBlnc<<endl;
    cout<<"New Balance $"<<setw(9)<<newBlnc;
    
    //Exit stage right or left!
    return 0;
}