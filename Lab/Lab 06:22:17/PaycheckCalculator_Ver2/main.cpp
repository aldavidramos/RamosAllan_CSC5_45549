/* 
 * File:   main.cpp
 * Author: Allan Ramos
 * Created on June 20, 2017, 6:51 PM
 * Purpose:  Template
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
    float payRte = 10; //Dollars per hour
    float hrsWkd;         //Hours worked
    float payChk;         //Total paycheck
    float ovrFact = 1.5f;        //Overtime factor
    float ovrTmPy;
    
    //Input Data
    cout<<"Enter the amount of hours worked"<<endl;
    cin>>hrsWkd;  //Input the amount of hours worked
 
    //Process the Data
    
    //Output the processed Data
    if (hrsWkd <=40){
        payChk = payRte * hrsWkd;  //Calculate paycheck
        cout<<"Your paycheck amounts to $"<<setprecision(2)<<fixed<<payChk<<endl; //Display paycheck amount
    }
    else {
        ovrTmPy = (hrsWkd - 40) * payRte * ovrFact;
        payChk = 40 * payRte + ovrTmPy;
        cout<<"You worked "<<hrsWkd-40<<" hours overtime"<<endl;
        cout<<"Your overtime pay amounts to $"<<setprecision(2)<<fixed<<ovrTmPy<<endl;
        cout<<"Your total paycheck amounts to $"<<setprecision(2)<<fixed<<payChk<<endl;
    }
    
    //Exit Stage Right!
    return 0;
}