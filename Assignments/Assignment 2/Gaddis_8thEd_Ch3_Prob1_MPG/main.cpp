/* 
 * File:   main.cpp
 * Author: Allan Ramos
 * Created on June 26, 2017, 12:29 PM
 * Purpose:  To determine MPG of a car
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
    float galCap;  //Capacity of gas tank in gallons
    float mlsDriv; //Number of miles driven from a full tank of gas
    float mpg;     //Miles per gallon
    
    //Input Data
    cout<<"This program will determine the miles per gallon of a given vehicle."<<endl;
    cout<<"Please enter the capacity of the car's gas tank in gallons"<<endl;
    cin>>galCap;
    cout<<"Now enter the number of miles driven from a full tank of gas."<<endl;
    cin>>mlsDriv;
 
    //Process the Data
    mpg = mlsDriv / galCap;
    
    //Output the processed Data
    cout<<"The given vehicle is capable of "<<mpg<<" MPG."<<endl;
    
    //Exit Stage Right!
    return 0;
}