/* 
 * File:   main.cpp
 * Author: Liliana Darch
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Sort the Names using string compare
 */

//System Libraries
#include <iostream>  //Input/Output Library
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
    string name1, // Name 1
           name2, // Name 2
           name3; // Name 3

    
    //Initialize or input i.e. set variable values
    cout<<"Sorting Names"<<endl;
    cout<<"Input 3 names"<<endl;
    cin>>name1>>name2>>name3;
    
    
    //Map inputs -> outputs
    // Sorting the names in alphabetical order 
    
    if ((name1 < name2 && name1 < name3) && (name2 < name3)){            // First name is the first one in the alphabet 
        cout<<name1<<endl<<name2<<endl<<name3;
    } else if ((name1 < name2 && name1 < name3) && (name2 > name3)){     // Checking for second and third position
        cout<<name1<<endl<<name3<<endl<<name2;
    } else if ((name2 > name1 && name2 < name3) && (name1 < name3)){     // Second name is the first one in the alphabet 
        cout<<name2<<endl<<name1<<endl<<name3;
    } else if ((name2 > name1 && name2 < name3) && (name1 > name3)){     // Checking for second and third position
        cout<<name2<<endl<<name3<<endl<<name1;
    } else if ((name3 < name1 && name3 < name2) && (name1 < name2)){     // Third name is the first one in the alphabet 
        cout<<name3<<endl<<name1<<endl<<name2;
    } else {
        cout<<name3<<endl<<name2<<endl<<name1;
    }
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}