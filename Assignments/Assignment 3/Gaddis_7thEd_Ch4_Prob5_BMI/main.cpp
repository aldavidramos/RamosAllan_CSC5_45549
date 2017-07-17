/* 
 * File:   main.cpp
 * Author: Allan Ramos
 * Created on July 3, 2017, 8:45 PM
 * Purpose:  To determine body mass index
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
    float hgt,wgt,bmi; //Height in inches, weight lbs, body mass index
    
    //Input Data
    cout<<"Please enter your weight in lbs"<<endl;
    cin>>wgt;
    cout<<"Please enter your height in inches"<<endl;
    cin>>hgt;
    
    //Process the Data
    bmi=wgt*703/(hgt*hgt);
    
    //Output the processed Data
    cout<<"Your bmi is "<<bmi<<endl;
    if(bmi>25)
        cout<<"You are considered to be overweight."<<endl;
    else if(bmi<18.5)
        cout<<"You are considered to be underweight."<<endl;
    else if(bmi>18.5&&bmi<25)
        cout<<"Your weight is considered to be optimal."<<endl;
    
    
    //Exit Stage Right!
    return 0;
}