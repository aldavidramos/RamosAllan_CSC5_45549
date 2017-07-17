/* 
 * File:   main.cpp
 * Author: Allan Ramos
 * Created on June 20, 2017, 6:40 PM
 * Purpose:  To compute the tax and bill from a restaurant charge
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare and initialize Variables
    float mlChrg = 88.67f; //The price of the meal prior to tax and tip is $88.67
    float mlTax = 0.0675f; //6.75% sales tax
    float mlTip = 0.20f;   //20% tip (after adding tax)
    float mlTot;           //Total meal cost prior to tip
    float totSpnt;         //Total amount spent
    
    //Input Data
 
    //Process the Data
    mlTot = mlChrg * mlTax + mlChrg;
    totSpnt = mlTot * mlTip + mlTot;
    
    //Output the processed Data
    cout<<"For a meal priced at $88.67 "<<endl;
    cout<<"a 6.75% sales tax is $"<<mlTax * mlChrg<<endl;
    cout<<"the meal cost is $"<<mlTot<<endl;
    cout<<"a 20% tip after tax is $"<<mlTot * mlTip<<endl;
    cout<<"the total cost is $"<<totSpnt<<endl;
    
    //Exit Stage Right!
    return 0;
}