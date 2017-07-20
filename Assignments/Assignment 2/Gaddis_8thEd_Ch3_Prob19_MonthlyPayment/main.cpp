/* 
 * File:   main.cpp
 * Author: Allan Ramos
 * Created on June 27, 2017, 12:13 PM
 * Purpose:  Monthly payment calculator on a loan
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cmath>     //Math Library
#include <iomanip>   //Input/output manipulation
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare and Initialize Variables
    float intRate = 0.01f; //Interest rate per month
    float n = 36.0f;       //Number of compounding interest in months
    float loan = 10000.0f; //Loan amount in dollars
    float monPay;          //Monthly payment
 
    //Process the Data
    monPay = ((intRate * pow((1 + intRate), n)) / (pow((1 + intRate), n) - 1)) * loan;
    //monPay = static_cast<int> (monPay * 100)/100.0f;  //Not sure what this is for, supposably to convert to pennies then back
    
    //Output the processed Data
    cout<<"This program will determine your monthly payment on a loan"<<endl;
    cout<<setprecision(2)<<fixed;
    cout<<"Monthly Interest rate of" <<setw(13)<<intRate * 100<<"%"<<endl;
    cout<<"Number of payments: "<<setw(17)<<n<<endl;
    cout<<"Loan amount: "<<setw(16)<<"$"<<loan<<endl;
    cout<<"Your monthly payment will be: $"<<monPay<<endl;
    
    //Exit Stage Right!
    return 0;
}