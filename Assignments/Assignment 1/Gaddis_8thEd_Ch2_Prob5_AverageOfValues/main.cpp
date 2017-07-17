/* 
 * File:   main.cpp
 * Author: Allan Ramos
 * Created on June 20, 2017, 9:08 PM
 * Purpose:  To determine and display the average of five variables
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
    float a, b, c, d, e, sum, avg; 
    a=28;
    b=32;
    c=37;
    d=24;
    e=33;
    sum = a + b + c + d + e;
    
    //Input Data
 
    //Process the Data
    avg = sum / 5;
    
    //Output the processed Data
    cout<<"We are given five values 28, 32, 37, 24, 33 "<<endl;
    cout<<"The sum of these values is "<<sum<<endl;
    cout<<"The average of this sum is "<<avg<<endl;
    
    //Exit Stage Right!
    return 0;
}