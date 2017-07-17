/* 
 * File:   main.cpp
 * Author: Allan Ramos
 * Created on July 3, 2017, 6:51 PM
 * Purpose:  To determine which rectangle has a larger area
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
    float lngth1,lngth2,wdth1,wdth2,area1,area2;
    
    //Input Data
    cout<<"This program will determine which of two rectangles has the";
    cout<<" greatest area"<<endl;
    cout<<"Enter the length for rectangle 1:"<<endl;
    cin>>lngth1;
    cout<<"Enter the width for rectangle 1:"<<endl;
    cin>>wdth1;
    cout<<"Enter the length for rectangle 2:"<<endl;
    cin>>lngth2;
    cout<<"Enter the width for rectangle 2:"<<endl;
    cin>>wdth2;
 
    //Process and Output the Data
    area1=lngth1*wdth1;
    area2=lngth2*wdth2;
    
    if(area1>area2)
        cout<<"Rectangle 1 has an area greater than rectangle 2."<<endl;
    else if(area1<area2)
        cout<<"Rectangle 2 has an area greater than rectangle 1."<<endl;
    else if(area1==area2)
        cout<<"Both rectangles have the same area."<<endl;
    
    //Exit Stage Right!
    return 0;
}