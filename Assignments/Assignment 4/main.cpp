/* 
 * File:   main.cpp
 * Author: Allan Ramos
 * Created on July 10, 2017, 7:30 PM
 * Purpose:  Assignment 4 with menu
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>
#include <iomanip>
#include <ctime>
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    char choice;
    
    //Loop on the menu
    do{
    
        //Input values
        cout<<"Choose from the list"<<endl;
        cout<<"Type 1 for prob. 1 from ch-5 of 7th Ed. Gaddis \"Sum of Numbers\""<<endl;
        cout<<"Type 2 for prob. 4 from ch-5 of 7th Ed. Gaddis \"Calories Burned\""<<endl;
        cout<<"Type 3 for prob. 3 from ch-5 of 7th Ed. Gaddis \"Ocean Levels\""<<endl;
        cout<<"Type 4 for prob. 5 from ch-5 of 7th Ed. Gaddis \"Membership Fees Increase\""<<endl;
        cout<<"Type 5 for prob. 7 from ch-5 of 7th Ed. Gaddis \"Pennies for Pay\""<<endl;
        cout<<"Type 6 for prob. 9 from ch-5 of 7th Ed. Gaddis \"Hotel Occupancy\""<<endl;
        cout<<"Type 7 for prob. 22 from ch-5 of 8th Ed. Gaddis \"Square Display\""<<endl;
        cout<<"Type 8 for prob. 19 from ch-5 of 8th Ed. Gaddis \"Budget Analysis\""<<endl;
        cout<<"Type 9 for prob. 16 from ch-5 of 8th Ed. Gaddis \"Savings Account Balance\""<<endl;
        cout<<"Type any other character to exit"<<endl;
        cin>>choice;

        //Switch to determine the Problem
        switch(choice){
            case '1':{
                cout<<"We are in the \"Sum of Numbers\" problem"<<endl;
                int start=1; //Integer at which the sum begins
                int sum=0;   //Number which will have 1 added to it for each sum, depending on the integer entered
                int inp;     //Number which the sum will go up to

                //Input Data
                cout<<"Please enter a positive integer."<<endl;
                cin>>inp;

                //Process the Data

                //Output the processed Data
                for(int x=start;x<=inp;x++){  //Begin loop
                        sum+=x;
                    }
                if(inp<1){
                    cout<<"That is an invalid entry, please run the program again"<<endl;
                }
                else{
                    cout<<"The sum of the integers 1 through "<<inp<<" is = "<<sum<<endl;
                }
                break;
            }
            case '2':{
                cout<<"We are in the \"Calories Burned\" problem"<<endl;
                //Declare Variables
                float calBurn;      //Total amount of calories burned
                float calPerMin=3.9;    //Calories burned per minute

                //Input Data

                //Process the Data
                for (int i=10;i<=30;i+=5){
                    calBurn=i*calPerMin;
                 
                //Output the processed data
                    cout<<"The amount of calories burned in "<<i<<" minutes is ";
                    cout<<calBurn<<" calories."<<endl;
                }
                break;
            }
            case '3':{
                cout<<"We are in the \"Ocean Levels\" problem"<<endl;
                //Declare Variables
                float ocnLvl=0;    
                int yearEnd=25;

                //Input Data
                cout<<"Ocean levels are rising at a rate of 1.5mm per year"<<endl;
                for(int i=1;i<=yearEnd;i++){
                    ocnLvl+=1.5;
                    cout<<"The total increase after year "<<i<<" is "<<ocnLvl<<" mm"<<endl;
                }
                break;
            }
            case '4':{
                cout<<"We are in the \"Membership Fees Increase\" problem"<<endl;
                //Declare Variables
                float intPerYr=0.04;
                float memshp=2500;
                int yrs=6;

                //Input Data

                //Process the Data
                cout<<"Your membership fee will increase by four percent each year for ";
                cout<<"the next six years."<<endl;
                for (int i=1;i<=yrs;i++){
                    memshp=memshp+(memshp*intPerYr);
                    cout<<setprecision(2)<<fixed<<endl;
                    cout<<"For year "<<i<<" your membership will increase to $"<<memshp<<endl;
                }
                break;
            }
            case '5':{
                cout<<"We are in the \"Pennies for Pay\" problem"<<endl;
                //Declare Variables
                int days=1;            //Number of days worked
                float pay=1.0;         //Pay per day starting at one penny
                float payDllr=pay/100;  //Pay per day in dollars
                float totPay;          //Total pay at the end of pay period

                //Input Data
                cout<<"Please enter the number of days for which you will be getting paid"<<endl;
                cin>>days;
                while (days<1){
                    cout<<"Please enter a number of days greater than one"<<endl;
                    cin>>days;
                }

                //Process the Data
                for (int i=1;i<=days;i++){
                    cout<<"For day "<<setw(3)<<i<<" you have earned "<<setw(5);
                    cout<<setprecision(2)<<fixed<<payDllr<<" dollars"<<endl;
                    totPay+=payDllr;
                    payDllr*=2;
                }

                //Output the processed Data
                cout<<"The total amount earned over the given pay period is $"<<payDllr<<endl;
                break;
            }
            case '6':{
                cout<<"We are in the \"Hotel Occupancy\" problem"<<endl;
                //Declare Variables
                int rmsPerFlr=0;  //Rooms per floor
                int totRms=0;     //Total number of rooms
                int totFlrs=0;    //Total number of floors
                float occpdRms=0;   //Number of occupied rooms on a floor
                float totOcRm=0;    //Total occupied rooms
                float perOccp=0;  //Percentage of rooms occupied

                //Input Data
                cout<<"This program will determine the occupancy rate for a hotel. "<<endl;
                cout<<"Please enter the number of floors in the hotel. "<<endl;
                cin>>totFlrs;

                while(totFlrs<1){
                    cout<<"Please enter a number of floors greater than 1. "<<endl;
                    cin>>totFlrs;
                }
                for(int i=1;i<=totFlrs;i++){
                    if(i!=13){
                        cout<<"Please enter the number of rooms on floor "<<i<<" "<<endl;
                        cin>>rmsPerFlr;
                        while(rmsPerFlr<10){
                            cout<<"Please enter a number of rooms greater than ten. "<<endl;
                            cin>>rmsPerFlr;
                        }
                        cout<<"How many rooms are occupied on this floor? "<<endl;
                        cin>>occpdRms;
                    }
                    totRms+=rmsPerFlr;
                    totOcRm+=occpdRms;
                }
                perOccp=(totOcRm/totRms)*100;


                //Process the Data

                //Output the processed Data
                cout<<"There is a total of "<<totRms<<" rooms in the hotel."<<endl;
                cout<<"There is a total of "<<totOcRm<<" rooms which are occupied."<<endl;
                cout<<"There is a total of "<<totRms-totOcRm<<" rooms which are unoccupied"<<endl;
                cout<<"The percentage of rooms occupied is "<<setprecision(2)<<fixed;
                cout<<perOccp<<"%"<<endl;
                
                break;
            }
            case '7':{
                cout<<"We are in the \"Square Display\" problem"<<endl;
                //Declare Variables
                int number;  //Amount of rows and columns to form the square display

                //Input Data
                cout<<"Enter a positive integer no greater than 15"<<endl;
                cin>>number;

                //Make sure the inputted data is within the given range
                if(number > 15){
                    cout<<"The number is out of range, please enter a valid integer."<<endl;
                }
                else {
                    for(int i= 1; i <= number; i++){
                        for(int j = 1; j <= number; j++)
                            cout<<"x";
                        cout<<endl;
                    }
                }
                break;
            }
            case '8':{
                cout<<"We are in the \"Budget Analysis\" problem"<<endl;
                //Declare Variables
                float budget, expnse, total = 0;

                //Input Data
                cout<<fixed<<setprecision(2)<<showpoint;
                cout<<"Enter your total monthly budget"<<endl;
                cin>>budget;
                cout<<"Enter all your monthly expenses in dollars, enter \"0\" ";
                cout<<"when finished entering your expenses."<<endl;
                //Loop add up expenses
                do{
                    cin>>expnse;
                    total += expnse;
                }while(expnse != 0); //ends loop
                
                //Output budget and total expenses
                cout<<"Your total budget entered is: "<<setw(17)<<"$"<<budget<<endl;
                cout<<"Your total expenses entered amounts to: "<<setw(7)<<"$"<<total<<endl;
                //Determine whether under or over budget with if/else statement
                if(total <= budget)
                    cout<<"Your expenses are under your budget amount"<<endl;
                else
                    cout<<"Your expenses are over your budget amount"<<endl;
                break;
            }
            case '9':{
                cout<<"We are in the \"Savings Account Balance\" problem"<<endl;
                //Declare Variables
                float intRate, strtBal, months, dpstAmt, //All money is in dollars
                        wdrwAmt, mnthInt, mult;

                //Input Data
                cout<<"This program will calculate the balance of a savings account";
                cout<<" at the end of a period of time."<<endl;
                cout<<"Enter your annual interest rate percentage."<<endl;
                cin>>intRate;
                cout<<"Enter your starting balance in dollars."<<endl;
                cin>>strtBal;
                cout<<"Enter the number of months since you opened the account."<<endl;
                cin>>months;

                //Process the Data
                //for loop to account for each month's deposits and expenditures
                for(int i = 1; i <= months; i++){
                    //Deposit for said month
                    cout<<"Enter the amount deposited for month "<<i<<endl;
                    cin>>dpstAmt;
                    //Calculate the new balance
                    strtBal += dpstAmt;
                    //Expenditures/withdrawals
                    cout<<"Enter how much was withdrawn from your account in month "<<i<<endl;
                    cin>>wdrwAmt;
                    //Update the balance in the account
                    strtBal -= wdrwAmt;
                    mnthInt = intRate / 12;
                    mult = (mnthInt * strtBal) / 100;
                    strtBal += mult;

                    //Output the processed data
                    cout<<fixed<<setprecision(2)<<showpoint;
                    cout<<"Your ending balance is: $"<<strtBal<<endl;
                    cout<<"Your total amount deposited is: $"<<dpstAmt<<endl;
                    cout<<"Your total amount withdrawn is: $"<<wdrwAmt<<endl;
                    cout<<"Your total interest earned is: "<<mnthInt<<endl;

                }
                break;
            }
            default:
                cout<<"You are exiting the program"<<endl;
        }
    }while(choice>='1'&&choice<='9');
    
    //Exit Stage Right!
    return 0;
}