/* 
 * File:   main.cpp
 * Author: Allan Ramos
 * Created on July 16, 2017, 6:51 PM
 * Purpose:  Template
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes
float getSale(string);   //Function to retrieve sales from all branches
void findHi(float,float,float,float);   //Function to determine which is highest

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float northE, southE, northW, southW; //Sales for each branch
    //Call the getSale function
    cout<<fixed<<showpoint<<setprecision(2);
    northE = getSale("Northeast");
    southE = getSale("Southeast");
    northW = getSale("Northwest");
    southW = getSale("Southwest");
    cout<<endl;
    //Call the function to find the division with highest sales
    findHi(northE, southE, northW, southW);
    cout<<endl;
    
    //Exit Stage Right!
    return 0;
}

float getSale(string divis){
    float sales;
    //Input sales for each division
    while(true){
        cout<<"Enter the quarterly sales in dollars for the "<<divis<<" division."<<endl;
        cin>>sales;
        if(sales > 0){
            break;
        }
        cout<<"The sales figure must be a quantity larger than zero."<<endl;
    }
    return sales;
}

void findHi(float northE, float southE, float northW, float southW){
    float hiSale;
    //Determine which has the largest sales figure
    if(northE > southE && southE > southW && southW > northW){
        cout<<"Northeast has the highest sales."<<endl;
        hiSale = northE;
    }
    else if(southE > southW && southW > northW){
        cout<<"Southeast has the highest sales."<<endl;
        hiSale = southE;
    }
    else if(southW > northW){
        cout<<"Southwest has the highest sales."<<endl;
        hiSale = southW;
    }
    else{
        cout<<"Northwest has the highest sales."<<endl;
        hiSale = northW;
    }
    cout<<"The sales figure is: $"<<hiSale<<endl;
}