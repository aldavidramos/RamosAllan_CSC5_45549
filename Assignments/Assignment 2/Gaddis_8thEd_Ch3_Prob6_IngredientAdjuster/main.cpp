/* 
 * File:   main.cpp
 * Author: Allan Ramos
 * Created on June 26, 2017, 5:23 PM
 * Purpose:  To adjust a cookie recipe for a desired amount of cookies
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float sugar = 0.03125f;    //Since 1.5 cups yields 48 cookies then 1.5/48 cup yields 1 cookie.
    float butter = 0.0208333f; //Since 1 cup yields 48 cookies then 1/48 cup yields 1 cookie.
    float flour = 0.05729f;    //Since 2.75 cups yields 48 cookies then 2.75/48 cup yields 1 cookie.
    float cookies;              //Amount of cookies to be made
    //Input Data
    cout<<"How many cookies would you like to make?"<<endl;
    cin>>cookies;
 
    //Process the Data
    sugar *= cookies;
    butter *= cookies;
    flour *= cookies;
    
    //Output the processed Data
    cout<<"In order to make "<<cookies<<" cookies, follow this recipe:"<<endl;
    cout<<setprecision(2)<<fixed<<sugar<<" cups of sugar."<<endl;
    cout<<setprecision(2)<<fixed<<butter<<" cups of butter."<<endl;
    cout<<setprecision(2)<<fixed<<flour<<" cups of flour."<<endl;
    
    //Exit Stage Right!
    return 0;
}