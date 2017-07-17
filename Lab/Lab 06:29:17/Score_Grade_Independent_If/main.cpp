/* 
 * File:   main.cpp
 * Author: Allan Ramos
 * Created on June 29, 2017, 11:25 PM
 * Purpose:  Branching study
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>
#include <ctime>
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    char score, grade;
    
    //Initialize variables
    score = rand()%51+50; //[50,100]
    
    //Input Data
    if(score >= 90) grade = 'A';
    if(score >= 80 && score < 90) grade = 'B';
    if(score >= 70 && score < 80) grade =  'C';
    if(score >= 60 && score < 70) grade = 'D'; 
    if(score<60) grade = 'F';
 
    //Process the Data
    
    //Output the processed Data
    cout<<"A score of "<<static_cast<int>(score)<<" gives a grade of "<<grade<<endl;
    
    //Exit Stage Right!
    return 0;
}