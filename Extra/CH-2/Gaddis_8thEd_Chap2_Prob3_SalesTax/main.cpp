/* 
 * File:   main.cpp
 * Author: Allan Ramos
 * Created on June 25, 2017, 6:51 PM
 * Purpose:  To compute sales tax
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare and Initialize Variables
    int price = 95;         //Purchase amount in dollars
    float statTax = 0.04f,  //4% State tax
          contTax = 0.02f,  //2% County tax
          totTax,           //Total Tax
          totPaid;          //Total paid
 
    //Process the Data
    totTax = price * statTax + price * contTax;
    totPaid = price + totTax;
    
    //Output the processed Data
    cout<<"For a $95 purchase: "<<endl;
    cout<<"State Tax         = $"<<statTax * price<<endl;
    cout<<"County Tax        = $"<<contTax * price<<endl;
    cout<<"Total Tax paid    = $"<<totTax<<endl;
    cout<<"Total amount paid = $"<<totPaid<<endl;
    
    //Exit Stage Right!
    return 0;
}