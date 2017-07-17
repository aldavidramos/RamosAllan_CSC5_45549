/* 
 * File:   main.cpp
 * Author: Allan Ramos
 * Created on June 20, 2017, 8:09 PM
 * Purpose:  To breakdown a customer's purchase
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
    float prcOne=15.95f; //The price of five items in dollars
    float prcTwo=24.95f;
    float prcThree=6.95f;
    float prcFour=12.95f;
    float prcFive=3.95f;
    float subTot; //Subtotal
    float slsTax; //Sales tax on the subtotal 7%
    float purTot; //Total sale amount
    
    //Input Data
 
    //Process the Data
    subTot = prcOne + prcTwo + prcThree + prcFour + prcFive;
    slsTax = subTot * 0.07;
    purTot = subTot + slsTax;
    
    //Output the processed Data
    cout<<"The price of the first item is $"<<prcOne<<endl;
    cout<<"The price of the second item is $"<<prcTwo<<endl;
    cout<<"The price of the third item is $"<<prcThree<<endl;
    cout<<"The price of the fourth item is $"<<prcFour<<endl;
    cout<<"The price of the fifth item is $"<<prcFive<<endl;
    cout<<"The subtotal amounts to $"<<subTot<<endl;
    cout<<"The sales tax for this purchase is $"<<slsTax<<endl;
    cout<<"The total amounts to $"<<purTot<<endl;
    
    //Exit Stage Right!
    return 0;
}