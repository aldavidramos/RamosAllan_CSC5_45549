/* 
 * File:   main.cpp
 * Author: Allan Ramos
 * Created on July 1, 2017, 6:51 PM
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
    int i, j, temp, remain, revNum; 
    //int number;   // used for an attempt to reverse the number
    char number[4];
    
    //Input Data
    cout<<"Please enter a four digit number: "<<endl;
    cin>>number;
    /*   while(number != 0)
    {
        remain = number%10;
        revNum = revNum*10 + remain;
        number /= 10;
    }
    number = revNum;
    

    cout<<"Reversed Number = "<<number;
     */
 
    //Process and output the Data
    //Begin for loop to read the input
    for(i = 0; i < 4; i++)
    {
        
        if(number[i] >= '0' && number[i] <= '9')
        {
           temp = number[i] - '0';
           cout<<temp<<" ";
      
           for(j = 0; j < temp; j++)
           {
               cout<<"*";
           }
        }
        else
        {
           cout<<number[i]<<" ?";
        }
        cout<<endl;
    }
    
    //Exit Stage Right!

    return 0;
}