/* 
 * File:   main.cpp
 * Author: Allan Ramos
 * Created on July 11, 2017, 3:51 PM
 * Purpose:  Midterm problem 4
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    char subs;       //Subscription package
    float hrs;       //Hours accessed
    
    //Input Data
    //Display package options
    cout<<"Your ISP has three different monthly packages:"<<endl;
    cout<<"Package A: $16.75 per month, 5 hours access."<<endl;
    cout<<"Additional hours are $0.75 up to 20 hours then $1 for all additional hours."<<endl;
    cout<<"Package B: $23.75 per month, 15 hours access."<<endl;
    cout<<"Additional hours are $0.55 up to 25 hours then $0.70 for each hour above this limit."<<endl;
    cout<<"Package C: $29.95 per month unlimited access."<<endl;
    cout<<"Please enter which package you have, determined by the letter ";
    cout<<"'A','B', or'C'"<<endl;
    cin>>subs;
    while(subs!='a'&&subs!='A'&&subs!='b'&&subs!='B'&&subs!='c'&&subs!='C'){
        cout<<"Invalid entry, please enter 'A','B', or 'C'"<<endl;
        cin>>subs;
    }
    //Enter the amount of hours used
    cout<<"Please enter the amount of hours used per month:"<<endl;
    cin>>hrs;
    while(hrs<0||hrs>744){  //There's a maximum of 744 hours in a month, negative hours don't make sense
        cout<<"Please enter a valid number of hours between 0 and 744"<<endl;
        cin>>hrs;
    }
    //Determine monthly cost and savings for package A
    cout<<fixed<<setprecision(2)<<showpoint;
    if(subs=='a'||subs=='A'){
        if(hrs<=5){
            cout<<"Your bill will be $16.75 for this month"<<endl;
        }
        else if(hrs>5&&hrs<15){
            cout<<"Your bill will be $"<<16.75+(hrs-5)*0.75<<endl;
        }
        //Customer would profit by upgrading to package B after this point
        else if(hrs>=15&&hrs<20){
            cout<<"Your bill will be $"<<16.75+(hrs-5)*0.75<<endl;
            //Notifies customer of savings
            cout<<"You should consider switching to package B in order to save";
            cout<<" $"<<(16.75+(hrs-5)*0.75)-(23.75+(hrs-15)*0.55)<<endl;
        }
        else if(hrs>=20&&hrs<=21){
            cout<<"Your bill will be $"<<16.75+15*0.75+(hrs-20)<<endl;
            cout<<"You should consider switching to package B in order to save";
            cout<<" $"<<(16.75+15*0.75+(hrs-20))-(23.75+(hrs-15)*0.55)<<endl; 
        }
        //Customer would profit by upgrading to package C after this point
        else if(hrs>21){
            cout<<"Your bill will be $"<<16.75+15*0.75+(hrs-20)<<endl;
            cout<<"You should consider switching to package C in order to save";
            cout<<" $"<<16.75+15*0.75+(hrs-20)-(29.95)<<endl;
        }
    }
    //Determine monthly cost and savings for package B
    if(subs=='b'||subs=='B'){
        if(hrs<15){
            cout<<"Your bill will be $23.75 for this month"<<endl;
            cout<<"You should consider switching to package A in order to save";
            cout<<" $"<<23.75-(16.75+(hrs-5)*0.75)<<endl;
        }
        else if(hrs>=15&&hrs<=25){
            cout<<"Your bill will be $"<<23.75+(hrs-15)*0.55<<endl;
        }
        //Customer would profit by upgrading to package C at this point
        else if(hrs==26){
            cout<<"Your bill will be $29.95, you should consider switching to";
            cout<<" package C for the same price and unlimited access."<<endl;
        }
        else if(hrs>26){
            cout<<"Your bill will be $"<<23.75+10*0.55+(hrs-25)*0.70<<endl;
            cout<<"You should consider switching to package C in order to save";
            cout<<" $"<<(23.75+10*0.55+(hrs-25)*0.70)-29.95<<endl; //Notifies customer of savings
        }
    }
    //Determine monthly cost and savings for package C
    if(subs == 'c'||subs == 'C'){
        cout<<"Your bill will be $29.95"<<endl;
        //Customer would benefit by switching to package B at this point
        if(hrs<25&&hrs>15){
            cout<<"You should consider switching to package B in order to save";
            cout<<" $"<<29.95-(23.75+(hrs-15)*0.55)<<endl;
        }
        //Customer would benefit by switching to package A at this point
        else if(hrs<15){
            cout<<"You should consider switching to package A in order to save";
            cout<<" $"<<29.95-(16.75+(hrs-5)*0.75)<<endl;
        }
    }
 
    //Process the Data
    
    //Output the processed Data
    
    //Exit Stage Right!
    return 0;
}