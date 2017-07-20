/* 
 * File:   main.cpp
 * Author: Allan Ramos
 * Created on June 29, 2017, 6:51 PM
 * Purpose:  Template
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <string>    //String Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    string name, age, city, college, prof, amlType, petName; //Entries to be used in story

    //Input Data
    cout<<"\"The Word Game\""<<endl;
    cout<<"You will be asked to input information, proceed by pressing enter";
    cout<<" after each entry"<<endl;
    cout<<"Enter your name."<<endl;
    getline(cin, name);
    cout<<"Enter your age"<<endl;
    getline(cin, age);
    cout<<"Enter the name of a city"<<endl;
    getline(cin, city);
    cout<<"Enter the name of a college"<<endl;
    getline(cin, college);
    cout<<"Enter a profession"<<endl;
    getline(cin, prof);
    cout<<"Enter a type of animal"<<endl;
    getline(cin, amlType);
    cout<<"Enter your favorite name for a pet"<<endl;
    getline(cin, petName);
    
    //Output the processed Data
    cout<<"There once was a person named "<<name<<" who lived in "<<city<<"."<<endl;
    cout<<"At the age of "<<age<<", "<<name<<" went to college at "<<endl;
    cout<<college<<". "<<name<<" graduated and went to work as a "<<prof<<"."<<endl; 
    cout<<"Then, "<<name<<" adopted a(n) "<<amlType<<" named "<<petName<<endl; 
    cout<<"They both lived happily ever after!"<<endl;
    
    //Exit Stage Right!
    return 0;
}