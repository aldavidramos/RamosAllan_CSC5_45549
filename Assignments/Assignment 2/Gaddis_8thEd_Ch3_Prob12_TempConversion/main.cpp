/* 
 * File:   main.cpp
 * Author: Allan Ramos
 * Created on June 27, 2017, 1:25 PM
 * Purpose:  temperature conversion from Farenheit to celsius
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constant

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float degCel;   //Degrees Celsius
    float degFar;   //Degrees Farenheit
    
    //Input Data
    cout<<"How many degrees Farenheit?"<<endl;
    cin>>degFar;
 
    //Process the Data
    degCel = (5.0f / 9.0f) * (degFar - 32); //Conversion to celsius
    degFar = (9.0f / 5.0f) * degCel + 32;   //Conversion to farenheit
    
    //Output the processed Data
    cout<<"Degrees celsius: "<<degCel<<endl;
    cout<<"Degrees Farenheit: "<<degFar<<endl;
    
    //Exit Stage Right!
    return 0;
}