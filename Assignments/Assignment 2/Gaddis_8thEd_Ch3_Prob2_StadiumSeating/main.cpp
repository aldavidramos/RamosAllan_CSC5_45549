/* 
 * File:   main.cpp
 * Author: Allan Ramos
 * Created on June 26, 2017, 12:41 PM
 * Purpose:  To determine sales numbers and income generated from ticket sales
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Input/output manipulation
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare and Initialize Variables
    float classA = 15.0f;          //Ticket prices in dollars
    float classB = 12.0f;
    float classC = 9.0f;
    float tickA, tickB, tickC;  //Amount of tickets sold for each class
    float revA, revB, revC;     //Revenue created from each ticket class
    float totRev;               //Total revenue generated
    
    
    //Input Data
    cout<<"This program will determine the income generated from ticket sales."<<endl;
    cout<<"How many class A tickets were sold?"<<endl;
    cin>>tickA;
    cout<<"How many class B tickets were sold?"<<endl;
    cin>>tickB;
    cout<<"How many class C tickets were sold?"<<endl;
    cin>>tickC;
 
    //Process the Data
    revA = classA * tickA;
    revB = classB * tickB;
    revC = classC * tickC;
    totRev = revA + revB + revC;
    
    //Output the processed Data
    cout<<"Income generated from Class A ticket sales: $"<<setprecision(2)<<fixed<<revA<<endl;
    cout<<"Income generated from Class B ticket sales: $"<<setprecision(2)<<fixed<<revB<<endl;
    cout<<"Income generated from Class C ticket sales: $"<<setprecision(2)<<fixed<<revC<<endl;
    cout<<"Total income from ticket sales: $"<<setprecision(2)<<fixed<<totRev<<endl;
    
    
    
    //Exit Stage Right!
    return 0;
}