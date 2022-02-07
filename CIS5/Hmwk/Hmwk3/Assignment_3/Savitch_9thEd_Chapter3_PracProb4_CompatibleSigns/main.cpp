/* 
 * File:   main.cpp
 * Author: Liliana Darcj
 * Created on January 18, 2019, 4:00 PM
 * Purpose: Compatible signs
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <string>    //String Libray
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {

    
    //Declare Variables
    string   sign1, //First person sign 
             sign2, //Second person sign 
           elemnt1, //First person element
           elemnt2; //Second person element 
    
    //Initialize or input i.e. set variable values
    cout<<"Horoscope Program which examines compatible signs."<<endl;
    cout<<"Input 2 signs."<<endl;
    cin>>sign1>>sign2;
    
    //Map inputs -> outputs
    
   //There are 4 Elements in astrology and 3 signs in each
   //Check the element of the input sign1 
   elemnt1 =   sign1 == "Aries"       ? "Fire" : 
               sign1 == "Leo"         ? "Fire" :
               sign1 == "Sagittarius" ? "Fire" :
               sign1 == "Taurus"      ? "Earth" :
               sign1 == "Virgo"       ? "Earth" :
               sign1 == "Capricorn"   ? "Earth" :
               sign1 == "Cancer"      ? "Water" :
               sign1 == "Scorpio"     ? "Water" : 
               sign1 == "Pisces"      ? "Water" : "Air";

    //Check the element of the input sign1  
    elemnt2 =  sign2 == "Aries"       ? "Fire" :
               sign2 == "Leo"         ? "Fire" :
               sign2 == "Sagittarius" ? "Fire" :
               sign2 == "Taurus"      ? "Earth" :
               sign2 == "Virgo"       ? "Earth" :
               sign2 == "Capricorn"   ? "Earth" :
               sign2 == "Cancer"      ? "Water" :
               sign2 == "Scorpio"     ? "Water" : 
               sign2 == "Pisces"      ? "Water" : "Air";
    
    
    //Display the outputs
    //You are most comfortable with your own sign and the other two signs in your Element, 
    //otherwise you are not compatible signs
    
    if (elemnt1 == elemnt2){
        cout<<sign1<<" and "<<sign2<<" are compatible "<<elemnt1<<" signs.";
    }
    else {
         cout<<sign1<<" and "<<sign2<<" are not compatible signs.";
    }

    //Exit stage right or left!
    return 0;
}