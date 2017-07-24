/* 
 * File:   main.cpp
 * Author: Allan Ramos
 * Created on July 22, 2017, 6:51 PM
 * Purpose:  Determine sales for chips and salsa
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <string>    //String Library
#include <iomanip>   //Format Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants
const int SIZE = 5; //Amount of different salsa types

//Function Prototypes
void prtSlsa(string [], int [], int);
int totSale(int [], int);
int highJar(int [], int, int &);
int lowJar(int[], int, int &);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    string salsa[SIZE] = {"Mild","Medium","Sweet","Hot","Zesty"};  //Names of salsa array
    int numJar[SIZE];  //Salsa sales array
    int high = 0;      //To determine which salsa sold most
    int low = 0;       //To determine which salsa sold least
    
    //Input Data
    cout<<"Enter the amount of salsa sold for each type: "<<endl;
    for(int i = 0; i < SIZE; i++){ //Loop to input salsa sales
        cout<<salsa[i]<<": ";
        cin>>numJar[i];
    }
 
    //Process the Data
    prtSlsa(salsa, numJar, SIZE); //Call function to display salsa sales
    cout<<endl;
    
    cout<<"Total jars sold this month: ";
    cout<<totSale(numJar, SIZE);  //Call function to determine total sales
    cout<<" jars."<<endl;
    
    cout<<"The highest selling salsa sold ";
    cout<<highJar(numJar, SIZE, high);  //Call function to determine salsa with most sales
    cout<<" jars, "<<salsa[high]<<"."<<endl;
    
    cout<<"The lowest selling salsa sold ";
    cout<<lowJar(numJar, SIZE, low);   //Call function to determine salsa with most sales
    cout<<" jars, "<<salsa[low]<<"."<<endl;
    
    //Output the processed Data
    
    //Exit Stage Right!
    return 0;
}

void prtSlsa(string salz[], int jars[], int size){
    cout<<"The sales for salsa goes as follows: "<<endl;
    for(int i = 0; i < size; i++){  //Loop to display sales
        cout<<setw(7)<<right<<salz[i]<<" sales: "<<jars[i]<<" jars"<<endl;
    }
}

int totSale(int jars[], int size){
    int tot = 0;
    for(int i = 0; i < size; i++) //Loop to sum sales
        tot += jars[i];
    return tot;
}

int highJar(int jars[], int size, int &whtJar){
    int hi = jars[0];
    for(int i = 0; i < size; i++){ //Loop to determine highest sales
        if(hi < jars[i]){
            hi = jars[i];
            whtJar = i;
        }
    }
    return hi;
}

int lowJar(int jars[], int size, int &whtJar){
    int lo = jars[0];
    for(int i = 0; i < size; i++){ //Loop to determine lowest sales
        if(lo > jars[i]){
            lo = jars[i];
            whtJar = i;
        }
    }
    return lo;
}
