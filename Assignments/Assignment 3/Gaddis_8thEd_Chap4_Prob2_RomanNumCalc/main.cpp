/* 
 * File:   main.cpp
 * Author: Allan Ramos
 * Created on July 1, 2017, 9:13 PM
 * Purpose: To use a switch statement to convert from Arabic numerals to Roman numerals
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
    int number;   //Number to be converted
    
    //Input Data
    cout<<"This program will convert Arabic numerals to Roman numerals."<<endl;
    cout<<"Enter a number from 1 to 10."<<endl;
    cin>>number;
 
    //Process the Data
    if (number < 1 || number > 10){
        cout<<"Invalid range, run the program again";
        cout<<" and enter a number from 1 to 10"<<endl;
    }
        
    //Output the processed Data
    switch (number)
    {
        case 1:  cout<<number<<" converted to Roman numerals is I"<<endl;
        break;
        case 2:  cout<<number<<" converted to Roman numerals is II"<<endl;
        break;
        case 3:  cout<<number<<" converted to Roman numerals is III"<<endl;
        break;
        case 4:  cout<<number<<" converted to Roman numerals is IV"<<endl;
        break;
        case 5:  cout<<number<<" converted to Roman numerals is V"<<endl;
        break;
        case 6:  cout<<number<<" converted to Roman numerals is VI"<<endl;
        break;
        case 7:  cout<<number<<" converted to Roman numerals is VII"<<endl;
        break;
        case 8:  cout<<number<<" converted to Roman numerals is VIII"<<endl;
        break;
        case 9:  cout<<number<<" converted to Roman numerals is IX"<<endl;
        break;
        case 10: cout<<number<<" converted to Roman numerals is X"<<endl;
        break;
    }
    
    //Exit Stage Right!
    return 0;
}