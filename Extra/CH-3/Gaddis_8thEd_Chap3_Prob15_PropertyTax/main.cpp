/* 
 * File:   main.cpp
 * Author: Allan Ramos
 * Created on June 29, 2017, 6:51 PM
 * Purpose:  To determine the property tax collected by a county
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants
const float ASVLCNV = 0.60f;   //Assessment value conversion (60%)
const float PRTXCNV = 0.0075f; //Property tax (75 cents for $100 or 0.0075)

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float actVal, asmtVal, prtyTax; //Actual value, assessment value, property tax

    //Input Data
    cout<<"This program will determine the assessment value and property tax ";
    cout<<"for the actual value of a property."<<endl;
    cout<<"Enter the actual value in dollars of the desired property."<<endl;
    cin>>actVal;
 
    //Process the Data
    asmtVal = actVal * ASVLCNV;
    prtyTax = asmtVal * PRTXCNV;
    
    //Output the processed Data
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"For the actual value of              $"<<actVal<<endl;
    cout<<"The assessment value amounts to      $"<<asmtVal<<endl;
    cout<<"For which there is a property tax of $"<<prtyTax<<endl;
    
    //Exit Stage Right!
    return 0;
}