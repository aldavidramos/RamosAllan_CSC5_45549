/* 
 * File:   main.cpp
 * Author: Allan Ramos
 * Created on June 20, 2017, 7:06 PM
 * Purpose:  To calculate the annual pay of an employee
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
    float payAmt = 2200.0;
    float payPer = 26;
    float annPay;
    
    //Input Data
 
    //Process the Data
    annPay = payAmt * payPer;
    
    //Output the processed Data
    cout<<"An employee gets paid $"<<payAmt<<" per pay period."<<endl;
    cout<<"For 26 pay periods a year, the employee ";
    cout<<"will receive an annual pay of $"<<annPay<<endl;
    
    //Exit Stage Right!
    return 0;
}