/* 
 * File:   main.cpp
 * Author: Allan Ramos
 * Created on June 20, 2017, 7:59 PM
 * Purpose:  To determine the rise in ocean levels in 5, 7 and 10 years
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare and Initialize Variables
    float ocnRise = 1.5f; //Yearly ocean rise in mm
    float yrFive;
    float yrSvn;
    float yrTen;
    
    //Input Data
 
    //Process the Data
    yrFive = ocnRise * 5;
    yrSvn = ocnRise * 7;
    yrTen = ocnRise * 10;
    
    //Output the processed Data
    cout<<"The ocean's level is currently rising at 1.5mm per year"<<endl;
    cout<<"In five years the ocean's level will have risen by "<<yrFive<<"mm"<<endl;
    cout<<"In seven years the ocean's level will have risen by "<<yrSvn<<"mm"<<endl;
    cout<<"In ten years the ocean's level will have risen by "<<yrTen<<"mm"<<endl;
    
    //Exit Stage Right!
    return 0;
}