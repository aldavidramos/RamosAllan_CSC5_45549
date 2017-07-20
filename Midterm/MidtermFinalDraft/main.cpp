/* 
 * File:   main.cpp
 * Author: Allan Ramos
 * Created on July 11, 2017, 6:51 PM
 * Purpose:  Midterm CSC5
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format Library
#include <cmath>     //Math Library
#include <string>    //string
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
        cout<<"Type 1 for Midterm Problem 1"<<endl; //done
        cout<<"Type 2 for Midterm Problem 2"<<endl;
        cout<<"Type 3 for Midterm Problem 3"<<endl;
        cout<<"Type 4 for Midterm Problem 4"<<endl; //done
        cout<<"Type 5 for Midterm Problem 5"<<endl; //done
        cout<<"Type 6 for Midterm Problem 6"<<endl;
        cout<<"Type any other character to exit"<<endl;
        cin>>choice;

        //Switch to determine the Problem
        switch(choice){
            case '1':{
                cout<<"We are in Midterm Problem 1"<<endl;
                //Declare Variables
                int num; //Input which will determine the size of "X" shape

                //Input Data
                cout<<"Please enter a number:"<<endl;
                cin>>num;

                //Process the Data
                //Begin loop for "X" shape
                if(num%2==0){ //If the number is even
                    for(int row=1;row<=num;row++){
                        for(int col=1;col<=num;col++){
                            if(row==col||col==(num+1)-row)
                                cout<<col;
                            else
                                cout<<" "; //Creating blank spaces to delineate the "X"
                        }
                        cout<<endl;
                    }
                }
                else{        //If the number is odd
                    for(int row=1;row<=num;row++){
                        for(int col=1;col<=num;col++){
                            if(row==col||col==(num+1)-row)
                                cout<<(num+1)-col;
                            else
                                cout<<" "; //Creating blank spaces to delineate the "X"
                        }
                        cout<<endl;
                    }
                }
                
                break;
            }
            case '2':{
                cout<<"We are in Midterm Problem 2"<<endl;
                //Declare Variables
                int i, j, temp, remain, revNum; 
                //int number;   // used for an attempt to reverse the number
                char number[4];

                //Input Data
                cout<<"Please enter a four digit number: "<<endl;
                cin>>number;
                //The attempt to reverse the number
                /*   while(number != 0)
                {
                    remain = number%10;
                    revNum = revNum*10 + remain;
                    number /= 10;
                }
                number = revNum;


                cout<<"Reversed Number = "<<number;
                */

                //Process and output the Data
                //Begin for loop to read the input
                for(i = 0; i < 4; i++)
                {

                    if(number[i] >= '0' && number[i] <= '9')
                    {
                       temp = number[i] - '0';
                       cout<<temp<<" ";

                       for(j = 0; j < temp; j++)
                       {
                           cout<<"*";
                       }
                    }
                    else
                    {
                       cout<<number[i]<<" ?";
                    }
                    cout<<endl;
                }

                break;
            }
            case '3':{
                cout<<"We are in Midterm Problem 3"<<endl;
            //Declare Variables
            string date,payee,acchld;
            float amnt;

            //Input Data
            cout<<"Writing a check."<<endl;
            cout<<"Please enter the date in this format, MM/DD/YY :"<<endl;
            getline(cin,date); //Date entry doesn't get skipped when ran outside the menu, no clue why it does here
            cout<<"Please enter the name of the name of the payee :"<<endl;
            getline(cin,payee);
            cout<<"Please enter the name of the account holder :"<<endl;
            getline(cin,acchld);
            cout<<"Please enter the amount paid :"<<endl;
            cin>>amnt;


            //Output the processed Data

            cout<<endl<<endl;
            cout<<setw(35)<<left<<acchld<<endl;
            cout<<setw(35)<<left<<"STREET ADDRESS"<<endl;
            cout<<setw(35)<<left<<"CITY, STATE  ZIP"<<setw(20)<<right<<date<<endl;
            cout<<endl;
            cout<<setw(21)<<left<<"Pay to the order of: "<<setw(20)<<payee<<setw(7);
            cout<<fixed<<setprecision(2)<<showpoint;
            cout<<right<<"$"<<amnt<<endl;
            cout<<endl;
            cout<<"BANK OF CSC5"<<endl;
            cout<<endl;
            cout<<"FOR: GOTTA PAY THE RENT"<<setw(32)<<right<<acchld<<endl;
            
                break;
            }
            
            case '4':{
                cout<<"We are in Midterm Problem 4"<<endl;
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
                
                break;
            }
            case '5':{
                cout<<"We are in Midterm Problem 5"<<endl;
                //Declare Variables
                float hrsWrkd;      //Hours worked per week
                float payRate;      //Regular rate of pay up to 20 hrs
                float payChck;      //Weekly paycheck received in dollars
                float grsPay;       //Gross monthly pay received in dollars
                int dblTme=20;    //Employee gets paid double time after 20 hrs
                int tplTme=40;    //Employee gets paid triple time after 40 hrs

                //Input Data
                cout<<"This program will determine the monthly gross pay for an";
                cout<<" employee."<<endl;
                cout<<"Please enter the rate of pay in dollars for the given ";  //Enter pay rate
                cout<<"employee."<<endl;
                cin>>payRate;

                //Process the Data
                for(int i=1;i<=4;i++){  //Begin loop for each week
                    cout<<"Please enter the number of hours worked for week "<<i<<":"<<endl;
                    cin>>hrsWrkd;
                    while(hrsWrkd<1){
                        cout<<"Please enter a number of hours greater than one."<<endl;
                        cin>>hrsWrkd;
                    }
                    if(hrsWrkd<=dblTme){
                        payChck=hrsWrkd*payRate;
                        cout<<setprecision(2)<<fixed<<"Pay for week "<<i<<" is $";
                        cout<<payChck<<endl;
                        grsPay+=payChck;
                    }
                    else if(hrsWrkd>dblTme&&hrsWrkd<tplTme){
                        payChck=20*payRate+(hrsWrkd-dblTme)*payRate*2;
                        cout<<setprecision(2)<<fixed<<"Pay for week "<<i<<" is $";
                        cout<<payChck<<endl;
                        grsPay+=payChck;
                    }
                    else if(hrsWrkd>tplTme){
                        while(hrsWrkd>168){
                            cout<<"Please enter a number of hours less than 168."<<endl;
                            cin>>hrsWrkd;
                        }
                        payChck=20*payRate+payRate*2*20+(hrsWrkd-tplTme)*payRate*3;
                        cout<<setprecision(2)<<fixed<<"Pay for week "<<i<<" is $";
                        cout<<payChck<<endl;
                        grsPay+=payChck;
                    }
                }

                //Output the processed Data
                cout<<setprecision(2)<<fixed<<"This month, the employee received a gross ";
                cout<<"pay of $"<<grsPay<<endl;
                
                break;
            }
            case '6':{
                cout<<"We are in Midterm Problem 6"<<endl;
                //Declare Variables
                int i, j, n;  //Counters, number of terms in the series 
                float apxSin, exctSin, numrtr, denmtr, sign; //sin Function,Numerator, Denominator
                float x;      //Value of x
                apxSin = 0;

                //Input Data
                cout<<"sinx approximation."<<endl;
                cout<<"Input the value of x."<<endl;
                cin>>x;
                cout<<"Input the number of terms \"n\" to be used in the approximation"<<endl;
                cin>>n;

                //Process the Data
                //Begin for loop for numerator of series
                for(i = 0; i <= n; i++){
                    numrtr = 1;
                    for(j = 0; j < 2*i+1; j++){
                        numrtr = numrtr * x;
                    }
                    //Begin loop for denominator of series
                    denmtr = 1;
                    for(j = 1; j <= 2*i+1; j++){
                        denmtr = denmtr * j;
                    }
                    //Loop for alternating sign of series
                    if(i % 2 == 0){
                        sign = 1;
                    } else{
                        sign = -1;
                    }
                    //Adding of terms
                    apxSin = apxSin + (numrtr / denmtr) * sign;
                }
                //Exact value of sin(x)
                exctSin = sin(x);

                //Output the processed Data
                cout<<fixed<<setprecision(9)<<showpoint;
                cout<<"Approx. of sinx = "<<apxSin<<endl;
                cout<<"Exact sinx      = "<<exctSin;
                cout<<endl;
                
                break;
            }
            default:
                cout<<"You are exiting the program"<<endl;
        }
    }while(choice>='1'&&choice<='6');
    
    //Exit Stage Right!
    return 0;
}