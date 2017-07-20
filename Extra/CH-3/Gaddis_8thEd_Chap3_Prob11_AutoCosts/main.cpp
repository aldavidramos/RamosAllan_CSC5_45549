/* 
 * File:   main.cpp
 * Author: Allan Ramos
 * Created on June 29, 2017, 6:51 PM
 * Purpose:  Determine monthly automobile cost
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
    float lnPymt, insrnce, gas, oil, tires, mntnce; //Monthly expenses
    float mnthExp; //Total monthly expenses
    float annExp;  //Annual expenses

    //Input Data
    cout<<"This program will determine your monthly and annual auto expenses."<<endl;
    cout<<"Enter each expense in dollars."<<endl;
    cout<<"Enter your monthly loan payment expenses"<<endl;
    cin>>lnPymt;
    cout<<"Enter your monthly insurance expenses"<<endl;
    cin>>insrnce;
    cout<<"Enter your monthly gas expenses"<<endl;
    cin>>gas;
    cout<<"Enter your monthly oil expenses"<<endl;
    cin>>oil;
    cout<<"Enter your monthly tire expenses"<<endl;
    cin>>tires;
    cout<<"Enter your monthly maintenance expenses"<<endl;
    cin>>mntnce;
 
    //Process the Data
    mnthExp = lnPymt + insrnce + gas + oil + tires + mntnce; //Monthly expenses
    annExp = mnthExp * 12;   //12 months in a year
    
    //Output the processed Data
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"Your monthly auto expenses are $"<<mnthExp<<endl;
    cout<<"Your annual auto expenses are  $"<<annExp<<endl;
    
    //Exit Stage Right!
    return 0;
}