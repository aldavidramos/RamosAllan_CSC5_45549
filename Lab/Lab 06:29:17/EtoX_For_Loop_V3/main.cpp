/* 
 * File:   main.cpp
 * Author: Allan Ramos
 * Created on July 3, 2017, 12:37 PM
 * Purpose:  e^x term by term
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cmath>     //Math Library
#include <iomanip>   //Input/Output Manipulation (format library)
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float aprxEx, exactEx, x;
    
    //Initialize Variables
    x = 1;
    exactEx = exp(x);
    aprxEx = 1;
    
    
    //Calculate the next term in the series
    for(float counter = 1,term = 1,tol = 1e-6f;              //Initialization
              term > tol;                                    //Test - Stop
              term *= x / counter, aprxEx += term, counter++)  //Update - Step
    
    //Output the terms in the table
    cout<<"Exact e^x = "<<exactEx<<endl;
    cout<<"Approx e^x = "<<aprxEx<<endl;
   
    //Exit Stage Right!
    return 0;
}