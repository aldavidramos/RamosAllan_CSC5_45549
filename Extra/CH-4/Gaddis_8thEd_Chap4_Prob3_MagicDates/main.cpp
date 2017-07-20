/* 
 * File:   main.cpp
 * Author: Allan Ramos
 * Created on July 3, 2017, 6:51 PM
 * Purpose:  Determine whether a date is "magic"
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int day, month, year;  //Dates to be inputted
    int mult;              //Used to determine whether month times day = year

    //Input Data
    cout<<"This program will determine whether the date you enter is \"magic\"."<<endl;
    cout<<"Enter a month in numeric form. (March would be entered as \'3\')"<<endl;
    cin>>month;
    cout<<"Enter a day in numeric form."<<endl;
    cin>>day;
    cout<<"Enter a year in two digit form (1970 would be entered as \'70\')"<<endl;
    cin>>year;
    cout<<"The date you entered is "<<month<<"/"<<day<<"/"<<year<<endl;
 
    //Process the Data
    mult = month * day;
    if(mult == year){
        cout<<"The date you entered is magic."<<endl;
    }else{
        cout<<"The date you entered is not magic."<<endl;
    }
    
    //Output the processed Data
    
    //Exit Stage Right!
    return 0;
}