/* 
 * File:   main.cpp
 * Author: Allan Ramos
 * Created on July 1, 2017, 6:51 PM
 * Purpose:  To determine the charge on a long distance call
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
    int minutes;
    float hrsMin;
    int hrs,min;
    float charge;
    
    //Input Data
    do{
        cout<<"Input the time at which the call starts"<<endl;
        cout<<"Format 00.00 to 23.59 -> hrs.min"<<endl;
        cin>>hrsMin;
        hrs=hrsMin;
        min=(hrsMin-hrs)*100+0.5; //Round up for float input problem
    }while(hrs<0||hrs>23||min<0||min>59);
    cout<<"Input the minutes spent on the phone"<<endl;
    cin>>minutes;
 
    //Process the Data
    if(hrs>=0&&hrs<=6){
        charge=.12*minutes;
    }else if(hrs>=7&&hrs<=18||hrs==19&&min==0){
        charge=.55*minutes;
    }else{
        charge=.35*minutes;
    }
    
    //Output the processed Data
    if(hrs==0)     cout<<"The phone call started at 00";
    else if(hrs<10)cout<<"The phone call started at 0"<<hrs;
    else           cout<<"The phone call started at "<<hrs;
    if(min==0)     cout<<":00"<<endl;
    else if(hrs<10)cout<<":0"<<min<<endl;
    else           cout<<": "<<min<<endl;
    cout<<"It lasted for "<<minutes<<"(mins)"<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"The total charge is $"<<charge<<endl;
    
    //Exit Stage Right!
    return 0;
}