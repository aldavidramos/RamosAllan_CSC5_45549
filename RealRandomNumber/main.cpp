/* 
 * File:   main.cpp
 * Author: Allan Ramos
 * Created on July 1, 2017, 6:51 PM
 * Purpose:  Template
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Random number
#include <ctime>
#include <cmath>     //Math Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants
const unsigned int MAXRND = (1<<31)-1; //2^31-1

//Function Prototypes
float realRnd(float, float);


//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    unsigned int maxRand;
    int minRand;
    unsigned int numRand;
    
    //Input Data
    maxRand = minRand = rand();
    //numRand = 2147483647;
    numRand = 2147483647;
 
    //Process the Data
    for(unsigned int i = 1; i <= numRand; i++){
        int random =rand();
        if(random > maxRand)maxRand = random;
        if(random < minRand)minRand = random;
    }
    
    //Output the processed Data
    cout<<"The total random number called for  = "<<numRand<<endl;
    cout<<"The minimum random number found was = "<<minRand<<endl;
    cout<<"The maximum random number found was = "<<maxRand<<endl;
    cout<<"2^31-1                              = "<<MAXRND<<endl;
    
    //Test out the function
    float minRnd, maxRnd, beg, end;
    
    //Initialize the values
    beg = 5;
    end = 14;
    minRnd = maxRnd = realRnd(beg, end);
    
    
    //Loop on the real random number generator
    for(unsigned int i = 1; i <= numRand; i++){
        float random = realRnd(beg, end);
        if(random > maxRnd)maxRnd = random;
        if(random < minRnd)minRnd = random;
    }
    
    //Display the results
    cout<<endl;
    cout<<"The total random number called for  = "<<numRand<<endl;
    cout<<"The minimum random number found was = "<<minRnd<<endl;
    cout<<"The maximum random number found was = "<<maxRnd<<endl;
    
    //Exit Stage Right!
    return 0;
}

float realRnd(float min, float max){
    float random = 1.0f * rand() / MAXRND; //Value range [0,1]
    return random * (max - min) + min;
}