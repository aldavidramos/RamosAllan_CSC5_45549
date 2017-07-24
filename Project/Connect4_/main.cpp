/* 
 * File:   main.cpp
 * Author: Allan Ramos
 * Created on July 1, 2017, 6:51 PM
 * Purpose:  Connect 4
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format Library
#include <string>    //String Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants
const int ROW = 6;
const int COL = 7;

//Function Prototypes
void initBrd();             //Function to initialize board
void showBrd();             //Function to show board
void makeMve(int plyrNum);  //Function to make move
bool chkWin(int x, int y, int stepX, int stepY); //Function to check for win
bool curPos(int x, int y);                       //Function marking current position

int board[ROW][COL];        //Array for board to be used across all functions

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int player;
    
    initBrd();
    showBrd();
    makeMve(1);
    showBrd();

    //Input Data
 
    //Process the Data
    
    //Output the processed Data
    
    //Exit Stage Right!
    return 0;
}


void initBrd()
{
    for (int i = 0; i < ROW; i++) //Loop to assign blank board value
    {
        for (int j = 0; j < COL; j++)
        {
            board[i][j] = -1;    //-1 will be assigned '*' character
        }
    } 
}


void showBrd()
{
    for (int i = 0; i < ROW; i++)  //Loop to fill board with characters
    {
        for (int j = 0; j < COL; j++)
        {
            if (board[i][j] == -1)       //To determine what character will fill spot
                cout << setw(3) << "*";
            else if (board[i][j] == 1)   //Player 1 is assigned the character 'X'
                cout << setw(3) << "X";  
            else if (board[i][j] == 2)   //Player 2 is assigned the character 'O'
                cout << setw(3) << "O";
        }
        cout << endl;
    }
    for (int i = 0; i < COL; i++)        //Displays numbers for column position
       cout << setw(3) << i;
    cout << endl;
    
    cout << endl << endl;
}


void makeMve(int plyrNum)
{
    int colNum;           //Variable holding player's column choice
    bool ivldMve = false; //To determine whether move is valid
    
    do      //Input choice and check validity
    {
        cout << "Player "<< plyrNum << ", enter a column number to place your move: ";
        cin >> colNum;  //Input choice
        
        if (board[ROW][colNum] == 'X' || board[ROW][colNum] == 'O')  //Check validity
        {
            ivldMve = true;     
            cout << "INVALID MOVE!" << endl;
        }
        
    } while (ivldMve);
    
    //Place the move on the available coordinate (ROW, colNum)
    //Iterate through chosen column from top to bottom to find free space
    for (int curRow = 0; curRow < ROW; curRow++)
    {
        if (board[curRow][colNum] == -1 && board[curRow+1][colNum] != -1) //If current spot is free
        {
            if (plyrNum == 1)
               board[curRow][colNum] = 1;  //Assign 'X' to free spot
            else if (plyrNum == 2)
               board[curRow][colNum] = 2;  //Assign 'O' to free spot
        }
    }
}


bool chkWin(int x, int y, int stepX, int stepY)
{
    const int strtVal = board[x][y];
    for (int i = 1; i < 4; i++)
        if(board[x + i * stepX][y + i * stepY] != strtVal)
            return false;
    return true;
}


bool curPos(int x, int y)
{
    return chkWin(x, y, 1,  0) || //Check horizontal direction
           chkWin(x, y, 0,  1) || //Check vertical direction
           chkWin(x, y, 1,  1) || //Check diagonal direction downwards
           chkWin(x, y, 1, -1) ;  //Check diagonal direction upwards
}