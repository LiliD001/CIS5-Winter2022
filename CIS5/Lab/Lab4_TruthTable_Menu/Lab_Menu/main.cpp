/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 12th, 2021, 10:58 AM
 * Purpose:  Basic Menu with functions and examples
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Srand
#include <ctime>     //Time library
#include <iomanip>   //Formatting Lbrary
#include <cmath>     //Math Library - Log Function
#include <string>    //String Library
using namespace std;  //STD Name-space where Library is compiled

//User Libraries

//Global Constants not Variables
//Math/Physics/Science/Conversions/Dimensions

//Function Prototypes
void prob1();
void prob2();
void prob3();
void prob4();
void prob5();
void prob6();
void prob7();
void prob8();


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
        cout<<"Problem 1 -      Sort Names     - Gaddis 9thEd Chap4 Prob8"<<endl;
        cout<<"Problem 2 -        Books        - Gaddis 9thEd Chap4 Prob11"<<endl;
        cout<<"Problem 3 -     Bank Charges    - Gaddis 9thEd Chap4 Prob 12"<<endl;
        cout<<"Problem 4 -         Race        - Gaddis 9thEd Chap4 Prob 14"<<endl;
        cout<<"Problem 5 -         ISP         - Gaddis 9thEd Chap4 Prob 23"<<endl;  
        cout<<"Problem 6 - Rock Paper Scissors - Savitch 9thEd Chap3 Prob1 "<<endl;
        cout<<"Problem 7 -   Roman Conversion  - Savitch 9thEd Chap3 Prob3 "<<endl;
        cout<<"Problem 8 -   Compatible Signs  - Savitch 9thEd Chap3 Prob4 "<<endl;
        cout<<"9 or greater, all negatives to exit"<<endl;
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
            default:cout<<"Exiting the Menu"<<endl;
        }
    }while(choose>=1 && choose<=9);

    return 0;
}

void prob1(){
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
    } else if ((name2 < name1 && name2 < name3) && (name1 < name3)){     // Second name is the first one in the alphabet 
        cout<<name2<<endl<<name1<<endl<<name3;
    } else if ((name2 < name1 && name2 < name3) && (name1 > name3)){     // Checking for second and third position
        cout<<name2<<endl<<name3<<endl<<name1;
    } else if ((name3 < name1 && name3 < name2) && (name1 < name2)){     // Third name is the first one in the alphabet 
        cout<<name3<<endl<<name1<<endl<<name2;
    } else {
        cout<<name3<<endl<<name2<<endl<<name1;
    }
    cout<<endl;
}

void prob2(){
    
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
    cout<<endl;
}

void prob3(){
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
    cout<<endl;
}

void prob4(){
    //Declare Variables
    string rName1,  // Runner 1 Name
           rName2,  // Runner 2 Name
           rName3,  // Runner 3 Name
           firstN,  // 1st place Name
           secondN, // 2nd place Name
           thirdN;  // 3rd place Name
           
    
    int  rTime1, // Runner 1 Time
         rTime2, // Runner 2 Time
         rTime3, // Runner 3 Time
         firstT, // 1st place Time
        secondT, // 2nd place Time
         thirdT;  // 3rd place Time
    
    
    //Initialize or input i.e. set variable values
    cout<<"Race Ranking Program"<<endl;
    cout<<"Input 3 Runners"<<endl;
    cin>>rName1>>rTime1;
    cin>>rName2>>rTime2;
    cin>>rName3>>rTime3;
    
    
    //Map inputs -> outputs

    // Runners times
    
    if (rTime1 < rTime2 && rTime1 < rTime3){      // If runner1 time is the faster
        firstT  = rTime1;
        secondT = rTime2 < rTime3 ? rTime2 : rTime3;
        thirdT  = rTime2 > rTime3 ? rTime2 : rTime3;
    }  
    else if (rTime2 < rTime1 && rTime2 < rTime3){ // If runner2 time is the faster
        firstT  = rTime2;
        secondT = rTime1 < rTime3 ? rTime1 : rTime3;
        thirdT  = rTime1 > rTime3 ? rTime1 : rTime3;
    }
    else {                                       // If runner3 time is the faster
        firstT  = rTime3;
        secondT = rTime1;
        thirdT  = rTime2;
    }
    
    
    //Matching first place
    if      (firstT == rTime1) firstN = rName1;
    else if (firstT == rTime2) firstN = rName2;
    else                       firstN = rName3;
    
    //Matching second place
    if      (secondT == rTime1) secondN = rName1;
    else if (secondT == rTime2) secondN = rName2;
    else                        secondN = rName3;
    
    //Matching second place
    if      (thirdT == rTime1) thirdN = rName1;
    else if (thirdT == rTime2) thirdN = rName2;
    else                       thirdN = rName3;
    
    //Display the outputs
    cout<<"Their names, then their times"<<endl;
    cout<<firstN <<"\t"<<setw(3)<<firstT <<endl; 
    cout<<secondN<<"\t"<<setw(3)<<secondT<<endl;
    cout<<thirdN <<"\t"<<setw(3)<<thirdT;
    cout<<endl;
        
}

void prob5(){
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
    cout<<endl;
      
}

void prob6(){
     //Declare Variables
    string player1, //Player1 input 
           player2; //Player2 input
    
    
    //Initialize or input i.e. set variable values
    cout<<"Rock Paper Scissors Game"<<endl;
    cout<<"Input Player 1 and Player 2 Choices"<<endl;
    cin>>player1>>player2;
    
    //Map inputs -> outputs
    
    if ((player1 == "P") || (player1 == "p")){      //Check if player1 input "Paper"
        if ((player2 == "R") || (player2 == "r")){  
            cout<<"Paper covers rock.";
        } else {
            cout<<"Scissors cuts paper.";
        }
    }
    else if ((player1 == "R") || (player1 == "r")){ //Check if player1 input "Rock"
        if ((player2 == "S") || (player2 == "s")){
            cout<<"Rock breaks scissors.";
        } else {
            cout<<"Paper covers rock.";
        }
    } 
     else if ((player1 == "S") || (player1 == "s")){ //Check if player1 input "Scissors"
        if ((player2 == "P") || (player2 == "p")){
            cout<<"Scissors cuts paper.";
        } else {
            cout<<"Rock breaks scissors.";
        }
    } 
    else {
        cout<<"Nobody wins."; // Check if player1 and player2 input the same option
    }
    cout<<endl;
}

void prob7(){
    
    //Declare Variables
    
    short algebra;
    string roman="";
    char n1000s,n100s,n10s,n1s;
    
    //Initialize variables here
    cout<<"Arabic to Roman numeral conversion."<<endl;
    cout<<"Input the integer to convert."<<endl;
    cin>>algebra;
    
   if(algebra<1000 || algebra>=3000){
        cout<<algebra<<" is Out of Range!";
        exit(1);
    }
    
     //Calculate the number of powers of 10
    n1000s=algebra/1000;    //Strip 1000's
    n100s=algebra%1000/100; //Stripped the 100's place
    n10s=algebra%100/10;    //Stripped the 10's place
    n1s=algebra%10;         //Stripped the 1's place
    
    
    //Output Roman Numerals 1000's - Switch Case
    switch(n1000s){
        case 3:roman+="M";
        case 2:roman+="M";
        case 1:roman+="M";
    }
   
    //Output Roman Numerals 100's -  Ternary Operator
    roman+=n100s==9?"CM":
           n100s==8?"DCCC":
           n100s==7?"DCC":
           n100s==6?"DC":
           n100s==5?"D":
           n100s==4?"CD":
           n100s==3?"CCC":
           n100s==2?"CC":
           n100s==1?"C":"";
    
    //Output Roman Numerals 10's - Dependent if
    if(n10s==9)roman+="XC";
    else if(n10s==8)roman+="LXXX";
    else if(n10s==7)roman+="LXX";
    else if(n10s==6)roman+="LX";
    else if(n10s==5)roman+="L";
    else if(n10s==4)roman+="XL";
    else if(n10s==3)roman+="XXX";
    else if(n10s==2)roman+="XX";
    else if(n10s==1)roman+="X";
              
    //Output Roman Numerals 10's - Independent if
    if(n1s==9)roman+="IX";
    if(n1s==8)roman+="VIII";
    if(n1s==7)roman+="VII";
    if(n1s==6)roman+="VI";
    if(n1s==5)roman+="V";
    if(n1s==4)roman+="IV";
    if(n1s==3)roman+="III";
    if(n1s==2)roman+="II";
    if(n1s==1)roman+="I";
    
    //Display the results
    cout<<algebra<<" is equal to "<<roman;
    cout<<endl;
}

void prob8(){
    
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
    cout<<endl;
}
