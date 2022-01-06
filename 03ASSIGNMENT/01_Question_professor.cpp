#include<iostream>
using namespace std;

int main()
{
    // code by ali 
    int r,c;
    cout<<"Enter the limt of 1st matrix for rows  : ";
    cin>>r;
    cout<<"Enter the limt of 1st matrix for coulms  : ";
    cin>>c;
    int**a= new int* [r];
    for(int i=0;i<r;i++)
        a[i]=new int [c];

    int x,y;
    cout<<"Enter the limt of 2nd matrix for rows  : ";
    cin>>x;
    cout<<"Enter the limt of 2nd matrix for coulms  : ";
    cin>>y;
    int**b= new int* [x];
    for(int i=0;i<r;i++)
        b[i]=new int [y];
    if(r==x && y==c)
    {
        cout<<"The Order of Matrix a and b is "<<x<<"x"<<y<<endl;
        int**sum= new int* [r];
    for(int i=0;i<r;i++)
        sum[i]=new int [c];
        
        cout<<"Etner the values of 1st matrix\n";
        for(int i=0;i<r;i++)
            for(int j=0;j<c;j++)
                cin>>a[i][j];
        
         cout<<"Etner the values of 2nd matrix\n";
        for(int i=0;i<x;i++)
            for(int j=0;j<y;j++)
                cin>>b[i][j];
    
    // Addition
    cout<<"The Value of A is \n";
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
            cout<<a[i][j]<<"   ";
            cout<<endl;
    }

    cout<<"The Value of B is \n";
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
            cout<<b[i][j]<<"   ";
            cout<<endl;
    }

    for(int i=0;i<r;i++)
            for(int j=0;j<c;j++)
                sum[i][j]=a[i][j]+b[i][j];

    // results
    cout<<"The resltant matrix c is \n ";
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
            cout<<sum[i][j]<<"   ";
            cout<<endl;
    }

    }

    else 
    cout<<"The order of the A matrix is "<<r<<"x"<<c<<"and B have "<<x<<"x"<<y<<" so it cannot add\n";



    return 0;
}