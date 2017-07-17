/* 
 * File:   main.cpp
 * Author: Allan Ramos
 * Created on July 1, 2017, 6:51 PM
 * Purpose:  Template
 */
#include <iostream>
using namespace std;

int main()
/*
{
   int i, j, k, temp;
   char str[4];
   cout << "Enter a 4 digit number : ";
   cin >> str;
   for(i = 0; i < 4; i++)
   {
       if(str[i] >= '0' && str[i] <= '9')
       {
           temp = str[i] - '0';
           cout << temp;
      
           for(j = 0; j < temp; j++)
           {
               cout << "*";
           }
       }
       else
       {
           cout << str[i] << "?";
       }
       cout << endl;
   }
 */

{
    int n, reversedNumber = 0, remainder;

    cout << "Enter an integer: ";
    cin >> n;

    while(n != 0)
    {
        remainder = n%10;
        reversedNumber = reversedNumber*10 + remainder;
        n /= 10;
    }

    cout << "Reversed Number = " << reversedNumber;

   return 0;
}