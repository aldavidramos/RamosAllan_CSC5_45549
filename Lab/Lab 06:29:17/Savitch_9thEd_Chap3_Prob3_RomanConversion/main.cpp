/* 
 * File:   main.cpp
 * Author: Allan Ramos
 * Created on June 29, 2017, 12:20 PM
 * Purpose:  Roman numeral conversion
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
    unsigned short number;
    char n1000s, n100s, n10s, n1s;
    
    //Input Data
    cout<<"Input a number to convert to Roman Numerals"<<endl;
    cout<<"Number range from 1000 to 3000"<<endl;
    cin>>number;
    
    //Validation
    if(!(number >= 1000 && number <= 3000)){
        cout<<"Invalid Range, Exiting Program"<<endl;
        return 1;
    }
 
    //Process the Data
    n1000s = number / 1000;
    number -= (1000 * n1000s);
    n100s = number / 100;
    number -= (100 * n100s);
    n10s = number / 10;
    number -= (10 * n10s);
    n1s = number;
    cout<<"The number you typed in was "
            <<n1000s * 1000 + n100s * 100 + n10s * 10 +n1s<<endl;
    
    //Roman Numeral 1000's
    switch(n1000s){
        case 3: cout<<"M";
        case 2: cout<<"M";
        case 1: cout<<"M";
    }
    
    //Roman Numeral 100's
    switch(n100s){
        case 3: cout<<"C";
        case 2: cout<<"C";
        case 1: cout<<"C";break;
        case 4: cout<<"CD";break;
        case 5: cout<<"D";break;
        case 8: cout<<"DCCC";break;
        case 7: cout<<"DCC";break;
        case 6: cout<<"DC";break;
        case 9: cout<<"CM";break;
        default: cout<<" ";
    }
    
    //Roman Numeral 10's
    switch(n10s){
        case 3: cout<<"X";
        case 2: cout<<"X";
        case 1: cout<<"X";break;
        case 4: cout<<"XL";break;
        case 5: cout<<"L";break;
        case 8: cout<<"LXXX";break;
        case 7: cout<<"LXX";break;
        case 6: cout<<"LX";break;
        case 9: cout<<"XC";break;
        default: cout<<" ";
    }
    
    //Roman Numeral 1's
    switch(n1s){
        case 3: cout<<"I";
        case 2: cout<<"I";
        case 1: cout<<"I";break;
        case 4: cout<<"IV";break;
        case 5: cout<<"V";break;
        case 8: cout<<"VIII";break;
        case 7: cout<<"VII";break;
        case 6: cout<<"VI";break;
        case 9: cout<<"IX";break;
        default: cout<<" ";
    }
    
    //Exit Stage Right!
    return 0;
}