/* 
 * File:   main.cpp
 * Author: Allan Ramos
 * Created on June 20, 2016, 6:51 PM
 * Purpose:  Midterm problem 3
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format Library
#include <string>    //String Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    string date,payee,acchld;
    float amnt;
    
    //Input Data
    cout<<"Writing a check."<<endl;
    cout<<"Please enter the date in this format, MM/DD/YY :"<<endl;
    getline(cin,date);
    cout<<"Please enter the name of the name of the payee :"<<endl;
    getline(cin,payee);
    cout<<"Please enter the name of the account holder :"<<endl;
    getline(cin,acchld);
    cout<<"Please enter the amount paid :"<<endl;
    cin>>amnt;
    
    
 
    //Process the Data
    
    //Output the processed Data
    
    cout<<endl<<endl;
    cout<<setw(35)<<left<<acchld<<endl;
    cout<<setw(35)<<left<<"STREET ADDRESS"<<endl;
    cout<<setw(35)<<left<<"CITY, STATE  ZIP"<<setw(20)<<right<<date<<endl;
    cout<<endl;
    cout<<setw(21)<<left<<"Pay to the order of: "<<setw(20)<<payee<<setw(7);
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<right<<"$"<<amnt<<endl;
    cout<<endl;
    cout<<"BANK OF CSC5"<<endl;
    cout<<endl;
    cout<<"FOR: GOTTA PAY THE RENT"<<setw(32)<<right<<acchld<<endl;
    
    //Exit Stage Right!
    return 0;
}