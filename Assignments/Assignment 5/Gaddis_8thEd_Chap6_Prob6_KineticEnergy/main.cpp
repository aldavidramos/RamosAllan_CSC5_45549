/* 
 * File:   main.cpp
 * Author: Allan Ramos
 * Created on July 17, 2017, 5:34 PM
 * Purpose:  To determine the Kinetic Energy of an object
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes
float kinErgy (float, float);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float mass, vel;  //Mass (Kg's), velocity (m/s)

    //Input Data
    cout<<"To determine the Kinetic Energy of an object,"<<endl;
    cout<<"enter the mass of the object: "<<endl;
    cin>>mass;
    cout<<"Enter the velocity of the object: "<<endl;
    cin>>vel;
    
    //Output the processed Data
    cout<<"With the given parameters, the obect has a kinetic energy of ";
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<kinErgy(mass, vel)<<" joules."<<endl;   
    
    //Exit Stage Right!
    return 0;
}

//Function to determine Kinetic Energy of the object
float kinErgy (float mass, float vel){
    float ke;
    ke = (0.5f) * mass * vel * vel; //Kinetic Energy formula
    return ke;
}