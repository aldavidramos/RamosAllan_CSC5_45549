/* 
 * File:   main.cpp
 * Author: Allan Ramos
 * Created on July 3, 2017, 6:51 PM
 * Purpose:  Calculate how many points earned from book purchases
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
    int bkPchsd;        //How many books were purchased

    //Input Data
    cout<<"This program will determine how many points you have earned";
    cout<<" from your purchases."<<endl;
    cout<<"Enter the amount of books purchased this month: "<<endl;
    cin>>bkPchsd;
 
    //Process the Data
    if(bkPchsd < 0){
        cout<<"Your entry must be at least 0."<<endl;
    }else if(bkPchsd == 0){
        cout<<"You have earned 0 points."<<endl;
    }else if(bkPchsd == 1){
        cout<<"You have earned 5 points."<<endl;
    }else if(bkPchsd == 2){
        cout<<"You have earned 15 points."<<endl;
    }else if(bkPchsd == 3){
        cout<<"You have earned 30 points."<<endl;
    }else{
        cout<<"You have earned 60 points."<<endl;
    }
    
    //Output the processed Data
    
    //Exit Stage Right!
    return 0;
}