/* 
 * File:   main.cpp
 * Author: Liliana Darch    
 * Created: Feb 2 2022
 * Purpose:  Create a Product Table
 * 
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const int COLS=6;

//Function Prototypes
void fillTbl(int [][COLS],int);


//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    const int ROWS=6;
    int tblProd[ROWS][COLS];
    
    //Initialize or input i.e. set variable values
    fillTbl(tblProd,ROWS);
    
    //Display the outputs
    

    //Exit stage right or left!
    return 0;
}


 
void fillTbl(int a[][COLS],int n){
    char letter;
    cout<<"Think of this as a Product/Muliplication Table"<<endl;
    cout<<"           "<<"C o l u m n s"<<endl;
    cout<<"     |   1   2   3   4   5   6"<<endl;
    cout<<"----------------------------------"<<endl;
    cout<<fixed<<setprecision(4);
    for (int row=0; row < n; row++){
        switch(row){
            case 0:letter=' ';break;
            case 1:letter='R';break;
            case 2:letter='O';break;
            case 3:letter='W';break;
            case 4:letter='S';break;
            default:letter=' ';
        }
        cout<<letter;
        cout<<setw(3)<<row+1<<" |";
        
        for(int col=0; col < COLS; col++){
            a[row][col] = (row+1) * (col+1);
            cout<<setw(4)<<a[row][col];
        }
    cout<<endl;
    }
}

