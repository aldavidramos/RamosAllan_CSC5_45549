/* 
 * File:   main.cpp
 * Author: Allan Ramos
 * Created on July 1, 2017, 8:56 PM
 * Purpose:  To use the conditional operator to determine which number is larger
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int num1, num2;
    char size;
    
    //Input Data
    cout<<"This program will compare two numbers to see which is larger."<<endl;
    cout<<"Enter the first number: "<<endl;
    cin>>num1;
    cout<<"Enter the second number: "<<endl;
    cin>>num2;
 
    //Process the Data
    num1 > num2 ? cout<<"The first number is larger.":
        cout<<"The second number is larger."<<endl;
    
    
    //Output the processed Data
    
    //Exit Stage Right!
    return 0;
}