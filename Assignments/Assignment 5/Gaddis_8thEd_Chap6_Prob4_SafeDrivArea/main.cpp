/* 
 * File:   main.cpp
 * Author: Allan Ramos
 * Created on July 16, 2017, 9:06 PM
 * Purpose:  Determine what region has the least amount of accidents
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes
int getAcci(string);   //Function to retrieve amount of car accidents
void findLo(int, int, int, int, int);   //Function to determine which is lowest

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float north, south, east, west, central; //Regions of city
    //Call the getAcci function
    north = getAcci("North");
    south = getAcci("South");
    east = getAcci("East");
    west = getAcci("West");
    central = getAcci("Central");
    cout<<endl;
    //Call the function to find the region with the lowest accidents
    findLo(north, south, east, west, central);
    cout<<endl;
    
    //Exit Stage Right!
    return 0;
}

int getAcci(string region){
    int accdnt;
    //Input amount of accidents for each region
    //Validate amount over zero
    while(true){
        cout<<"Enter the number of accidents for the "<<region<<" region."<<endl;
        cin>>accdnt;
        if(accdnt > 0){
            break;
        }
        cout<<"The number of accidents must be a quantity larger than zero."<<endl;
    }
    return accdnt;
}

void findLo(int north, int south, int east, int west, int central){
    int loAcci;
    //Determine which has the lowest amount of accidents
    if(north < south && south < east && east < west && west < central){
        cout<<"The northern region has the safest driving area."<<endl;
        loAcci = north;
    }
    else if(south < east && east < west && west < central){
        cout<<"The southern region has the safest driving area."<<endl;
        loAcci = south;
    }
    else if(east < west && west < central){
        cout<<"The eastern region has the safest driving area."<<endl;
        loAcci = east;
    }
    else if(west < central){
        cout<<"The western region has the safest driving area."<<endl;
        loAcci = west;
    }
    else{
        cout<<"The central region has the safest driving area."<<endl;
    }
    cout<<"This region had "<<loAcci<<" accidents"<<endl;
}