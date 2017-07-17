/* 
 * File:   main.cpp
 * Author: Allan Ramos
 * Created on June 26, 2017, 5:44 PM
 * Purpose:  To calculate a theater's gross and net box office for a night
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Input/Output manipulation
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    const int SIZE = 50;         //Allows an input of up to 50
    char movie[SIZE];            //Name of movie
    float adTick = 10.00f;       //Price of adult ticket in dollars
    float chiTick = 6.00f;       //Price of child ticket in dollars
    float numAd;                 //Number of adult tickets sold 
    float numChil;               //Number of children tickets sold
    float groProf, netProf;      //Profits generated
    float revAd, revChil;        //Revenue corresponding to adults, children
    float perDist = 0.80f;       //Percentage paid to distributor
    float amDist;                //Amount paid to distributor
    
    //Input Data
    cout<<"Input the name of the movie you would like to know the profits of"<<endl;
    cin.getline(movie, SIZE);
    cout<<"How many adult tickets were sold?"<<endl;
    cin>>numAd;
    cout<<"How many child tickets were sold?"<<endl;
    cin>>numChil;
 
    //Process the Data
    revAd = adTick * numAd;
    revChil = chiTick * numChil;
    groProf = revAd + revChil;
    amDist = groProf * perDist;
    netProf = groProf - amDist;
    
    //Output the processed Data
    cout<<"---------------------------------"<<endl;
    cout<<"Movie name:"<<setw(25)<<"\""<<movie<<"\""<<endl;
    cout<<"Adult tickets sold:"<<setw(23)<<numAd<<endl;
    cout<<"Child tickets sold:"<<setw(23)<<numChil<<endl;
    cout<<"Gross Box Office Profit: "<<setw(14)<<"$"<<setprecision(2)<<fixed<<groProf<<endl;
    cout<<"Net Box Office Profit: "<<setw(16)<<"$"<<setprecision(2)<<fixed<<netProf<<endl;
    cout<<"Amount paid to distributor: "<<setw(11)<<"$"<<setprecision(2)<<fixed<<amDist<<endl;
    
    //Exit Stage Right!
    return 0;
}