/* 
 * File:   main.cpp
 * Author: Allan Ramos
 * Created on July 10, 2017, 9:29 PM
 * Purpose:  To analyze a person's monthly budget
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
    //Declare Variables
    float budget, expnse, total = 0;
    
    //Input Data
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Enter your total monthly budget"<<endl;
    cin>>budget;
    cout<<"Enter all your monthly expenses in dollars, enter \"0\" ";
    cout<<"when finished entering your expenses."<<endl;
    do{
        cin>>expnse;
        total += expnse;
    }while(expnse != 0);
    cout<<"Your total budget entered is: "<<setw(17)<<"$"<<budget<<endl;
    cout<<"Your total expenses entered amounts to: "<<setw(7)<<"$"<<total<<endl;
    if(total <= budget)
        cout<<"Your expenses are under your budget amount"<<endl;
    else
        cout<<"Your expenses are over your budget amount"<<endl;
 
    //Process the Data
    
    //Output the processed Data
    
    //Exit Stage Right!
    return 0;
}