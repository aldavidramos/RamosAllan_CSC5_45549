/* 
 * File:   main.cpp
 * Author: Allan Ramos
 * Created on July 3, 2017, 6:51 PM
 * Purpose:  Determine the result of mixing colors
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <string>    //String Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    string a, b;     //These are the colors that will be mixed

    //Input Data
    cout<<"Enter the names of two primary colors to be mixed."<<endl;
    cout<<"Enter the names in lower case letters."<<endl;
    cin>>a>>b;
 
    //Process the Data
    if((a == "red" && b =="blue")||(b == "red" && a =="blue")){
        cout<<"The resulting secondary color is purple."<<endl;
    }else if((a == "red" && b =="yellow")||(b == "red" && a =="yellow")){
        cout<<"The resulting secondary color is orange"<<endl;
    }else if((a == "blue" && b =="yellow")||(b == "blue." && a =="yellow")){
        cout<<"The resulting secondary color is green."<<endl;
    }else{
        cout<<"Invalid entry, your input needs to be a primary color";
        cout<<" (red, blue, yellow)"<<endl;
    }
    
    //Output the processed Data
    
    //Exit Stage Right!
    return 0;
}