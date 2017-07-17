/* 
 * File:   main.cpp
 * Author: Allan Ramos
 * Created on June 22, 2017, 12:48 PM
 * Purpose:  To calculate a paycheck based on a fixed pay rate
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare and Initialize Variables
    float payRte = 10.50f; //Dollars per hour
    float hrsWkd;          //Hours worked
    float payChk;          //Total paycheck
    
    //Input Data
    cout<<"Enter the amount of hours worked"<<endl;
    cin>>hrsWkd;  //Input the amount of hours worked
 
    //Process the Data
    payChk = payRte * hrsWkd;  //Calculate paycheck
    
    //Output the processed Data
    cout<<"Your paycheck amounts to $"<<setprecision(2)<<fixed<<payChk<<endl; //Display paycheck amount
    
    //Exit Stage Right!
    return 0;
}