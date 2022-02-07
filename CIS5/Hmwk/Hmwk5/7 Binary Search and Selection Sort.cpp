/* 
 * File:   main.cpp
 * Author: Liliana Darch    
 * Created: Feb 2 2022
 * Purpose:  Binary Search
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
void swap1(int &,int &);
void smlLst(int [],int,int);
void markSrt(int [],int);
int binSrch(int [],int,int, int &);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=100;
    int array[SIZE];
    int indx,val;
    
    //Initialize or input i.e. set variable values
    fillAry(array,SIZE);

    //Sorted List
    markSrt(array,SIZE);
    indx=binSrch(array,SIZE,val, indx);
    
    //Display the outputs
    prntAry(array,SIZE,10);
    cout<<endl;
    cout<<"Input the value to find in the array"<<endl;
    cin>>val;
    if(binSrch(array,SIZE,val,indx))
        cout<<val<<" was found at indx = "<<indx<<endl;

    
    

    
    //Exit stage right or left!
    return 0;
}

void fillAry(int a[],int n){
     for(int i = 0; i < n; i++){
        cin>>a[i];
    }
}

void prntAry(int a[],int n,int perLine){
    for(int i = 0; i < n; i++){
        cout<<a[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
}

void swap1(int &a,int &b){
    a=a^b;
    b=a^b;
    a=a^b;
}

void markSrt(int a[],int n){
    for(int i=0;i<n-1;i++){
        smlLst(a,n,i);
    }
}

void smlLst(int a[],int n,int pos){
    for(int i=pos+1;i<n;i++){
        if(a[pos]>a[i])swap1(a[pos],a[i]);
    }
}


int binSrch(int a[],int n,int val, int &indx){
    int low=0, high=n-1;
    do{
        int middle = (low+high)/2;
        if(val == a[middle]){
            indx = middle;
            return indx;
        }else if(val < a[middle]){
            high = middle-1;
        }else{
            low = middle+1;
        }
        
    }while(low < high);

    return indx;
}


