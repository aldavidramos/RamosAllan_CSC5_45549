/* 
 * File:   main.cpp
 * Author: Allan Ramos
 * Created on June 29, 2017, 6:51 PM
 * Purpose:  Calculate how many widgets are stacked on a pallet
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
    float widgtWt, palltWt, totWt; //Widget, pallet, and total weight (in lbs)
    int wigtAmt;                   //Amount of widgets on pallet
    
    //Initialize Variables
    widgtWt = 12.5f;

    //Input Data
    cout<<"This program will determine how many widgets are on a pallet."<<endl;
    cout<<"Enter the combined weight of the pallet and widgets."<<endl;
    cin>>totWt;
    cout<<"Enter the weight of a single pallet."<<endl;
    cin>>palltWt;
 
    //Process the Data
    wigtAmt = (totWt - palltWt) / widgtWt;
    
    //Output the processed Data
    cout<<"There are "<<wigtAmt<<" widgets stacked on the pallet."<<endl;
    
    //Exit Stage Right!
    return 0;
}