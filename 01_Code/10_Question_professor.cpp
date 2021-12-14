/*
Q10: Assume you want to generate a table of multiple of any given number. 
Write a program that allows a user to enter the number and generates the table formatting
 it into 10 columns and 20 lines.
  Interaction between program should look like this (only first two lines are shown):
Enter a number: 3
   3	 6	 9	12	15	18	21	24	27	30
33	36	39	42	45	48	51	54	57	60
*/

#include<iostream>
using namespace std;

int main()
{
    // code by ali
    int a;
    cout<<"Enter the Number \n";
    cin>>a;
      for(int i=1;i<=200;i++)
        {
            cout<<a*i<<"    ";
            if(i%10==0)
            cout<<endl;
            
        
        }   
    return 0;
}