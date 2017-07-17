/* 
 * File:   main.cpp
 * Author: Allan Ramos
 * Created on June 26, 2017, 6:56 PM
 * Purpose:  To create a currency converter
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Input/Output manipulation
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants
const float YENPERD = 98.93f; //Yen per dollar
const float EURPERD = 0.74f;  //Euros per dollar

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float dollars;         //Amount of dollars to be converted to yen and euros
    float yenConv;         //Converted amount of yen
    float eurConv;        //Converted amount of euros
    
    //Input Data
    cout<<"Enter the amount of dollars you would like to convert to yen and euros"<<endl;
    cin>>dollars;
 
    //Process the Data
    yenConv = dollars * YENPERD;
    eurConv = dollars * EURPERD;
    
    //Output the processed Data
    cout<<"The exchange rates are 1 Dollar = 98.93 Yen = 0.74 Euros"<<endl; 
    cout<<"$"<<setprecision(2)<<fixed<<dollars<<" = "<<yenConv<<" Yen."<<endl;
    cout<<"$"<<dollars<<" = "<<eurConv<<" Euros."<<endl;
    
    //Exit Stage Right!
    return 0;
}