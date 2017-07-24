/* 
 * File:   main.cpp
 * Author: Allan Ramos
 * Created on July 22, 2017, 6:51 PM
 * Purpose:  Determine largest and smallest values in an array
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants
const int SIZE = 10;  //Size of array

//Function Prototypes
void etrVal(int[], int);  //Function to enter values
void lrgVal(int[], int);  //Function to determine Largest value
void smlVal(int[], int);  //Function to determine Smallest value

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int numbers[SIZE]; //Array of values
    int high, low;     //Highest and Lowest values of array

    //Input Data
    etrVal(numbers, SIZE);  //Calls function to enter values
 
    //Process and output the Data
    lrgVal(numbers, SIZE); //Calls function to determine/output highest value
    smlVal(numbers, SIZE); //Calls function to determine/output lowest value
    
    //Exit Stage Right!
    return 0;
}

void etrVal(int num[], int size){
    //Let the user enter ten values
    cout<<"Enter ten values and I will determine the largest and smallest."<<endl;
    for(int i = 0; i < size; i++)
        //Assign the values to respective elements of the array
        cin>>num[i];
}

void lrgVal(int num[], int size){
    int high = num[0]; //Allows it to go through all elements of array
    for(int i = 0; i < size; i++){
        if(high < num[i])  //Check if it is larger than the current iteration
            high = num[i]; //If the iteration is higher, assigns new respective value
    }
    cout<<"The highest value in the array is: "<<high<<endl;
}

void smlVal(int num[], int size){
    int low = num[0];  //Allows it to go through all elements of array
    for(int i = 0; i < size; i++){
        if(low > num[i])   //Check if it is smaller than the current iteration
            low = num[i];  //If the iteration is lower, assigns new respective value
    }
    cout<<"The lowest value in the array is: "<<low<<endl;
}