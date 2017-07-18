/* 
 * File:   main.cpp
 * Author: Allan Ramos
 * Created on July 1, 2017, 6:51 PM
 * Purpose:  Determine the distance an object falls  in freefall
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format Library
#include <cmath>     //Math Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants
const float GRAVITY = 9.8; //Acceleration due to grav. in m/s^2

// Function prototypes
float fallingDistance(int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    //Table to display distances and times, output the data
    cout<<"An object in freefall falls a distance d=(1/2)gt^2"<<endl;
    cout<<"The distance an object falls due to"<<endl;
    cout<<"gravity increases with each second."<<endl<<endl;
    cout<<"    Time         Distance"<<endl;
    cout<<"(seconds)        (meters)"<<endl;
    cout<<"---------------------------"<<endl;
    cout<<fixed<<showpoint<<setprecision(2);
    //for loop for each passing second
    for(int i = 1; i <= 10; i++){
        cout<<"    "<<setw(3)<<i<<"           ";
        cout<<setw(6)<<right<<fallingDistance(i)<<endl; //Introduce the function for distance
    }
    cout<<endl;
    
    //Exit Stage Right!
    return 0;
}

float fallingDistance(int i)
{
    float dist = 0.5f * GRAVITY * pow(i, 2); //Equation for freefall due to gravity
	return dist;
}