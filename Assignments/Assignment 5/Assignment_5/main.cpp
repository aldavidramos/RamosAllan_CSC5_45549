/* 
 * File:   main.cpp
 * Author: Allan Ramos
 * Created on July 17, 2017, 7:30 PM
 * Purpose:  Assignment 5 with menu
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <string>    //String Library
#include <iomanip>   //Format Library
#include <cmath>     //Math Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants
const float GRAVITY = 9.8; //Acceleration due to grav. in m/s^2
const int CNVPERC=100;//Conversion to Percentage

//Function Prototypes
    //For prob 1
    void calcRet(float, float);  //Function to calculate retail price
    
    //For prob 3
    float getSale(string);   //Function to retrieve sales from all branches
    void findHi(float,float,float,float);   //Function to determine which is highest
    
    //For prob 4
    int getAcci(string);   //Function to retrieve amount of car accidents
    void findLo(int, int, int, int, int);   //Function to determine which is lowest
    
    //For prob 5
    float fallingDistance(int);
    
    //For prob 6
    float kinErgy (float, float);
    
    //For prob 7
    float celsius(float);
    
    //For prob 9
    float fValue1(float,float,int);
    float fValue2(float,float,int);
    float fValue3(float,float,int);
    float fValue4(float,float,int);


//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    char choice;
    
    //Loop on the menu
    do{
    
        //Input values
        cout<<"Choose from the list"<<endl;
        cout<<"Type 1 for prob. 1 from ch-6 of 8th Ed. Gaddis \"Markup\""<<endl;
        cout<<"Type 2 for prob. 3 from ch-6 of 8th Ed. Gaddis \"Winning Division\""<<endl;
        cout<<"Type 3 for prob. 4 from ch-6 of 8th Ed. Gaddis \"Safest Driving Area\""<<endl;
        cout<<"Type 4 for prob. 5 from ch-6 of 8th Ed. Gaddis \"Falling Distance\""<<endl;
        cout<<"Type 5 for prob. 6 from ch-6 of 8th Ed. Gaddis \"Kinetic Energy\""<<endl;
        cout<<"Type 6 for prob. 7 from ch-6 of 8th Ed. Gaddis \"Celsius Temp. Table\""<<endl;
        cout<<"Type 7 for prob. 9 from ch-6 of 8th Ed. Gaddis \"Future Value\""<<endl;
        cout<<"Type any other character to exit"<<endl;
        cin>>choice;

        //Switch to determine the Problem
        switch(choice){
            case '1':{
                cout<<"We are in the \"Markup\" problem"<<endl;
                //Declare Variables
                float wholsle, cost, markup;

                //Input Data
                cout<<fixed<<showpoint<<setprecision(2);
                cout<<"Enter the wholesale price in dollars of the desired item :"<<endl;
                cin>>wholsle;
                cout<<"Enter the markup percentage of the item: "<<endl;
                cin>>markup;
                if(wholsle < 0 || markup < 0){
                    cout<<"Input a positive number for both the wholesale price and the markup"<<endl;
                }
                else{
                calcRet(wholsle, markup);
                }
                break;
            }
            case '2':{
                cout<<"We are in the \"Winning Division\" problem"<<endl;
                //Declare Variables
                float northE, southE, northW, southW; //Sales for each branch
                //Call the getSale function
                cout<<fixed<<showpoint<<setprecision(2);
                northE = getSale("Northeast");
                southE = getSale("Southeast");
                northW = getSale("Northwest");
                southW = getSale("Southwest");
                cout<<endl;
                //Call the function to find the division with highest sales
                findHi(northE, southE, northW, southW);
                cout<<endl;
                break;
            }
            case '3':{
                cout<<"We are in the \"Safest Driving Area\" problem"<<endl;
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
                break;
            }
            case '4':{
                cout<<"We are in the \"Falling Distance\" problem"<<endl;
                //Declare Variables
                //Table to display distances and times, output the data
                cout<<"An object in freefall falls a distance d=(1/2)gt^2"<<endl;
                cout<<"The distance an object falls due to"<<endl;
                cout<<"gravity increases with each second."<<endl<<endl;
                cout<<"    Time         Distance"<<endl;
                cout<<"(seconds)        (meters)"<<endl;
                cout<<"---------------------------"<<endl;
                cout<<fixed<<showpoint<<setprecision(2);
                //for loop for each passing second
                for(int i = 1; i <= 10; i++){
                    cout<<"    "<<setw(3)<<i<<"           ";
                    cout<<setw(6)<<right<<fallingDistance(i)<<endl; //Introduce the function for distance
                }
                cout<<endl;
                break;
            }
            case '5':{
                cout<<"We are in the \"Kinetic Energy\" problem"<<endl;
                //Declare Variables
                float mass, vel;  //Mass (Kg's), velocity (m/s)

                //Input Data
                cout<<"To determine the Kinetic Energy of an object,"<<endl;
                cout<<"enter the mass of the object: "<<endl;
                cin>>mass;
                cout<<"Enter the velocity of the object: "<<endl;
                cin>>vel;

                //Output the processed Data
                cout<<"With the given parameters, the obect has a kinetic energy of ";
                cout<<fixed<<showpoint<<setprecision(2);
                cout<<kinErgy(mass, vel)<<" joules."<<endl;
                break;
            }
            case '6':{
                cout<<"We are in the \"Celsius Temp. Table\" problem"<<endl;
                //Display table, output original and converted data
                cout<<"The formula to convert degrees Fahrenheit to Celsius is C = (5/9)*(F-32)"<<endl;
                cout<<"Listed are temperatures and their respective"<<endl;
                cout<<"conversions from 0-20 degrees Fahrenheit to Celsius"<<endl<<endl;
                cout<<"  Fahrenheit        Celsius"<<endl;
                cout<<"------------------------------"<<endl;
                cout<<fixed<<showpoint<<setprecision(4);
                //for loop for temps from 0 to 20 deg.
                for (int i = 0; i <= 20; i++){
                        cout<<"      "<<setw(2)<<i;
                        cout<<"          "<<setw(9)<<right<<celsius(i)<<endl; //Introduce conversion function
                }
                cout<<endl;
                
                break;
            }
            case '7':{
                cout<<"We are in the \"Future Value\" problem"<<endl;
                //Declare variables
                float pv,   //Present Value in $'s
                       i;   //Interest rate Percent/compounding period
                int    n;   //Number of compounding periods (yrs)

                //Input data - prompt for inputs
                cout<<"This is a Savings Account Program"<<endl;
                cout<<"Input Present Value in Dollars,  "<<endl;
                cout<<"Interest Rate in per cent / year, "<<endl;
                cout<<"Number of Compounding periods in years."<<endl;
                cin>>pv>>i>>n;

                //Map the inputs
                i/=CNVPERC;//Convert percentage interest to fraction

                //Output the inputs
                cout<<fixed<<setprecision(2)<<showpoint;
                cout<<endl;
                cout<<"The Present Value =  $"<<setw(8)<<pv<<endl;
                cout<<"The Interest Rate =   "<<setw(8)<<i*CNVPERC<<"%"<<endl;
                cout<<"The Number of Years = "<<setw(5)<<n<<endl;

                //Output the transformed data
                cout<<"Savings Function 1 -> Power       = $"
                        <<fValue1(pv,i,n)<<endl;
                cout<<"Savings Function 2 -> Exp - Log   = $"
                        <<fValue2(pv,i,n)<<endl;
                cout<<"Savings Function 3 -> for - loop  = $"
                        <<fValue3(pv,i,n)<<endl;
                cout<<"Savings Function 4 -> Recursion   = $"
                        <<fValue4(pv,i,n)<<endl; 
                break;
            }
            
            default:
                cout<<"You are exiting the program"<<endl;
        }
    }while(choice>='1'&&choice<='9');
    
    //Exit Stage Right!
    return 0;
}

//Functions
    //For prob 1
    
    void calcRet(float retail, float perc)
    {
        perc = perc / 100.0f;
        retail += retail * perc;
        cout<<"The retail price for the item is: $"<<retail<<endl;
    }

    //For prob 3
    
    float getSale(string divis){
    float sales;
    //Input sales for each division
    while(true){
        cout<<"Enter the quarterly sales in dollars for the "<<divis<<" division."<<endl;
        cin>>sales;
        if(sales > 0){
            break;
        }
        cout<<"The sales figure must be a quantity larger than zero."<<endl;
    }
    return sales;
    }

    void findHi(float northE, float southE, float northW, float southW){
        float hiSale;
        //Determine which has the largest sales figure
        if(northE > southE && southE > southW && southW > northW){
            cout<<"Northeast has the highest sales."<<endl;
            hiSale = northE;
        }
        else if(southE > southW && southW > northW){
            cout<<"Southeast has the highest sales."<<endl;
            hiSale = southE;
        }
        else if(southW > northW){
            cout<<"Southwest has the highest sales."<<endl;
            hiSale = southW;
        }
        else{
            cout<<"Northwest has the highest sales."<<endl;
            hiSale = northW;
        }
        cout<<"The sales figure is: $"<<hiSale<<endl;
    }
    
    //For prob 4
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
    
    //For prob 5
    float fallingDistance(int i)
    {
        float dist = 0.5f * GRAVITY * pow(i, 2); //Equation for freefall due to gravity
            return dist;
    }
    
    //For prob 6
    //Function to determine Kinetic Energy of the object
    float kinErgy (float mass, float vel){
        float ke;
        ke = (0.5f) * mass * vel * vel; //Kinetic Energy formula
        return ke;
    }
    
    //For prob 7
    //Function to convert from fahrenheit to celsius 
    float celsius(float i)
    {
        float degCel;
        degCel = (5.0f/9.0f) * (i - 32);
        return degCel;
    }
    
    //For prob 9 
    float fValue1(float pVal,float intRate,int nPds){
    return pVal*pow((1+intRate),nPds);
    }

    float fValue2(float pVal,float intRate,int nPds){
        return pVal*exp(nPds*log(1+intRate));
    }

    float fValue3(float pVal,float intRate,int nPds){
        float fv=pVal;
        for(int i=1;i<=nPds;i++){
            fv*=(1+intRate);
        }
        return fv;
    }

    float fValue4(float pVal,float intRate,int nPds){
        if(nPds<=0)return pVal;
        return fValue4(pVal,intRate,nPds-1)*(1+intRate);
    }