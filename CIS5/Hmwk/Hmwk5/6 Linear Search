/* 
 * File:   main.cpp
 * Author: Liliana Darch    
 * Created: Feb 2 2022
 * Purpose:  Linear Search
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Random Functions
#include <ctime>     //Time Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
void fillAry(int [],int);
void prntAry(int [],int,int);
int linSrch(int [],int,int,int&);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=100;
    int array[SIZE];
    int indx,val;
    
    //Initialize or input i.e. set variable values
    val=50;
    fillAry(array,SIZE);
    
    //Display the outputs
    prntAry(array,SIZE,10);
    if(linSrch(array,SIZE,val,indx))
        cout<<val<<" was found at indx = "<<indx<<endl;
    
    //Exit stage right or left!
    return 0;
}

void fillAry(int a[],int n){
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }

}

void prntAry(int a[],int n, int perLine){
    
}

int linSrch(int a[],int n,int val,int &indx){
    int i = 0;
    do{
        if(val==a[i]){
            return indx;
        } else{
            i++;
        }
        
        indx = i;
        
    }while(val != indx);

    return indx;
}
 

