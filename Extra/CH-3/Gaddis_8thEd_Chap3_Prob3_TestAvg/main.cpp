/* 
 * File:   main.cpp
 * Author: Allan Ramos
 * Created on June 29, 2017, 6:51 PM
 * Purpose:  Find the average out of five scores
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
    float scr1, scr2, scr3, scr4, scr5; //Test scores
    float scrAvg;

    //Input Data
    cout<<"This program will get the average of 5 test scores."<<endl;
    cout<<"Please input five test scores on a scale of 0 - 100 ";
    cout<<"separated by a space: "<<endl;
    cin>>scr1>>scr2>>scr3>>scr4>>scr5;
 
    //Process the Data
    scrAvg = (scr1 + scr2 + scr3 + scr4 + scr5) / 5; //Calculate the average
    
    //Output the processed Data
    cout<<fixed<<showpoint<<setprecision(1);
    cout<<"The average of the inputted test scores is "<<scrAvg<<endl;
    
    //Exit Stage Right!
    return 0;
}