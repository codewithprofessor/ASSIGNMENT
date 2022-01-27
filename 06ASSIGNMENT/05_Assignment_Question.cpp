/*
Q5: Write a function AVG which calculates and displays the average of a player. Call this function
 in main function. The program inputs the runs given and balls delivered in main function. 
 The average may be calculated by the formula:

Average (Total runs given 60) / (Total number of balls delivered) 
*/
#include<iostream>
using namespace std;

void avg(int run,int bal)
{
    int avg=run/bal;
    cout<<"The Avg is : "<<avg;
}
int main()
{
    // code by ali
    int b,r;
    cout<<"Etner the Runs"<<endl;
    cin>>r;
    cout<<"Etner the Balls"<<endl;
    cin>>b;
    avg(r,b);
    
    return 0;
}