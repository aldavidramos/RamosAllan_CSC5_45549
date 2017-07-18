/* 
 * File:   main.cpp
 * Author: Allan Ramos
 * Created on July 1, 2017, 6:51 PM
 * Purpose:  Template
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes
void divide (float, float);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float num1, num2;

    //Input Data
    cout<<"Enter two numbers, the first one will be divided by the second"<<endl;
    cin>>num1>>num2;
    divide(num1, num2);

    //Process the Data
    
    //Output the processed Data
    
    //Exit Stage Right!
    return 0;
}

void divide (float arg1, float arg2){
    if (arg2 == 0.0f){
        cout<<"Can't divide by zero"<<endl;
        return;
    }
    cout<<"The quotient is "<<(arg1 / arg2)<<endl;
}