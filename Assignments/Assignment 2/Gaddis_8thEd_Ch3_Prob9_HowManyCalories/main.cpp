/* 
 * File:   main.cpp
 * Author: Allan Ramos
 * Created on June 26, 2017, 6:44 PM
 * Purpose:  To determine the amount of calories consumed
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
    float cookie;        //Amount of cookies eaten
    float calIng;        //Amount of calories consumed
    float calCkie = 100; //Since 1 serving is 3 cookies and amounts to 300 calories then 1 cookie amounts to 100 calories.
    
    //Input Data
    cout<<"How many cookies did you eat?"<<endl;
    cin>>cookie;
 
    //Process the Data
    calIng = cookie * calCkie;
    
    //Output the processed Data
    cout<<"Since you ate "<<cookie<<" cookies";
    cout<<" you have consumed "<<calIng<<" calories"<<endl;
    
    //Exit Stage Right!
    return 0;
}