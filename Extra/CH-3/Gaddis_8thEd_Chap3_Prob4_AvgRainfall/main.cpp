/* 
 * File:   main.cpp
 * Author: Allan Ramos
 * Created on June 29, 2017, 6:51 PM
 * Purpose:  Calculate the avg rainfall for 3 months
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <string>    //String Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    string month1, month2, month3;            //The months to be inputted
    float rnFall1, rnFall2, rnFall3, avgFall; //Rain fall in inches
    

    //Input Data
    cout<<"This program will determine the average rainfall for three months."<<endl;
    cout<<"Enter the first month: "<<endl;
    cin>>month1;
    cout<<"Enter the amount of rain in inches for this month: "<<endl;
    cin>>rnFall1;
    cout<<"Enter the second month: "<<endl;
    cin>>month2;
    cout<<"Enter the amount of rain in inches for this month: "<<endl;
    cin>>rnFall2;
    cout<<"Enter the third month: "<<endl;
    cin>>month3;
    cout<<"Enter the amount of rain in inches for this month: "<<endl;
    cin>>rnFall3;
 
    //Process the Data
    avgFall = (rnFall1 + rnFall2 + rnFall3) / 3;
    
    //Output the processed Data
    cout<<"The average rainfall for "<<month1<<", "<<month2<<", "<<month3;
    cout<<" is "<<avgFall<<" inches."<<endl;
    
    //Exit Stage Right!
    return 0;
}