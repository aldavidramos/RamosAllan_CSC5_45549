/* 
 * File:   main.cpp
 * Author: Allan Ramos
 * Created on June 20, 2017, 8:34 PM
 * Purpose:  To convert from square feet to acres
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants
const float LNDCONV = 43560; //Land conversion 1 acre = 43560 square feet

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float landFt = 391876; //We are given a tract of land of 391876 square feet
    float landAcr;
    
    //Input Data
 
    //Process the Data
    landAcr = landFt / LNDCONV;
    
    //Output the processed Data
    cout<<"A tract of land of 391876 square feet is equal to "<<landAcr<<" acres."<<endl;
    
    //Exit Stage Right!
    return 0;
}