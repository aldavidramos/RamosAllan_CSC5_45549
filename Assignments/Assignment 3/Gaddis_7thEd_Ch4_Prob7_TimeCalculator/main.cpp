/* 
 * File:   main.cpp
 * Author: Allan Ramos
 * Created on July 1, 2017, 6:51 PM
 * Purpose:  To determine time from an input of seconds
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
    float secs,mins,hrs,days;
    
    //Input Data
    cout<<"This program is designed to calculate time from seconds."<<endl;
    cout<<"Please enter the number of seconds."<<endl;
    cin>>secs;
 
    //Process the Data
    cout<<setprecision(2)<<fixed;
    if(secs>=86400&&secs==172799){
        cout<<"The number of seconds you entered = "<<secs/86400<<" day."<<endl;
    }
    else if(secs>=172800){
        cout<<"The number of seconds you entered = "<<secs/86400<<" days."<<endl;
    }
    else if(secs>=3600){
        cout<<"The number of seconds you entered = "<<secs/3600<<" hours."<<endl;
    }
    else if(secs>=60){
        cout<<"The number of seconds you entered = "<<secs/60<<" minutes."<<endl;
    }
    else
        cout<<"You entered "<<secs<<" seconds."<<endl;
    
    //Exit Stage Right!
    return 0;
}