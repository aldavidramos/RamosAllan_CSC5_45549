/* 
 * File:   main.cpp
 * Author: Allan Ramos
 * Created on July 3, 2017, 6:51 PM
 * Purpose:  Calculate discount on a sale
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare and Initialize Variables
    int package = 99;  //Price of individual package
    int amt;           //Amount of units sold
    int price;         //Purchase amount before discount
    float discnt, discPrc;        //Discount, Discounted price
    

    //Input Data
    cout<<"This program will determine the total cost of your purchase, ";
    cout<<"including discounts."<<endl;
    cout<<"The price for an individual unit is $99"<<endl;
    cout<<"Enter the amount of units you wish to purchase: "<<endl;
    cin>>amt;
 
    //Process and Output the Data
    price = package * amt;
    if(amt <= 0){
        cout<<"Invalid entry, enter an amount greater than  0."<<endl;
    }else if(amt <= 10){
        cout<<"Your purchase amounts to $"<<price<<endl;
    }else if(amt >= 10 && amt <= 19){
        discnt = 0.2;
        discnt *= price;
        discPrc = price - discnt;
        cout<<discPrc;
    }else if(amt >= 20 && amt <= 49){
        discnt = 0.3;
        discnt *= price;
        discPrc = price - discnt;
        cout<<discPrc;
    }else if(amt >= 50 && amt <= 99){
        discnt = 0.4;
        discnt *= price;
        discPrc = price - discnt;
        cout<<discPrc;
    }else{
        discnt = 0.5;
        discnt *= price;
        discPrc = price - discnt;
        cout<<discPrc;
    }
    
    //Exit Stage Right!
    return 0;
}