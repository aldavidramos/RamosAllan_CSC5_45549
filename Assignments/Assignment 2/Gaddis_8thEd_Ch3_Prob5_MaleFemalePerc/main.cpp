/* 
 * File:   main.cpp
 * Author: Allan Ramos
 * Created on June 26, 2017, 5:10 PM
 * Purpose:  To determine male and female percentages in a class
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
    float male, female, totStud; //Number of male, female, and total students
    float malePer, femPer;       //Percentages of sexes in the class
    
    //Input Data
    cout<<"How many male students are in the class?"<<endl;
    cin>>male;
    cout<<"How many female students are in the class?"<<endl;
    cin>>female;
 
    //Process the Data
    totStud = male + female;
    malePer = (male / totStud) * 100;
    femPer = (female / totStud) * 100;
    
    //Output the processed Data
    cout<<"The male student percentage is "<<malePer<<"%"<<endl;
    cout<<"The female student percentage is "<<femPer<<"%"<<endl;
    
    //Exit Stage Right!
    return 0;
}