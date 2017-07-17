/* 
 * File:   main.cpp
 * Author: Allan Ramos
 * Created on June 20, 2017, 9:16 PM
 * Purpose:  To determine energy drink purchases
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float totCust = 16500; //Total number of surveyed customers
    float enrgPrc = 0.15f; //Energy drink consumer percentage
    float citPrc = 0.58f;  //Citrus energy drink consumer percentage
    float engCons;         //Number of energy drink consumers
    float citCons;         //Number of citrus energy drink consumers
    
    //Input Data
 
    //Process the Data
    engCons = totCust * enrgPrc;
    citCons = engCons * citPrc;
    
    //Output the processed Data
    cout<<"From a survey of 16500 customers it was found that:"<<endl;
    cout<<engCons<<" of them purchase one or more energy drinks a week."<<endl;
    cout<<"and"<<endl;
    cout<<citCons<<" of them prefer citrus flavored energy drinks."<<endl;
    
    //Exit Stage Right!
    return 0;
}