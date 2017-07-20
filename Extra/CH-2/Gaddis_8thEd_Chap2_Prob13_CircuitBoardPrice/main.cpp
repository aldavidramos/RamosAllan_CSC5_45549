/* 
 * File:   main.cpp
 * Author: Allan Ramos
 * Created on June 25, 2017, 6:51 PM
 * Purpose:  To calculate the selling price of a circuit board
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants
const float PERCONV = 0.35f; //35% Profit

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float whlSale = 14.95;
    float retail;
 
    //Process the Data
    retail = whlSale * PERCONV + whlSale;  //Calculate the retail price
    
    //Output the processed Data
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"The price of a circuit board is $"<<whlSale<<endl;
    cout<<"The company sells is at a 35% profit"<<endl;
    cout<<"The retail price is $"<<retail<<endl;
    
    //Exit Stage Right!
    return 0;
}