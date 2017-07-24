/* 
 * File:   main.cpp
 * Author: Allan Ramos
 * Created on July 22, 2017, 6:51 PM
 * Purpose:  Calculate and display rainfall for the year
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format Library
#include <string>    //String Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants
const int MONTHS = 12; //Months in a year

//Function Prototypes
float totYrRn(float[], int);
float avgMtRn(float[], int);
float highRn(float[], int, int &);
float lowRn(float[], int, int &);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int mnthHi = 0; //used to determine which month had the most rain
    int mnthLo = 0; //used to determine which month had the least rain
    float mnthRain[MONTHS];//Array to store rainfall 
    
    //Array for the months of the year
    string month[MONTHS] = {"January", "February", "March", "April", "May", 
                            "June", "July", "August", "September", "October", 
                            "November", "December"};

    //Input Data
    //Enter rainfall for each month
    for(int i = 0; i < MONTHS; i++){
        cout<<"Enter the rainfall in inches for "<<month[i]<<endl;
        cin>>mnthRain[i];
        while(mnthRain[i] < 0){  //Input validation
            cout<<"Invalid entry, enter a positive ";
            cout<<"value for the rainfall in "<<month[i]<<endl;
            cin>>mnthRain[i];    //Input values in array
        }
    }
    
    //Process and output data
    cout<<fixed<<showpoint<<setprecision(2); //Set floating points to two places
    
    cout<<"The total rainfall for this year is: ";
    cout<<totYrRn(mnthRain, MONTHS);  //Call function for total annual rain
    cout<<" inches."<<endl;
    
    cout<<"The average monthly rainfall is: ";
    cout<<avgMtRn(mnthRain, MONTHS);  //Call function for average monthly rain
    cout<<" inches."<<endl;
    
    cout<<"The month with the most rainfall is: ";
    cout<<highRn(mnthRain, MONTHS, mnthHi); //Call function for month with most rain
    cout<<" for "<<month[mnthHi]<<endl;     //Output name of month with most rain
    
    cout<<"The month with the least rainfall is: ";
    cout<<lowRn(mnthRain, MONTHS, mnthLo); //Call function for month with least rain
    cout<<" for "<<month[mnthLo]<<endl;    //Output name of month with least rain

    
    //Exit Stage Right!
    return 0;
}

float totYrRn(float yearRn[], int months){
    float tot;
    for(int i = 0; i < months; i++){ //Loop to sum all elements in array
        tot += yearRn[i] ;  
    }
    return tot;
}

float avgMtRn(float yearRn[], int months){
    float avg;
    float tot;
    for(int i = 0; i < months; i++){ //Loop to sum all elements in array
        tot += yearRn[i];
    }
    avg = tot / months;  //Find average of monthly rainfall
    return avg;
}

float highRn(float mnthRn[], int months, int &whtMnth){
    int high = mnthRn[0];
    for(int i = 0; i < months; i++){ //Loop to find highest value in array
        if(high < mnthRn[i]){
            high = mnthRn[i];
            whtMnth = i;  //To determine name of month from string array
        }
    }
    return high;
}

float lowRn(float mnthRn[], int months, int &whtMnth){
    int low = mnthRn[0];
    for(int i = 0; i < months; i++){ //Loop to find lowest value in array
        if(low > mnthRn[i]){
            low = mnthRn[i];
            whtMnth = i;  //To determine name of month from string array
        }
    }
    return low;
}
