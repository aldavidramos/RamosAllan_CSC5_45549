/* 
 * File:   main.cpp
 * Author: Allan Ramos
 * Created on June 27, 2017, 10:50 PM
 * Purpose:  To calculate BMR
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare and Initialize Variables
    char sex, nCdyBar;
    unsigned short wt, age, ht, bmr;
    unsigned int cndyCal = 230; //230 calories for a chocolate candy bar
    
    //Input Data
    cout<<"Calculate how many candy bars you can eat per day"<<endl;
    cout<<"Input your weight (lbs), Height (in), Age (yrs)"<<endl;
    cin>>wt>>ht>>age;
    cout<<"Input your sex (M/F)"<<endl;
    cin>>sex;
 
    //Process the Data
    bmr = (sex == 'F')?
        655 + 4.3 * wt +  4.7 * ht - 4.7 * age:
         66 + 6.3 * wt + 12.9 * ht - 6.8 * age;
    nCdyBar = bmr / cndyCal;
    
    //Output the processed Data
    cout<<"Given sex = "<<sex<<", wt = "<<wt<<"(lbs), ht = "<<ht<<"(in), age = "
            <<age<<"(yrs),"<<" BMR = "<<bmr<<"(cals)"<<endl;
    cout<<"Your chocolate candy bar consumption per day = "<<
            static_cast<int>(nCdyBar)<<endl;
    
    
    //Exit Stage Right!
    return 0;
}