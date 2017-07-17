/* 
 * File:   main.cpp
 * Author: Allan Ramos
 * Created on June 20, 2016, 1:05 PM
 * Purpose:  Big Characters
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
    char c;
    
    //Initialize by inputting from command line
    cout<<"What character would you like to use ";
    cout<<"to make a Big Letter C"<<endl;
    cin>>c;
    
    //Output the processed Data
    cout<<endl;
    cout<<"  "<<c<<c<<c<<endl;
    cout<<" "<<c<<"   "<<c<<endl;
    cout<<" "<<c<<endl;
    cout<<" "<<c<<endl;
    cout<<" "<<c<<endl;
    cout<<" "<<c<<"   "<<c<<endl;
    cout<<"  "<<c<<c<<c<<endl;
    
    
    //Exit Stage Right!
    return 0;
}