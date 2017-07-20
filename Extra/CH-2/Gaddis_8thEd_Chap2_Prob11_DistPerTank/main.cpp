/* 
 * File:   main.cpp
 * Author: Allan Ramos
 * Created on June 25, 2017, 6:51 PM
 * Purpose:  Determine the distance per tank of gas
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
    int tnkSize;              //Size of tank in gallons
    float hwyMiles, twnMiles, //Highway mileage, town mileage in mpg
          hwyDist,twnDist;    //Highway distance, town distance 
    //Initialize Variables
    tnkSize = 20;
    hwyMiles = 28.9f;
    twnMiles = 23.5f;
    
    //Process the Data
    hwyDist = hwyMiles * tnkSize;
    twnDist = twnMiles * tnkSize;
    
    //Output the processed Data
    cout<<"A car with a 20 gallon gas tank that receives 28.9 mpg (highway)"<<endl;
    cout<<"and 23.5 mpg (town) can travel the following distances: "<<endl;
    cout<<hwyDist<<" Highway miles."<<endl;
    cout<<twnDist<<" Town miles. "<<endl;
    
    //Exit Stage Right!
    return 0;
}