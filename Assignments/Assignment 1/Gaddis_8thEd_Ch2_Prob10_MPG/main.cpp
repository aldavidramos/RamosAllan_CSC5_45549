/* 
 * File:   main.cpp
 * Author: Allan Ramos
 * Created on June 20, 2017, 8:57 PM
 * Purpose:  To determine and display the miles per gallon of a vehicle
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
    float tank = 20; //20 gallon tank
    float twnMls = 23.5f; //Average of 23.5 mpg when driven in town
    float hwyMls = 28.9f; //Average of 28.9 mpg when driven in highway
    float mpgTwn; //Town mpg
    float mpgHwy; //Highway mpg
    
    //Input Data
 
    //Process the Data
    mpgTwn = tank * twnMls;
    mpgHwy = tank * hwyMls;
    
    //Output the processed Data
    cout<<"With one full 20 gallon tank of gas, "<<endl;
    cout<<"when driven in town, ";
    cout<<"the vehicle can travel a distance of "<<mpgTwn<<" miles."<<endl;
    cout<<"when driven in highway, ";
    cout<<"the vehicle can travel a distance of "<<mpgHwy<<" miles."<<endl;
    
    //Exit Stage Right!
    return 0;
}