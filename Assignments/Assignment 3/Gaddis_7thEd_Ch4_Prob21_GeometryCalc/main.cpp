/* 
 * File:   main.cpp
 * Author: Allan Ramos
 * Created on July 1, 2017, 6:51 PM
 * Purpose:  To determine the area of different geometric shapes
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants
const float PI=3.14159;
const int circ=1,rect=2,trian=3,quit=4; //Menu choices

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int choice;                             
    float area,radius,length,width,base,height;  //Shape measurements
    
    //Input Data
    //Create choice menu for user
    cout<<"Geometry Calculator"<<endl;
    cout<<"To find the area of a circle,    press 1"<<endl;
    cout<<"To find the area of a rectangle, press 2"<<endl;
    cout<<"To find the area of a triangle,  press 3"<<endl;
    cout<<"To quit this program,            press 4"<<endl;
    cin>>choice;
 
    //Process the Data
    cout<<setprecision(2)<<fixed<<endl;
    switch(choice){
        case circ:
            cout<<"The measurements entered must be positive numbers in meters"<<endl;
            cout<<"Please enter the radius of the circle"<<endl;
            cin>>radius;
            area=PI*radius*radius;
            cout<<"The area of the circle is = "<<area<<" meters^2"<<endl;
            break;
        case rect:
            cout<<"The measurements entered must be positive numbers in meters"<<endl;
            cout<<"Please enter the length of the rectangle"<<endl;
            cin>>length;
            cout<<"Please enter the width of the rectangle"<<endl;
            cin>>width;
            area=length*width;
            cout<<"The area of the rectangle is = "<<area<<" meters^2"<<endl;
            break;
        case trian:
            cout<<"The measurements entered must be positive numbers in meters"<<endl;
            cout<<"Please enter the base measurement of the triangle"<<endl;
            cin>>base;
            cout<<"Please enter the height of the triangle"<<endl;
            cin>>height;
            area=0.5*base*height;
            cout<<"The area of the triangle is = "<<area<<" meters^2"<<endl;
            break;
        case quit:
            cout<<"You have chosen to quit the program."<<endl;
            break;
        default:
            cout<<"Whoops, that's not a valid choice, run the program again"<<endl;
    }
    
    //Exit Stage Right!
    return 0;
}