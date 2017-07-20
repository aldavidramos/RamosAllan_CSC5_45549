/* 
 * File:   main.cpp
 * Author: Allan Ramos
 * Created on July 11, 2017, 4:54 PM
 * Purpose:  Read a 4 character number and output stars
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
    unsigned short  num;   //Number input by user
    unsigned char thsnd,  //Thousands position
                   hund,   //Hundreds position
                   tens,   //Tens position
                   ones;   //Ones position
    
    //Input Data
    cout<<"Please enter a four digit number: "<<endl;
    cin>>num;
 
    //Process the Data
    while(num<1000||num>9999){ //Making sure user doesn't input something more than 4 digits
        cout<<"Invalid entry, please enter a four digit number: "<<endl;
        cin>>num;
    }
    
    //Output the processed Data
    thsnd=(num-num%1000)/1000;
    switch(thsnd){
        case 9: thsnd=9;break;
        case 8: thsnd=8;break;
        case 7: thsnd=7;break;
        case 6: thsnd=6;break;
        case 5: thsnd=5;break;
        case 4: thsnd=4;break;
        case 3: thsnd=3;break;
        case 2: thsnd=2;break;
        case 1: thsnd=1;
        
        for(int i=1;i<=thsnd;i++){
        cout<<"*"<<endl;
        }
    }
    
    num-=thsnd*1000;
    hund=(num-num%100)/100;
    switch(hund){
        case 9: hund=9;break;
        case 8: hund=8;break;
        case 7: hund=7;break;
        case 6: hund=6;break;
        case 5: hund=5;break;
        case 4: hund=4;break;
        case 3: hund=3;break;
        case 2: hund=2;break;
        case 1: hund=1;
    }
    
    num-=hund*100;
    tens=(num-num%10)/10;
    switch(tens){
        case 9: tens=9;break;
        case 8: tens=8;break;
        case 7: tens=7;break;
        case 6: tens=6;break;
        case 5: tens=5;break;
        case 4: tens=4;break;
        case 3: tens=3;break;
        case 2: tens=2;break;
        case 1: tens=1;
    }
    
    num-=tens*10;
    ones=(num-num%1)/1;
    switch(ones){
        case 9: ones=9;break;
        case 8: ones=8;break;
        case 7: ones=7;break;
        case 6: ones=6;break;
        case 5: ones=5;break;
        case 4: ones=4;break;
        case 3: ones=3;break;
        case 2: ones=2;break;
        case 1: ones=1;
    }
    cout<<thsnd<<hund<<tens<<ones<<endl;
    
    //Exit Stage Right!
    return 0;
}