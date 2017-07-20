/* 
 * File:   main.cpp
 * Author: Allan Ramos
 * Created on June 25, 2017, 6:51 PM
 * Purpose:  Display information on stock and commission
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare and initialize Variables
    int   shares = 750;          //Amount of shares held
    float shrPrc = 35.0f,        //Price per share of stock in dollars
          perCom = 0.02f;        //2% commission paid to broker
    int stock, commiss, totPaid;
 
    //Process the Data
    stock = shares * shrPrc;    //Price paid for shares
    commiss = stock * perCom;   //Commission paid
    totPaid = stock + commiss;  //Total amount paid
    
    //Output the processed Data
    cout<<"The price of the purchased stocks before commmission is $"<<stock<<endl;
    cout<<"The amount of commission paid to broker is $"<<commiss<<endl;
    cout<<"The total amount paid is $"<<totPaid<<endl;
    
    //Exit Stage Right!
    return 0;
}