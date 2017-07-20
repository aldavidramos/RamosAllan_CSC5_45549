/* 
 * File:   main.cpp
 * Author: Allan Ramos
 * Created on July 18, 2017, 6:51 PM
 * Purpose:  Template
 */

//System Libraries
#include <iostream>//Input Output Library
#include <cstdlib> //Random number generator seed
#include <ctime>   //Time Library
#include <iomanip> //Format Library
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to another

//Function Prototypes
void menu();
void prob1();
void prob2();
void prob3();
void prob4();
void prob5();
void prob6();

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    char choice;
    
    //Loop on the menu
    do{
        //Input values
        menu();
        cin>>choice;

        //Switch to determine the Problem
        switch(choice){
            case '1':prob1();break;
            case '2':prob2();break;
            case '3':prob3();break;
            case '4':prob4();break;
            case '5':prob5();break;
            case '6':prob6();break;
            default:
                cout<<"You are exiting the program"<<endl;
        }
    }while(choice>='1'&&choice<='6');
    
    //Exit stage right!
    return 0;
}

void menu(){
    cout<<"Choose from the list"<<endl;
    cout<<"Type 1 for Problem 1"<<endl;
    cout<<"Type 2 for Problem 2"<<endl;
    cout<<"Type 3 for Problem 3"<<endl;
    cout<<"Type 4 for Problem 4"<<endl;
    cout<<"Type 5 for Problem 5"<<endl;
    cout<<"Type 6 for Problem 6"<<endl;
    cout<<"Type any other character to exit"<<endl;
}

const int SIZE=51;
void prntAry(char x[][SIZE],int numX){
    cout<<endl;
    for(int row=1;row<=numX;row++){
        for(int col=1;col<=numX;col++){
            if(x[row][col]!=0)cout<<static_cast<int>(x[row][col]);
            else cout<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
void prob1(){
    //Declare Variables
    const int SIZE=51;//Inputs are from 1 to 50
    char x[SIZE][SIZE]={};//Initialize the Array
    unsigned short numX;
    
    
    //Output the prompt for the problem
    cout<<"This is the X problem"<<endl;
    cout<<"Provide a value from 1 to 50"<<endl;
    cin>>numX;
    
    if(numX%2==1){//Testing odd
        //Display the odd numbered
        for(int dec=numX,row=1;row<=numX;row++,dec--){
            for(int col=1;col<=numX;col++){
                if(row==col)x[row][col]=dec;
                else if(row+col==numX+1)x[row][col]=row;
                else x[row][col]=0;
            }
        }
    }else{
        //Display the even numbered
        for(int dec=numX,row=1;row<=numX;row++,dec--){
            for(int col=1;col<=numX;col++){
                if(row==col)x[row][col]=col;
                else if(row+col==numX+1)x[row][col]=dec;
                else x[row][col]=0;
            }
        }
    }
    
    //Print the X array
    prntAry(x,numX);
    
}

void prob2(){
    //Declare variables
    const int ROWS=5;
    const int COLS=11;
    char input[ROWS],hist[ROWS][COLS]={};
    
    //Input the 4 character number
    cout<<"Display a histogram"<<endl;
    cout<<"Input a 4 character number"<<endl;
    cin>>input;
    cout<<input;
    
    //Fill a 2 dimensional array with stars;
    for(int row=1;row<ROWS;row++){
        for(int col=1;col<COLS;col++){
            if(input[ROWS-row-1]<48||input[ROWS-row-1]>57&&col==1)hist[row][col]='?';
            else if(input[ROWS-row-1]<48||input[ROWS-row-1]>57)hist[row][col]=' ';
            else if(input[ROWS-43t6row-1]-48<col)hist[row][col]=' ';
            else hist[row][col]='*';
        }
    }
    
    //Output the array
    cout<<endl;
    for(int row=1;row<ROWS;row++){
        cout<<input[ROWS-row-1];
        for(int col=1;col<COLS;col++){
            cout<<" "<<hist[row][col];
        }
        cout<<endl;
    }
    cout<<endl;
}

void prob3(){
    cout<<"We are in Problem 3"<<endl;
}

void prob4(){
    cout<<"We are in Problem 4"<<endl;
}

void prob5(){
    cout<<"We are in Problem 5"<<endl;
}

void prntAry(float termVal[],float sum[],int n){
    cout<<"Term     TermVal         Sum"<<endl;
    for(int term=0;term<=n;term++){
        cout<<setw(4)<<term<<setw(12)<<termVal[term]
                <<setw(12)<<sum[term]<<endl;
    }
}
void prob6(){
    //Declare variables
    float x,series;
    int nTerms,sign=-1;
    const int SIZE=100;
    float termVal[SIZE]={};
    float sum[SIZE]={};
    
    //Input
    cout<<"Calculate a series"<<endl;
    cout<<"Required inputs are X and the number of terms"<<endl;
    cout<<"series = x - x^3/3! + x^5/5! - x^7/7!"<<endl;
    cin>>x>>nTerms;
    
    //Loop for the number of terms
    sum[0]=termVal[0]=x;
    for(int fact=3,term=1;term<=nTerms;term++,fact+=2){
        termVal[term]=sign*termVal[term-1]*x*x/(fact-1)/fact;
        sum[term]+=sum[term-1]+termVal[term];
    }
    
    //Print the resulting arrays
    prntAry(termVal,sum,nTerms);

}