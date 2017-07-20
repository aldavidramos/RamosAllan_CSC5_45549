/* 
 * File:   main.cpp
 * Author: Allan Ramos
 * Created on July 11, 2017, 6:51 PM
 * Purpose:  Template
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
    int num; //Input which will determine the size of "X" shape
    
    //Input Data
    cout<<"Please enter a number:"<<endl;
    cin>>num;
 
    //Process the Data
    //Begin loop for "X" shape
    if(num%2==0){ //If the number is even
        for(int row=1;row<=num;row++){
            for(int col=1;col<=num;col++){
                if(row==col||col==(num+1)-row)
                    cout<<col;
                else
                    cout<<" "; //Creating blank spaces to delineate the "X"
            }
            cout<<endl;
        }
    }
    else{        //If the number is odd
        for(int row=1;row<=num;row++){
            for(int col=1;col<=num;col++){
                if(row==col||col==(num+1)-row)
                    cout<<(num+1)-col;
                else
                    cout<<" "; //Creating blank spaces to delineate the "X"
            }
            cout<<endl;
        }
    }
    
    //Output the processed Data
    
    //Exit Stage Right!
    return 0;
}