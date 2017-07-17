/* 
 * File:   main.cpp
 * Author: Allan Ramos
 * Created on July 10, 2017, 12:11 PM
 * Purpose:  Example function implementation
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cmath>     //Math Library
#include <iomanip>   //Formatting Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants
const int CNVPERC = 100;  //Conversion to percentage

//Function Prototypes
float fValue1(float, float, int);           //Power
float fValue2(float, float, int);           //Exponential-log
float fValue3(float, float, int);           //For-Loop
float fValue4(float, float, int);           //Recursion
int   fValue5(float, float, int, float&);   //Pass by Reference, Also Static Variable
float fValue1(float, float, float);         //Power Overridden Using float Years
float fValue6(float, float, int = 12);      //Power Defaulted Years


//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float pv,    //Present value in dollars
           i;    //Interest rate percent/compounding period
    int    n;    //Number of compounding periods (yrs)
    
    //Input Data - prompt for inputs
    cout<<"This is a savings account program"<<endl;
    cout<<"Input present value in dollars, "<<endl;
    cout<<"Interest rate in percent / year, "<<endl;
    cout<<"Number of compounding periods in years."<<endl;
    cin>>pv>>i>>n;
    
    //Map the Inputs
    i /= CNVPERC;   //Convert percentage interest to fraction
    
    //Output the inputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<endl;
    cout<<"The present value = $"<<setw(8)<<pv<<endl;
    cout<<"The interest rate = "<<setw(8)<<i * CNVPERC<<"%"<<endl;
    cout<<"The number of years = "<<setw(7)<<n<<endl;
    
    //Output the processed Data
    cout<<"Savings Function 1 -> Power        = $"
            <<fValue1(pv,i,n)<<endl;
    cout<<"Savings Function 1 -> Power float  = $"
            <<fValue1(pv,i,static_cast<float>(n))<<endl;
    cout<<"Savings Function 2 -> Exp - log    = $"
            <<fValue2(pv,i,n)<<endl;
    cout<<"Savings Function 3 -> for loop     = $"
            <<fValue3(pv,i,n)<<endl;
    cout<<"Savings Function 4 -> Recursion    = $"
            <<fValue4(pv,i,n)<<endl;
    float fv;
    for(int j = 1; j <= 5; j++){
        cout<<"Number of Times Function 5 called = "<<fValue5(pv, i, n, fv)<<endl;
    }
    cout<<"Savings Function 5 -> Reference/Static = $"
            <<fv<<endl;
    cout<<"Savings Function 6 -> Defaulted n=12   = $"
            <<fValue6(pv,i,n)<<endl;
    cout<<"Savings Function 6 -> Defaulted n=12   = $"
            <<fValue6(pv,i)<<endl;
    
    //Exit Stage Right!
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
//   nTimes -> Number of time the function was called   
//   Future Value -> Units of $'s
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
int fValue5(float pVal,float intRate,int nPds, float &fv){
    //static variable declaration for the count
    static int nTimes = 0;
    
    //Calculate the future value
    fv = pVal * pow((1+intRate),nPds);
    
    //Return the count
    return ++nTimes;
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
float fValue6(float pVal,float intRate,int nPds){
    return pVal*pow((1+intRate),nPds);
}

float fValue1(float pVal,float intRate,int nPds){
    return pVal*pow((1+intRate),nPds);
}

float fValue1(float pVal,float intRate,float nPds){
    return pVal*pow((1+intRate),nPds);
}

float fValue2(float pVal, float intRate, int nPds){
    return pVal * exp(nPds * log(1 + intRate));
}

float fValue3(float pVal, float intRate, int nPds){
    float fv = pVal;
    for(int i=1; i<=nPds;i++){
        fv *= (1+intRate);   
    }
    return fv;
}

float fValue4(float pVal, float intRate, int nPds){
    if(nPds <= 0)return pVal;
    return fValue4(pVal, intRate, nPds - 1) * (1+intRate);
}