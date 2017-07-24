/* 
 * File:   main.cpp
 * Author: Allan Ramos
 * Created on July 22, 2017, 6:51 PM
 * Purpose:  Template
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants
const int MONK = 3;
const int DAYS = 5;

//Function Prototypes
float avgFood(float [MONK][DAYS]);
float mstFood(float [MONK][DAYS], float);
float lstFood(float [MONK][DAYS], float);


//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float high = 0.0f;
    float low = 0.0f;
    float monkBus[MONK][DAYS];

    //Input Data
    cout<<"This program will track the food intake of three monkeys."<<endl;
    for(int i = 0; i < MONK; i++){
        for(int j = 0; j < DAYS; j++){
            cout<<"Enter the amount of food (in lbs) eaten by monkey "<<(i+1);
            cout<<" for day "<<(j+1)<<": ";
            cin>>monkBus[i][j];
        }
    }
    
    
    for(int i = 0; i < MONK; i++){
        for(int j = 0; j < DAYS; j++){
            cout<<monkBus[i][j]<<" ";
        }
        cout<<endl;
    }
 
    //Process the Data
    cout<<"The average amount of food eaten by the entire family of monkeys: ";
    cout<<avgFood(monkBus);
    cout<<endl;
    
    cout<<"The greatest amount of food eaten during the week by a monkey was: ";
    cout<<mstFood(monkBus, high);
    cout<<" lbs of food in a day."<<endl;
    
    cout<<"The least amount of food eaten during the week by a monkey was: ";
    cout<<lstFood(monkBus, low);
    cout<<" lbs of food in a day."<<endl;
    
    //Output the processed Data
    
    //Exit Stage Right!
    return 0;
}


float avgFood(float fdEatn[MONK][DAYS]){
    float totFood = 0.0f;
    float avg;
    for(int i = 0; i < MONK; i++){
        for(int j = 0; j < DAYS; j++){
            totFood += fdEatn[i][j];
        }
    }
    avg = totFood / DAYS;
    return avg;
}

float mstFood(float food[MONK][DAYS], float hi){
    for(int i = 0; i < MONK; i++)
        for(int j = 0; j < DAYS; j++){
            if(hi < food[i][j])
                hi = food[i][j];
        }
    return hi;
}


float lstFood(float food[MONK][DAYS], float lo){
    for(int i = 0; i < MONK; i++)
        for(int j = 0; j < DAYS; j++){
            if(lo > food[i][j])
                lo = food[i][j];
        }
    return lo;
}