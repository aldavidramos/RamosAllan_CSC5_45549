/* 
 * File:   main.cpp
 * Author: Allan Ramos
 * Created on July 16, 2017, 6:51 PM
 * Purpose:  Determine future value from a savings account
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cmath>     //Math Library
#include <iomanip>   //Format Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const int CNVPERC=100;//Conversion to Percentage

//Function Prototypes
float fValue1(float,float,int);
float fValue2(float,float,int);
float fValue3(float,float,int);
float fValue4(float,float,int);

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float pv,   //Present Value in $'s
           i;   //Interest rate Percent/compounding period
    int    n;   //Number of compounding periods (yrs)
    
    //Input data - prompt for inputs
    cout<<"This is a Savings Account Program"<<endl;
    cout<<"Input Present Value in Dollars,  "<<endl;
    cout<<"Interest Rate in per cent / year, "<<endl;
    cout<<"Number of Compounding periods in years."<<endl;
    cin>>pv>>i>>n;
    
    //Map the inputs
    i/=CNVPERC;//Convert percentage interest to fraction
    
    //Output the inputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<endl;
    cout<<"The Present Value =  $"<<setw(8)<<pv<<endl;
    cout<<"The Interest Rate =   "<<setw(8)<<i*CNVPERC<<"%"<<endl;
    cout<<"The Number of Years = "<<setw(5)<<n<<endl;
    
    //Output the transformed data
    cout<<"Savings Function 1 -> Power       = $"
            <<fValue1(pv,i,n)<<endl;
    cout<<"Savings Function 2 -> Exp - Log   = $"
            <<fValue2(pv,i,n)<<endl;
    cout<<"Savings Function 3 -> for - loop  = $"
            <<fValue3(pv,i,n)<<endl;
    cout<<"Savings Function 4 -> Recursion   = $"
            <<fValue4(pv,i,n)<<endl;    
    
    //Exit stage right!
    return 0;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                     Future Value
//Inputs:
//   pVal ->    Present Value $'s
//   intRate -> Interest Rate as a fraction
//   nPds ->    Number of Compounding Periods (Yrs)
//Output:
//   Future Value -> Units of $'s
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
float fValue1(float pVal,float intRate,int nPds){
    return pVal*pow((1+intRate),nPds);
}

float fValue2(float pVal,float intRate,int nPds){
    return pVal*exp(nPds*log(1+intRate));
}

float fValue3(float pVal,float intRate,int nPds){
    float fv=pVal;
    for(int i=1;i<=nPds;i++){
        fv*=(1+intRate);
    }
    return fv;
}

float fValue4(float pVal,float intRate,int nPds){
    if(nPds<=0)return pVal;
    return fValue4(pVal,intRate,nPds-1)*(1+intRate);
}