/* 
 * File:   main.cpp
 * Author: Allan Ramos
 * Created on July 11, 2017, 12:35 PM
 * Purpose:  Retirement calculator
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
float retire(float, float, int, float);


//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float     pv,    //Present value in dollars
               i,    //Investment Rate -> Municipal Bonds
          salary,    //Yearly Salary
           yrDep,    //Yearly Deposit Amount
         savReqd;    //Savings Required to Retire
    
    //Input Data - prompt for inputs
    cout<<"This is a Retirements account program"<<endl;
    cout<<"Input present value of savings dollars, "<<endl;
    cout<<"Investment rate in percent / year, "<<endl;
    cout<<"Expected salary at peak earnings,"<<endl;
    cout<<"Percentage salary saved / year for retirement"<<endl;
    cin>>pv>>i>>salary>>yrDep;
    
    //Map the Inputs
    i /= CNVPERC;                     //Convert percentage interest to fraction
    yrDep = salary * yrDep / CNVPERC; //Convert to dollars saved per year
    savReqd = salary / i;
    
    //Output the inputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<endl;
    cout<<"The present value   = $"<<setw(8)<<pv<<endl;
    cout<<"The investment rate = "<<setw(8)<<i * CNVPERC<<"%"<<endl;
    cout<<"The expected salary = $"<<setw(8)<<salary<<endl;
    cout<<"The yearly deposit  = $"<<setw(8)<<yrDep<<endl;
    cout<<"Savings required    = $"<<setw(8)<<savReqd<<endl;
    
    //Output the processed Data
    for(float year = 1, savings; savings < savReqd; year++){
        savings = retire(pv, i, year, yrDep);
        cout<<"Year "<<year<<" = $"<<savings<<endl;
    }
    
    //Exit Stage Right!
    return 0;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                     Retirement Savings
//Inputs:
//   pVal ->    Present Value $'s
//   intRate -> Interest Rate as a fraction
//   nPds ->    Number of Compounding Periods (Yrs)
//   yDep ->    Yearly Deposit
//Output:
//   Future Value -> Units of $'s
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890


float retire(float pVal, float intRate, int nPds, float yDep){
    float fv = pVal;
    for(int i=1; i<=nPds;i++){
        fv *= (1+intRate); 
        fv += yDep;
    }
    return fv;
}

