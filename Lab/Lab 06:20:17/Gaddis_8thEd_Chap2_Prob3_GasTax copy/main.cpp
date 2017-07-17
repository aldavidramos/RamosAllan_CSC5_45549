/* 
 * File:   main.cpp
 * Author: Allan Ramos
 * Created on June 20, 2017, 1:35 PM
 * Purpose:  Gas Tax
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
    float ppGal = 2.75f; //$2.75/gallon for Regular
    float taxGal = 0.764f; //76.4 cents per gallon
    float nGal = 15; //Number of gallons for fill-up
    float totAmt; //Total amount tendered or purchase price in dollars
    float totTax; //Total tax paid on fill-up
    float prcTax; //Percentage taxed on purchase

    //Process the Data
    totAmt = nGal * ppGal;
    totTax = taxGal * nGal;
    prcTax = totTax / totAmt * 100;
    
    //Output the processed Data
    cout<<"Number of gallons for a fill-up "<<nGal<<endl;
    cout<<"Price per gallon paid: $"<<ppGal<<endl;
    cout<<"Tax paid per gallon: $"<<taxGal<<endl;
    cout<<"Tax composition = 18.4 cents Fed, 36 cents State "<<endl;
    cout<<"and 8% sales tax"<<endl;
    cout<<"Total amount paid to fill-up = $"<<totAmt<<endl;
    cout<<"Total amount of tax paid to fill-up = $"<<totTax<<endl;
    cout<<"Total taxes paid to fill-up = "<<prcTax<<"%"<<endl;
    
    //Exit Stage Right!
    return 0;
}