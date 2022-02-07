/* 
 * File:   main.cpp
 * Author: Liliana Darch
 * Created on January 21 10:00AM
 * Purpose:  Assignment 4
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Srand
#include <ctime>     //Time library
#include <iomanip>   //Formatting Lbrary
#include <cmath>     //Math Library - Log Function
#include <math.h>    //Math library
#include <string>    //String Library
using namespace std;  //STD Name-space where Library is compiled

//User Libraries

//Global Constants not Variables
//Math/Physics/Science/Conversions/Dimensions
const float CNVLTRS = 0.264179; // Conversion: A liter is 0.264179 gallons

//Function Prototypes
void prob1();
void prob2();
void prob3();
void prob4();
void prob5();
void prob6();
void prob7();
void prob8();
void prob9();
void prob10();


//Code Begins Execution Here with function main
int main(int argc, char** argv) {
    //Set random number seed once here
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables here
    int choose;//Choose a problem
    
    //Initialize variables here
    do{
        //Display the menu
        cout<<endl;
        cout<<"***********Choose from the following Menu Items***********"<<endl;
        cout<<"Problem  1 -          Sum         - Gaddis_9thEd_Chap5_Prob1"<<endl;
        cout<<"Problem  2 -      PayInPennies    - Gaddis_9thEd_Chap5_Prob7"<<endl;
        cout<<"Problem  3 -         MinMax       - Gaddis_9thEd_Chap5_Prob13"<<endl;
        cout<<"Problem  4 -        Rectangle     - Gaddis_9thEd_Chap5_Prob22"<<endl;
        cout<<"Problem  5 -         Pattern      - Gaddis_9thEd_Chap5_Prob23"<<endl;  
        cout<<"Problem  6 -   Miles per Gallons  - Savitch_9thEd_Chap4_Prob1 "<<endl;
        cout<<"Problem  7 -  MPG with Functions  - Savitch 9thEd Chap4 Prob2 "<<endl;
        cout<<"Problem  8 -     Inflation Rate   - Savitch 9thEd Chap4 Prob4 "<<endl;
        cout<<"Problem  9 - InfRate w/ Functions - Savitch 9thEd Chap4 Prob5 "<<endl;
        cout<<"Problem 10 - Max value Parameters - Savitch 9thEd Chap4 Prob9 "<<endl;
        cout<<"11 or greater, all negatives to exit"<<endl;
        cout<<endl;
        cin>>choose;
        
        //Display the Solution to the problems
        switch(choose){
            case 1:prob1();break;
            case 2:prob2();break;
            case 3:prob3();break;
            case 4:prob4();break;
            case 5:prob5();break;
            case 6:prob6();break;
            case 7:prob7();break;
            case 8:prob8();break;
            case 9:prob9();break;
            case 10:prob10();break;
            default:cout<<"Exiting the Menu"<<endl;
        }
    }while(choose>=1 && choose<=9);

    return 0;
}

void prob1(){
    //Declare Variables
    int    sum, // Sum of all numbers
        number; // User input 
    
    //Initialize or input i.e. set variable values
    sum = 0;
    cout<<"Enter a number: "<<endl;
    cin>>number;
    
    
    //Map inputs -> outputs
    for ( int i = 0; i <= number; i++){
        sum += i;
    }
    
    
    //Display the outputs
    cout<<"Sum = "<<sum;
}

void prob2(){
    //Declare Variables
    int nDays; // Number of days
    
    //Initialize or input i.e. set variable values
    cout<<"Enter the number of days: "<<endl;
    cin>>nDays;
    
    //Map inputs -> outputs
   
    
    //Display the outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Pay = $"<<setw(3)<<((pow(2,nDays) - 1) * 0.01); // use power to calculate the pennies
    
    
}

void prob3(){
     //Declare Variables
    int number, // input number
           min, // smallest number entered
           max; // largest  number entered
    
    
    //Initialize or input i.e. set variable values
    cout<<"Enter as many numbers as you want, to end type -99"<<endl;
    cin>>number;  
    max = number; // Assign the first input to max number
    min = number; // Assign the first input to min number
    
    //Map inputs -> outputs
    
    while (number != -99){  //Checking the end of the series
        max = max < number ? number : max;  //Comparing the max to the new number inputed 
        min = min > number ? number : min;  //Comparing the min to the new number inputed 
        
        cin>>number;
    }
    
    //Display the outputs
    cout<<"Smallest number in the series is "<<min<<endl;
    cout<<"Largest  number in the series is "<<max;
}

void prob4(){
    //Declare Variables
    int  number;
    char chrter;
    
    
    //Initialize or input i.e. set variable values
    cout<<"Enter a number and a character to create a rectangle:"<<endl;
    cin>>number;
    cin>>chrter;
    
    //Map inputs -> outputs
    for (int i = 0; i < number; i++){
        
        for (int j = 0; j < number; j++){
            cout<<chrter;
        }    
        if(i != number-1){
            cout<<endl;
        }
        
    }
        
}

void prob5(){
    //Declare Variables
    short number;
    char chrter;
    
    //Initialize or input i.e. set variable values
    cout<<"Enter a number to create a pattern:"<<endl;
    cin>>number;
    chrter = '+';
    
    //Map inputs -> outputs
    
    //Increment
    for (int i = 0; i < number; i++){
        
        for (int j = 0; j <= i; j++){
            cout<<chrter;
        }    
        cout<<endl;
        
        if(i != number){ 
            cout<<endl;
        }
    }
    
    //Decrease
    for (int i = 0; i < number; i++){
        
        for (int j = number; j > i; j--){
            cout<<chrter;
        }    
        
        
        if(i != number-1){ 
            cout<<endl;
            cout<<endl;
        }
    }
      
}


//*****************************************************************
// Definition of function ltrGll. The miles parameter holds the   *
// number of liters of gasoline consumed by the car and the miles *
// holds the number of miles traveled by the car                  *
//*****************************************************************

float ltrGll1(float miles, float gallons){
    cout<<"miles per gallon:"<<endl;
   return miles/gallons;
}



void prob6(){
    //Global Constants, no Global Variables are allowed
    //Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
    const float CNVLTRS = 0.264179; // Conversion: A liter is 0.264179 gallons
     //Declare Variables
    float  liters, // number of liters of gasoline consumed by the user’s car
            miles, // number of miles traveled by the car 
          gallons; // gallons 
              
    char    again; //Hold yes or no input
    
    
    //Initialize or input i.e. set variable values
    do{
        cout<<"Enter number of liters of gasoline:"<<endl<<endl;
        cout<<"Enter number of miles traveled:"<<endl<<endl;
        cin>>liters>>miles;
    
    
        //Map inputs -> outputs
        gallons = CNVLTRS * liters;
   

        //Display the outputs
        cout<<fixed<<setprecision(2)<<showpoint;
        cout<<ltrGll1(miles, gallons)<<endl;   
   
        cout<<"Again:"<<endl;
   
        cin>>again;
        
        if ( again == 'Y' || again == 'y'){
        cout<<endl;
    }
   
    } while ( again == 'Y' || again == 'y');
    
    
}


//*****************************************************************
// Definition of function ltrGll. The miles parameter holds the   *
// number of liters of gasoline consumed by the car and the miles *
// holds the number of miles traveled by the car                  *
//*****************************************************************

float ltrGll(float miles, float liters){
    float gallons = liters * CNVLTRS;
    float mpg     = miles/gallons;
    return mpg;
}


void prob7(){
    //Global Constants, no Global Variables are allowed
    //Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
    const float CNVLTRS = 0.264179; // Conversion: A liter is 0.264179 gallons
    
    //Declare Variables
    float     car1,
           liters1, // Car1 number of liters of gasoline consumed by the user’s car
            miles1, // Car1 number of miles traveled by the car 
              car2,
           liters2, // Car2 number of liters of gasoline consumed by the user’s car
            miles2, // Car2 number of miles traveled by the car 
           gallons; // gallons 
              
    char    again; //Hold yes or no input
    
    
    //Initialize or input i.e. set variable values
    do{
        
        //Car 1 
        cout<<"Car 1"<<endl;
        cout<<"Enter number of liters of gasoline:"<<endl;
        cout<<"Enter number of miles traveled:"<<endl;
        cin>>liters1>>miles1;
        
        //Display the outputs
        cout<<fixed<<setprecision(2)<<showpoint;
        car1 =ltrGll(miles1, liters1);
        //car1 = mpg;
        cout<<"miles per gallon: "<<car1<<endl;
        cout<<endl;
        
        
        
        //Car 2
        cout<<"Car 2"<<endl;
        cout<<"Enter number of liters of gasoline:"<<endl;
        cout<<"Enter number of miles traveled:"<<endl;
        cin>>liters2>>miles2;
        
        //Display the outputs
        cout<<fixed<<setprecision(2)<<showpoint;
        car2 = ltrGll(miles2, liters2);
        //car2 = mpg;
        cout<<"miles per gallon: "<<car2<<endl;   
        cout<<endl;


        //Compare which car is more ful efficient
        if (car1 > car2){
            cout<<"Car 1 is more fuel efficient"<<endl;
        }
        else{
            cout<<"Car 2 is more fuel efficient"<<endl;
        }
        cout<<endl;
        
        
        //Go back to menu
        cout<<"Again:"<<endl;
        cin>>again;
        
        if ( again == 'Y' || again == 'y'){
        cout<<endl;
        }
   
    } while ( again == 'Y' || again == 'y');
    
    
    
}


//***********************************************
// Definition of the function rate.             *
// This function uses two float parameters.     * 
// It returns the inflation rate.               *
//***********************************************


float rate1(float newPrc, float oldPrc)
{
    float infRate;
    infRate =  ((oldPrc - newPrc) / oldPrc) * 100;
   
    return infRate;
}


void prob8(){
    //Declare Variables
    float newPrc, //price of an item one today
          oldPrc, //price of an item one year ago
          infltn; //estimates the inflation rate
    char   again; //Hold yes or no input to repeat the program
 
    do {
        //Initialize or input i.e. set variable values
        cout<<"Enter current price:"<<endl;
        cout<<"Enter year-ago price:"<<endl;
        cin>>newPrc>>oldPrc;
    
        //Map inputs -> outputs
        infltn = rate1(newPrc, oldPrc); //Calls the function rate and assign the value to infltn
    
        //Display the outputs
        cout<<fixed<<setprecision(2)<<showpoint;
        cout<<"Inflation rate: "<<abs(infltn)<<"%"<<endl; //Display the absolute value of the infltn variable 
        
        
        //Repeat the program
        cout<<endl<<"Again:"<<endl;
        cin>>again;
        
        if ( again == 'Y' || again == 'y'){     
        cout<<endl;
        }
   
    } while ( again == 'Y' || again == 'y');    //Check if the user would like to try again

   
}


//*********************************************************
// Definition of the function rate.                       *
// This function uses two float parameters.               * 
// It returns the inflation rate.                         *
//*********************************************************


float rate(float newPrc, float oldPrc)
{
    float infRate;                           
    infRate =  ((oldPrc - newPrc) / oldPrc); // Calculate the inflation rate 

    return infRate;
}


//*********************************************************
// Definition of the function cost. Estimated price of    *
// the item in one and in two years                       *
//*********************************************************


float cost(float infltn, float price)
{
    float cost;
    cost = (abs(infltn) + 1); // assign the inflation rate to cost
    cost = cost * price;      // calculates the price of an item for the following year

    return cost;
}


void prob9(){
    //Declare Variables
    float newPrc, //price of an item one today
          oldPrc, //price of an item one year ago
          infltn, //estimates the inflation rate
          prcntg, //Percentage 1.3339
           cost1, //cost of an item next year 
           cost2; //cost of an item in two years
    char   again; //Hold yes or no input to repeat the program
 
    do {
        //Initialize or input i.e. set variable values
        cout<<"Enter current price:"<<endl;
        cout<<"Enter year-ago price:"<<endl;
        cin>>newPrc>>oldPrc;
    
        //Map inputs -> outputs
        infltn = rate(newPrc, oldPrc); //Calls the function rate and assign the value to infltn
        cost1  = cost(infltn, newPrc); //Calls the function cost to calculate the cost of an item next year 
        cost2  = cost(infltn, cost1);  //Calls the function cost to calculate the cost of an item in two years
        
    
        //Display the outputs
        cout<<fixed<<setprecision(2)<<showpoint;
        cout<<"Inflation rate: "<<abs(infltn) * 100<<"%"<<endl; //Display the absolute value of the infltn variable 
        cout<<endl;
        cout<<"Price in one year: $"<<cost1<<endl;
        cout<<"Price in two year: $"<<cost2<<endl;
        
        
        //Repeat the program
        cout<<endl<<"Again:"<<endl;
        cin>>again;
        
        if ( again == 'Y' || again == 'y'){     
        cout<<endl;
        }
   
    } while ( again == 'Y' || again == 'y');    //Check if the user would like to try again

   
}


//*******************************************************
// Definition of funtion prmtr2
//
//*******************************************************

float prmtr2(float num1, float num2){
    float max;
    
    max = num1 > num2 ? num1 : num2;
    
    return max;
}

float prmtr3(float num1, float num2, float num3){
    float max;
    
    
    max = (num1 > num2 && num1 > num3) ? num1 : 
          (num2 > num1 && num2 > num3) ? num2 : num3;
          
    
    return max;
}


void prob10(){
    //Declare Variables
    float num1, // input number 1
          num2, // input number 2
          num3, // input number 3
          maxPar1, // largest  number entered
          maxPar2;
    
    //Initialize or input i.e. set variable values
    cout<<"Enter first number:"<<endl<<endl;
    cout<<"Enter Second number:"<<endl<<endl;
    cout<<"Enter third number:"<<endl<<endl;
    cin>>num1>>num2>>num3;

    
    //Map inputs -> outputs
    maxPar1 = prmtr2(num1, num2);
    maxPar2 = prmtr3(num1, num2, num3);
    //max2 = prmtr3(num1, num2, num3);
   
    
    //Display the outputs
  
    cout<<"Largest number from two parameter function:"<<endl;
    cout<<maxPar1<<endl<<endl;

    cout<<"Largest number from three parameter function:"<<endl;
    cout<<maxPar2<<endl;
    
   
}