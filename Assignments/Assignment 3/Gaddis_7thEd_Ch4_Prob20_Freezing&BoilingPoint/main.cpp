/* 
 * File:   main.cpp
 * Author: Allan Ramos
 * Created on July 1, 2017, 6:51 PM
 * Purpose:  To determine which elements freeze or boil
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
    float temp; //Temperature input by user
    
    //Input Data
    cout<<"This program will determine whether certain substances will freeze";
    cout<<" or boil at a given temperature."<<endl;
    cout<<"Please enter a temperature in degrees fahrenheit."<<endl;
    cin>>temp;
 
    //Process and Output the Data
    cout<<"These substances will freeze at the given temperature:"<<endl;
    if(temp<=-173)
        cout<<"Ethyl alcohol"<<endl;
    if(temp<=-38)
        cout<<"Mercury"<<endl;
    if(temp<=-362)
        cout<<"Oxygen"<<endl;
    if(temp<=32)
        cout<<"Water"<<endl;
    cout<<"These substances will boil at the given temperature:"<<endl;
    if(temp>=172)
        cout<<"Ethyl alcohol"<<endl;
    if(temp>=676)
        cout<<"Mercury"<<endl;
    if(temp>=-306)
        cout<<"Oxygen"<<endl;
    if(temp>=212)
        cout<<"Water"<<endl;

    
    //Exit Stage Right!
    return 0;
}