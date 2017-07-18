/* 
 * File:   main.cpp
 * Author: Allan Ramos
 * Created on July 17, 2017, 6:04 PM
 * Purpose:  Table to convert from Fahrenheit to Celsius
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes
float celsius(float);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Display table, output original and converted data
    cout<<"The formula to convert degrees Fahrenheit to Celsius is C = (5/9)*(F-32)"<<endl;
    cout<<"Listed are temperatures and their respective"<<endl;
    cout<<"conversions from 0-20 degrees Fahrenheit to Celsius"<<endl<<endl;
    cout<<"  Fahrenheit        Celsius"<<endl;
    cout<<"------------------------------"<<endl;
    cout<<fixed<<showpoint<<setprecision(4);
    //for loop for temps from 0 to 20 deg.
    for (int i = 0; i <= 20; i++){
            cout<<"      "<<setw(2)<<i;
            cout<<"          "<<setw(9)<<right<<celsius(i)<<endl; //Introduce conversion function
    }
    cout<<endl;
    
    //Exit Stage Right!
    return 0;
}

//Function to convert from fahrenheit to celsius 
float celsius(float i)
{
    float degCel;
    degCel = (5.0f/9.0f) * (i - 32);
    return degCel;
}