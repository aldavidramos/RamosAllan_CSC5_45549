/* 
 * File:   main.cpp
 * Author: Allan Ramos
 * Created on June 29, 2017, 1:29 PM
 * Purpose:  Fibonacci
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int fi, fim1, fim2;
    
    //Initialize Variables
    fim2 = 0;
    fim1 = 1;
    
    //Calculate next term in the series
    fi= fim1 + fim2;
    cout<<"The Fibonacci Sequence"<<endl;
    cout<<fim2<<","<<fim1<<","<<fi;
    
    //Calculate next term in the series
    fim2 = fim1;
    fim1 = fi;
    fi= fim1 + fim2;
    cout<<","<<fi;
    
    //Calculate next term in the series
    fim2 = fim1;
    fim1 = fi;
    fi= fim1 + fim2;
    cout<<","<<fi;
    
    //Calculate next term in the series
    fim2 = fim1;
    fim1 = fi;
    fi= fim1 + fim2;
    cout<<","<<fi;
    
    //Calculate next term in the series
    fim2 = fim1;
    fim1 = fi;
    fi= fim1 + fim2;
    cout<<","<<fi;
    
    //Calculate next term in the series
    fim2 = fim1;
    fim1 = fi;
    fi= fim1 + fim2;
    cout<<","<<fi;
    
    //Calculate next term in the series
    fim2 = fim1;
    fim1 = fi;
    fi= fim1 + fim2;
    cout<<","<<fi;
    
    //Exit Stage Right!
    return 0;
}