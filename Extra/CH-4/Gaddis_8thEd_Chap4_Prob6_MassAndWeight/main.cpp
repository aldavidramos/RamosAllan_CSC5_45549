/* 
 * File:   main.cpp
 * Author: Allan Ramos
 * Created on July 3, 2017, 6:51 PM
 * Purpose:  Calculate mass and weight of an object
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants
const float WTCONV = 9.8f;  //Accel due to gravity in m/s^2 to convert to newtons

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float mass, weight, upLimit, loLimit;
    
    //Initialize Variables
    upLimit = 1000;  //1000 newtons is the weight limit
    loLimit = 10;

    //Input Data
    cout<<"This program will convert mass to weight."<<endl;
    cout<<"Enter the mass of the object in Kg's."<<endl;
    cin>>mass;
 
    //Process and Output the Data
    weight = mass * WTCONV;
    cout<<"The weight of the object is "<<weight<<" Newtons."<<endl;
    if(weight > upLimit){
        cout<<"The object is too heavy."<<endl;
    }else if(weight < loLimit){
        cout<<"The object is too light."<<endl;
    }else{
        cout<<"The weight of the object is within range."<<endl;
    }
    
    //Exit Stage Right!
    return 0;
}