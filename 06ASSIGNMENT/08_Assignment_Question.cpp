/*
Q8: Write a program that inputs values in a 5-D array of 5 columns and 5 rows. It displays these 
values using a function display (). It passes the array to a function times20 that doubles the
values stored in all elements of array. The program then again displays the changed values of
the array using display () function.
*/
#include<iostream>
using namespace std;

void display(int a[][5])
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cout<<a[i][j]<<"  ";
        }
    }
    cout<<endl;
}
void times20(int a[5][5])  //we also can write only colum like a[][5]
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            a[i][j]=5*a[i][j];
        }
    }
    cout<<"The double value is \n";
    display(a);
}
int main()
{
    // CODE BY ALI
    int a[5][5];
    cout<<"Enter the 25  Values in the 2d array"<<endl;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"First display\n";
    display(a);
    times20(a);
    return 0;
}
