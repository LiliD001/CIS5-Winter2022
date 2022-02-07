/* 
 * File:   main.cpp
 * Author: Liliana Darch    
 * Created: Feb 2 2022
 * Purpose:  Reverse the Array
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Srand
#include <ctime>     //Time to set random number seed
#include <cmath>     //Math Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
void  init(int [],int);//Initialize the array
void  print(int [],int,int);//Print the array
void  revrse(int [],int);//Reverse the array


//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    const int SIZE=50;
    int test[SIZE];
    
    
    //Initialize or input i.e. set variable values
    init(test,SIZE);
    
    //Display the outputs
    //print(test,SIZE,10);
    
    //Reverse the Values
    revrse(test,SIZE);
    
    //Display the outputs
    print(test,SIZE,10);

    //Exit stage right or left!
    return 0;
}

void  init(int a[],int n){
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
}

void  print(int a[],int n,int perLine){
    for(int i = 0; i < n; i++){
        cout<<a[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
}

void  revrse(int a[],int n){
   for(int i = 0, j = n-1; i < n/2; i++, j--){
       int temp = a[i];
           a[i] = a[j];
           a[j] = temp;
    }
}

