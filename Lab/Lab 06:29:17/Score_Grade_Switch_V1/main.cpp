/* 
 * File:   main.cpp
 * Author: Allan Ramos
 * Created on June 29, 2017, 11:30 PM
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
    switch(score/10){
        case 10:
        case 9 :grade = 'A';break;
        case 8: grade = 'B';break;
        case 7: grade = 'C';break;
        case 6: grade = 'D';break;
        default: grade = 'F';
    }
 
    //Process the Data
    
    //Output the processed Data
    cout<<"A score of "<<static_cast<int>(score)<<" gives a grade of "<<grade<<endl;
    
    //Exit Stage Right!
    return 0;
}