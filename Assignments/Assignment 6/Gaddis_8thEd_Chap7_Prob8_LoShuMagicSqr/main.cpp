/* 
 * File:   main.cpp
 * Author: Allan Ramos
 * Created on July 23, 2017, 11:30 PM
 * Purpose:  Lo Shu Magic Square
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants
const int ROWS = 3;  //Row size of array
const int COLS = 3;  //Col size of array

//Function Prototypes
void etrMgic(int [ROWS][COLS]);  //Function to enter array
void chkMgic(int [ROWS][COLS]);  //Function to check array

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int loShu[ROWS][COLS];  //Define Lo Shu array

    //Input Data
    etrMgic(loShu); //Call function to enter array
    cout<<"The Matrix entered goes as follows: "<<endl;
    for(int i = 0; i < ROWS; i++){       //Loop to display the array entered
        for(int j = 0; j < COLS; j++){
            cout<<setw(3)<<loShu[i][j];
        }
        cout<<endl;
    }
    
    //Process and Output data
    chkMgic(loShu);  //Call function to check if array forms Lo Shu square
    
    //Exit Stage Right!
    return 0;
}

void etrMgic(int loShu[ROWS][COLS]){
    for(int i = 0; i < ROWS; i++) //Loop to enter array
        for(int j = 0; j < COLS; j++){
            cout<<"Enter value for element ["<<i<<","<<j<<"] of array: "; //Display array coordinate
            cin>>loShu[i][j];     //Entry of array elements
        }
}

void chkMgic(int loShu[ROWS][COLS]){
    int dglSum = 0;     //Used to sum elements diagonally
    bool invalid = false; //To test validity of entry
    bool isValid = true;  //To test Lo Shu properties
    for(int i = 0; i < ROWS; i++) //Loop to check that numbers range from 1 - 9
        for(int j = 0; j < COLS; j++){
            if(loShu[i][j] < 1 || loShu[i][j] > 9)
                invalid = true;
        }
    if(invalid){    //Display if entry is invalid
        cout<<"The array entered does not form a Lo Shu Magic Square."<<endl;
        cout<<"The elements entered must range from 1 - 9"<<endl;
    }
    
    dglSum = loShu[0][0] + loShu[1][1] + loShu[2][2];  //Diagonal sum
    
    for(int i = 0; i < ROWS; i++){ //Loop to sum row elements
        int rowSum = 0;            //Resets count for each row iteration
        for(int j = 0; j < COLS; j++){
            rowSum += loShu[i][j]; //Sum
        }
        if(rowSum != dglSum){      //Test Lo Shu criteria
            isValid = false;
            break;                 //Stops if test fails
        }
    }
    
    for(int i = 0; i < ROWS; i++){ //Loop to test Lo Shu Property
        int colSum = 0;            //Resets count for iteration
        for(int j = 0; j < COLS; j++){
            colSum += loShu[j][i]; //Sum
        }
        if(colSum != dglSum){      //Test Lo Shu criteria
            isValid = false;
            break;                 //Stops if test fails
        }
    }
        
    if(isValid)     //If Lo Shu properties have been met
        cout<<"The array entered forms a Lo Shu Magic Square."<<endl;
    else            //If array fails to meet Lo Shu criteria
        cout<<"The array entered does not form a Lo Shu Magic Square."<<endl;
}