/* 
 * File:   main.cpp
 * Author: Allan Ramos
 * Created on July 1, 2017, 6:51 PM
 * Purpose:  Fibonacci on crud
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Formatting Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float crudWt,curntWt; //Crud weight in lbs
    int fi=1,fip1=1,fip2=2; //Fibonacci sequence
    int days=0; //Number of days
    
    //Input Data
    cout<<"How many pounds of crud do you have?"<<endl;
    cin>>crudWt;
 
    //Process the Data -Day 0
    curntWt=crudWt*fi;
    cout<<"  Fi Days Weight"<<endl;
    cout<<setw(4)<<fi<<setw(5)<<days<<setw(7)<<curntWt<<endl;
    
    //Process the Data -Day 5
    crudWt*=fip1;
    days+=5;
    cout<<setw(4)<<fi<<setw(5)<<days<<setw(7)<<curntWt<<endl;
    
    //Process the Data -Day 10
    fip2=fip1;
    fip1=fi;
    fi=fip1+fip2;
    curntWt=crudWt*fi;
    days+=5;
    cout<<setw(4)<<fi<<setw(5)<<days<<setw(7)<<curntWt<<endl;
    
    //Process the Data -Day 15
    fip2=fip1;
    fip1=fi;
    fi=fip1+fip2;
    curntWt=crudWt*fi;
    days+=5;
    cout<<setw(4)<<fi<<setw(5)<<days<<setw(7)<<curntWt<<endl;
    
    //Process the Data -Day 20
    fip2=fip1;
    fip1=fi;
    fi=fip1+fip2;
    curntWt=crudWt*fi;
    days+=5;
    cout<<setw(4)<<fi<<setw(5)<<days<<setw(7)<<curntWt<<endl;
    
    //Process the Data -Day 25
    fip2=fip1;
    fip1=fi;
    fi=fip1+fip2;
    curntWt=crudWt*fi;
    days+=5;
    cout<<setw(4)<<fi<<setw(5)<<days<<setw(7)<<curntWt<<endl;
    
    //Process the Data -Day 30
    fip2=fip1;
    fip1=fi;
    fi=fip1+fip2;
    curntWt=crudWt*fi;
    days+=5;
    cout<<setw(4)<<fi<<setw(5)<<days<<setw(7)<<curntWt<<endl;
    
    //Exit Stage Right!
    return 0;
}