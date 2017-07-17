/* 
 * File:   main.cpp
 * Author: Allan Ramos
 * Created on July 3, 2017, 12:15 PM
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
    float aprxEx, exactEx, x, term, tol;
    char counter;
    
    //Initialize Variables
    x = 1;
    exactEx = exp(x);
    aprxEx = 1;
    counter = 0;
    term = 1;
    tol = 1e-6f;
    
    //Output the terms in the table
    cout<<"Exact e^x = "<<exactEx<<endl;
    cout<<"Counter  Approx e^x  Difference"<<endl;
    cout<<fixed<<setprecision(0);
    cout<<setw(4)<<static_cast<int>(counter);
    cout<<fixed<<setprecision(6)<<showpoint;
    cout<<setw(15)<<aprxEx<<setw(12)<<exactEx-aprxEx<<endl;
    
    //Calculate the next term in the series
    while(term > tol){
        counter += 1;
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