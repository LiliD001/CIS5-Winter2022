/* 
 * File:   main.cpp
 * Author: Liliana Darch    
 * Created: Feb 2 2022
 * Purpose: Standard deviation
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
const float MAXRAND=pow(2,31)-1;

//Function Prototypes
void  init(float [],int);//Initialize the array
void  print(float [],int,int);//Print the array
float avgX(float [],int);//Calculate the Average
float stdX(float [],int, float);//Calculate the standard deviation

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned>(time(0)));
    
    //Declare Variables
    const int SIZE=20;
    float test[SIZE];
    float ave;
    
    //Initialize or input i.e. set variable values
    init(test,SIZE);
    ave = avgX(test,SIZE);
    
    //Display the outputs
    print(test,SIZE,5);
    cout<<"The average            = "<<avgX(test,SIZE)<<endl;
    cout<<"The standard deviation = "<<stdX(test,SIZE, ave)<<endl;

    //Exit stage right or left!
    return 0;
}

void  init(float a[],int n){
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
}

void  print(float a[], int n, int perLine){
     cout<<fixed<<setprecision(7)<<showpoint;
}

float avgX(float a[],int n){
    float average = 0;
    for(int i = 0; i < n; i++){
        average += a[i];
    }
    average = average / n;
}

float stdX(float a[],int n, float aver){
    float sd = 0;
    for(int i = 0; i < n; i++){
       sd += (a[i] - aver) * (a[i] - aver);
    }
    sd = sd/(n-1);
    sd = sqrt(sd);
}

