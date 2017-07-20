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
    if(num<1000||num>9999)return 1;
    
    //Output the processed Data
    thsnd=(num-num%1000)/1000;
    num-=thsnd*1000;
    hund=(num-num%100)/100;
    num-=hund*100;
    tens=(num-num%10)/10;
    num-=tens*10;
    ones=(num-num%1)/1;
    /*
    cout<<static_cast<int>(thsnd)<<endl;
    cout<<static_cast<int>(hund)<<endl;
    cout<<static_cast<int>(tens)<<endl;
    cout<<static_cast<int>(ones)<<endl;
    */ 
    
    if(ones >= 0 && ones <= 9)
        switch(ones){
            case 9: cout<<"*";
            case 8: cout<<"*";
            case 7: cout<<"*";
            case 6: cout<<"*";
            case 5: cout<<"*";
            case 4: cout<<"*";
            case 3: cout<<"*";
            case 2: cout<<"*";
            case 1: cout<<"*";
            case 0: cout<<" "; break;
        }
    else if((ones >= 65 && ones <= 90) || (ones >= 97 && ones <= 122)) {
        cout<<"?";
    }
    
    cout<<endl;
    
    switch(tens){
        case 9: cout<<"*";
        case 8: cout<<"*";
        case 7: cout<<"*";
        case 6: cout<<"*";
        case 5: cout<<"*";
        case 4: cout<<"*";
        case 3: cout<<"*";
        case 2: cout<<"*";
        case 1: cout<<"*";
        case 0: cout<<" ";
    }
    cout<<endl;
    
    switch(hund){
        case 9: cout<<"*";
        case 8: cout<<"*";
        case 7: cout<<"*";
        case 6: cout<<"*";
        case 5: cout<<"*";
        case 4: cout<<"*";
        case 3: cout<<"*";
        case 2: cout<<"*";
        case 1: cout<<"*";
        case 0: cout<<" ";
    }
    cout<<endl;
    
    switch(thsnd){
        case 9: cout<<"*";
        case 8: cout<<"*";
        case 7: cout<<"*";
        case 6: cout<<"*";
        case 5: cout<<"*";
        case 4: cout<<"*";
        case 3: cout<<"*";
        case 2: cout<<"*";
        case 1: cout<<"*";
        case 0: cout<<" ";
    }
    
    //Exit Stage Right!
  

    return 0;
}