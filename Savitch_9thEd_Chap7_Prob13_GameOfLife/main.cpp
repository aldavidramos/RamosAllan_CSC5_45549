/* 
 * File:   main.cpp
 * Author: Allan Ramos
 * Created on July 18, 2017, 12:50 PM
 * Purpose:  Conway's Game of Life
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <ctime>     //Time Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants
const int ROWS = 20;
const int COLS = 2 * ROWS;

//Function Prototypes
void prntAry(char [][COLS], int);
void fillAry(char [][COLS], int);
void glider(char [][COLS], int, int, int);
void rules(char [][COLS], char [][COLS], int);
int nghbor(char [][COLS], int, int, int);
void pause(int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    char lifeOdd[ROWS][COLS],lifeEven[ROWS][COLS];
    int lives = 50;
    
    //Initialize variables
    fillAry(lifeOdd, ROWS);

    //Input Data
    glider(lifeOdd, ROWS, 1, 1);
    glider(lifeOdd, ROWS, 15, 15);
    glider(lifeOdd, ROWS, 1, 15);
    
    //Output the processed Data
    prntAry(lifeOdd, ROWS);
    cout<<"Generation = "<<0<<endl;
    
    //Play the Game of Life
    for(int nGen = 1; nGen <= lives ; nGen += 2){
    
        //Generate next in sequence
        rules(lifeOdd, lifeEven, ROWS);

        //Output the processed Data
        cout<<"Generation = "<<nGen+1<<endl;
        prntAry(lifeEven, ROWS);

        //Generate next in sequence
        rules(lifeEven, lifeOdd, ROWS);

        //Output the processed Data
        cout<<"Generation = "<<nGen+1<<endl;
        prntAry(lifeOdd, ROWS);
    }
    
    //Exit Stage Right!
    return 0;
}


void pause(int secs){
    int beg = static_cast<unsigned int>(time(0));
    int end;
    do{
        end = static_cast<unsigned int>(time(0));
    }while(end - beg < secs);
}


void rules(char arr1[][COLS], char arr2[][COLS], int rows){
    for(int row = 0; row < rows; row++){
        for(int col = 0; col < COLS; col++){
            int nNghbor = nghbor(arr1, ROWS, row, col);
            if (nNghbor <= 1 || nNghbor >= 4)arr2[row][col] = ' ';
            else if(nNghbor == 3)arr2[row][col] = 'X';
            else if(nNghbor ==2 || nNghbor == 3)arr2[row][col] = arr1[row][col];
        }
    }
}

int nghbor(char array[][COLS], int ROWS, int row, int col){
    int count = 0;
    if(array[row-1][col-1] == 'X')count++; //Left upper corner
    if(array[row-1][col]   == 'X')count++; //Above
    if(array[row-1][col+1] == 'X')count++; //Right upper corner
    if(array[row][col-1]   == 'X')count++; //Left
    if(array[row][col+1]   == 'X')count++; //Right
    if(array[row+1][col-1] == 'X')count++; //Left lower corner
    if(array[row+1][col]   == 'X')count++; //Below
    if(array[row+1][col+1] == 'X')count++; //Right lower corner
    return count;
}

    
void glider(char array[][COLS], int, int zRow, int zCol){
    array[zRow][zCol+1] = 'X';
    array[zRow+1][zCol+2] = 'X';
    array[zRow+2][zCol] = 'X';
    array[zRow+2][zCol+1] = 'X';
    array[zRow+2][zCol+2] = 'X';
}

void prntAry(char array[][COLS], int rows){
    cout<<endl;
    for(int row = 0; row < rows; row++){
        for(int col = 0; col< COLS; col++){
            cout<<array[row][col];
        }
        cout<<endl;
    }
    cout<<endl;
    pause(1);
}

void fillAry(char array[][COLS], int rows){
    for(int row = 0; row < rows; row++){
        for(int col = 0; col< COLS; col++){
            array[row][col]= ' ';
        }
    }
}