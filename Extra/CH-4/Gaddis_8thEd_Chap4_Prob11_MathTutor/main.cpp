/* 
 * File:   main.cpp
 * Author: Allan Ramos
 * Created on July 3, 2017, 6:51 PM
 * Purpose:  Template
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format Library
#include <cstdlib>   //Random number generator
#include <ctime>     //Time Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants
const int SEED = 999;

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int num1, num2, sum, ansr;
    
    //Create and assign random numbers
    srand(time(0)); 
    num1 = rand() % SEED;
    num2 = rand() % SEED;

    //Output/Input the Data
    cout<<"Enter the answer to the following sum: "<<endl;
    cout<<setw(6)<<num1<<endl;
    cout<<"+"<<setw(5)<<num2<<endl;
    cout<<"------"<<endl;
    cin>>ansr;
            
    //Process the data 
    sum = num1 + num2;
    if(ansr == sum){
        cout<<"Congratulations your answer is correct!"<<endl;
    }else{
        cout<<"Your answer is incorrect."<<endl;
        cout<<"The correct answer is "<<sum<<endl;
    }
    
    //Output the processed Data
    
    //Exit Stage Right!
    return 0;
}