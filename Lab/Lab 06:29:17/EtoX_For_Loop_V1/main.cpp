/* 
 * File:   main.cpp
 * Author: Allan Ramos
 * Created on July 3, 2017, 12:20 PM
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
    
    //Output the terms in the table
    cout<<"Exact e^x = "<<exactEx<<endl;
    cout<<"Counter  Approx e^x  Difference"<<endl;
    cout<<fixed<<setprecision(0);
    cout<<setw(4)<<static_cast<int>(0);
    cout<<fixed<<setprecision(6)<<showpoint;
    cout<<setw(15)<<aprxEx<<setw(12)<<exactEx-aprxEx<<endl;
    
    //Calculate the next term in the series
    for(float counter = 1,term = 1,tol = 1e-6f; //Declaration/Initialization - Start
              term > tol;                       //Test - Stop
              counter++){                       //Update - Step
        term *= x / counter;
        aprxEx += term;
    
        //Output the next term
        cout<<fixed<<setprecision(0);
        cout<<setw(4)<<static_cast<int>(counter);
        cout<<fixed<<setprecision(6)<<showpoint;
        cout<<setw(15)<<aprxEx<<setw(12)<<exactEx-aprxEx<<endl;
    }
   
    //Exit Stage Right!
    return 0;
}