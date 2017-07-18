/* 
 * File:   main.cpp
 * Author: Allan Ramos
 * Created on July 16, 2017, 6:51 PM
 * Purpose:  To calculate the markup on a wholesale price of an item
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes
void calcRet(float, float);  //Function to calculate retail price

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float wholsle, cost, markup;

    //Input Data
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"Enter the wholesale price in dollars of the desired item :"<<endl;
    cin>>wholsle;
    cout<<"Enter the markup percentage of the item: "<<endl;
    cin>>markup;
    if(wholsle < 0 || markup < 0){
        cout<<"Input a positive number for both the wholesale price and the markup"<<endl;
    }
    else{
    calcRet(wholsle, markup);
    }
 
    //Process the Data
    
    //Output the processed Data
    
    //Exit Stage Right!
    return 0;
}

void calcRet(float retail, float perc)
{
    perc = perc / 100.0f;
    retail += retail * perc;
    cout<<"The retail price for the item is: $"<<retail<<endl;
}