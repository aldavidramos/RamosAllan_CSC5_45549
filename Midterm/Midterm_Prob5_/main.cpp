/* 
 * File:   main.cpp
 * Author: Allan Ramos
 * Created on July 11, 2017, 4:43 PM
 * Purpose:  Determining gross pay for employees. Problem 5
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
    float hrsWrkd;      //Hours worked per week
    float payRate;      //Regular rate of pay up to 20 hrs
    float payChck;      //Weekly paycheck received in dollars
    float grsPay;       //Gross monthly pay received in dollars
    int dblTme=20;    //Employee gets paid double time after 20 hrs
    int tplTme=40;    //Employee gets paid triple time after 40 hrs
    
    //Input Data
    cout<<"This program will determine the monthly gross pay for an";
    cout<<" employee."<<endl;
    cout<<"Please enter the rate of pay in dollars for the given ";  //Enter pay rate
    cout<<"employee."<<endl;
    cin>>payRate;
 
    //Process the Data
    for(int i=1;i<=4;i++){  //Begin loop for each week
        cout<<"Please enter the number of hours worked for week "<<i<<":"<<endl;
        cin>>hrsWrkd;
        while(hrsWrkd<1){
            cout<<"Please enter a number of hours greater than one."<<endl;
            cin>>hrsWrkd;
        }
        if(hrsWrkd<=dblTme){
            payChck=hrsWrkd*payRate;
            cout<<setprecision(2)<<fixed<<"Pay for week "<<i<<" is $";
            cout<<payChck<<endl;
            grsPay+=payChck;
        }
        else if(hrsWrkd>dblTme&&hrsWrkd<tplTme){
            payChck=20*payRate+(hrsWrkd-dblTme)*payRate*2;
            cout<<setprecision(2)<<fixed<<"Pay for week "<<i<<" is $";
            cout<<payChck<<endl;
            grsPay+=payChck;
        }
        else if(hrsWrkd>tplTme){
            while(hrsWrkd>168){
                cout<<"Please enter a number of hours less than 168."<<endl;
                cin>>hrsWrkd;
            }
            payChck=20*payRate+payRate*2*20+(hrsWrkd-tplTme)*payRate*3;
            cout<<setprecision(2)<<fixed<<"Pay for week "<<i<<" is $";
            cout<<payChck<<endl;
            grsPay+=payChck;
        }
    }
    
    //Output the processed Data
    cout<<setprecision(2)<<fixed<<"This month, the employee received a gross ";
    cout<<"pay of $"<<grsPay<<endl;
    
    //Exit Stage Right!
    return 0;
}