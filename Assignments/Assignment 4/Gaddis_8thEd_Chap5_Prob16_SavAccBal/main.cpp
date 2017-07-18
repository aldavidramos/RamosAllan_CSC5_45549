/* 
 * File:   main.cpp
 * Author: Allan Ramos
 * Created on July 10, 2017, 10:07 PM
 * Purpose:  To calculate a balance of a savings account
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float intRate, strtBal, months, dpstAmt, //All money is in dollars
            wdrwAmt, mnthInt, mult;
    
    //Input Data
    cout<<"This program will calculate the balance of a savings account";
    cout<<" at the end of a period of time."<<endl;
    cout<<"Enter your annual interest rate."<<endl;
    cin>>intRate;
    cout<<"Enter your starting balance in dollars."<<endl;
    cin>>strtBal;
    cout<<"Enter the number of months since you opened the account."<<endl;
    cin>>months;
 
    //Process the Data
    //for loop to account for each month's deposits and expenditures
    for(int i = 1; i <= months; i++){
        //Deposit for said month
        cout<<"Enter the amount deposited for month "<<i<<endl;
        cin>>dpstAmt;
        //Calculate the new balance
        strtBal += dpstAmt;
        //Expenditures/withdrawals
        cout<<"Enter how much was withdrawn from your account in month "<<i<<endl;
        cin>>wdrwAmt;
        //Update the balance in the account
        strtBal -= wdrwAmt;
        mnthInt = intRate / 12;
        mult = (mnthInt * strtBal) / 100;
        strtBal += mult;
        
        //Output the processed data
        cout<<fixed<<setprecision(2)<<showpoint;
        cout<<"Your ending balance is: $"<<strtBal<<endl;
        cout<<"Your total amount deposited is: $"<<dpstAmt<<endl;
        cout<<"Your total amount withdrawn is: $"<<wdrwAmt<<endl;
        cout<<"Your total interest earned is: "<<mnthInt<<endl;
        
    }

    
    //Output the processed Data
    
    //Exit Stage Right!
    return 0;
}