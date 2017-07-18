/* 
 * File:   main.cpp
 * Author: Allan Ramos
 * Created on July 12, 2017, 7:40 PM
 * Purpose:  Template
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format Library
#include <cmath>     //Math Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int i, j, n;  //Counters, number of terms in the series 
    float apxSin, exctSin, numrtr, denmtr, sign; //sin Function,Numerator, Denominator
    float x;      //Value of x
    apxSin = 0;
    
    //Input Data
    cout<<"sinx approximation."<<endl;
    cout<<"Input the value of x."<<endl;
    cin>>x;
    cout<<"Input the number of terms \"n\" to be used in the approximation"<<endl;
    cin>>n;
 
    //Process the Data
    //Begin for loop for numerator of series
    for(i = 0; i <= n; i++){
        numrtr = 1;
        for(j = 0; j < 2*i+1; j++){
            numrtr = numrtr * x;
        }
        //Begin loop for denominator of series
        denmtr = 1;
        for(j = 1; j <= 2*i+1; j++){
            denmtr = denmtr * j;
        }
        //Loop for alternating sign of series
        if(i % 2 == 0){
            sign = 1;
        } else{
            sign = -1;
        }
        //Adding of terms
        apxSin = apxSin + (numrtr / denmtr) * sign;
    }
    //Exact value of sin(x)
    exctSin = sin(x);
    
    //Output the processed Data
    cout<<fixed<<setprecision(9)<<showpoint;
    cout<<"Approx. of sinx = "<<apxSin<<endl;
    cout<<"Exact sinx      = "<<exctSin;
    
    //Exit Stage Right!
    return 0;
}