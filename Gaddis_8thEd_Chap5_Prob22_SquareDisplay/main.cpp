/* 
 * File:   main.cpp
 * Author: Allan Ramos
 * Created on July 10, 2017, 8:56 PM
 * Purpose:  To create a square display
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
    int number;  //Amount of rows and columns to form the square display
    
    //Input Data
    cout<<"Enter a positive integer no greater than 15"<<endl;
    cin>>number;
    
    //Make sure the inputted data is within the given range
    if(number > 15){
        cout<<"The number is out of range, please enter a valid integer."<<endl;
    }
    else {
        for(int i= 1; i <= number; i++){
            for(int j = 1; j <= number; j++)
                cout<<"x";
            cout<<endl;
        }
    }
 
    //Process the Data
    
    //Output the processed Data
    
    //Exit Stage Right!
    return 0;
}