#include<iostream>
using namespace std;

int main()
{
    // code by ali

    int r,c,x,y;

     cout<<"Enter the limt of A matrix for rows  : ";
    cin>>r;
    cout<<"Enter the limt of B matrix for coulms  : ";
    cin>>c;

    int **a =new int *[r];
    for(int i=0;i<r;i++)
        a[i] =new int [c];
    
    cout<<"Enter the limt of 2nd matrix for rows  : ";
    cin>>x;
    cout<<"Enter the limt of 2nd matrix for coulms  : ";
    cin>>y;

    int **b=new int *[x];
    for(int i=0;i<x;i++)
        b[i]=new int [y];
    
    if(c==x)
    {
         cout<<"The order of the A matrix is "<<r<<"x"<<c<<"and B have "<<x<<"x"<<y<<"\n";

         int **pro=new int *[r];
         for(int i=0;i<r;i++)
            pro[i]=new int[y];

        cout<<"Enter the value of A is \n";
        for(int i=0;i<r;i++)
            for(int j=0;j<c;j++)
                cin>>a[i][j];
        cout<<"Enter the value of B \n";
        for(int i=0;i<x;i++)
            for(int j=0;j<y;j++)
                cin>>b[i][j];


        cout<<"The value of A is \n";
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            cout<<a[i][j]<<"  ";
            cout<<endl;
        }
        cout<<"The value of A is \n";
        for(int i=0;i<x;i++)
        {
            for(int j=0;j<y;j++)
            cout<<b[i][j]<<"  ";
            cout<<endl;
        }

        // multiplication

        for(int i=0;i<r;i++)
            for(int j=0;j<y;j++)
            {
                pro[i][j]=0;
                for(int k=0;k<c;k++)
                pro[i][j]= pro[i][j]+a[i][k]*b[k][j];
            }
        
        cout<<"The value of C(product) is \n";
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<y;j++)
            cout<<pro[i][j]<<"  ";
            cout<<endl;
        }
        cout<<"The order of C is "<<r<<"x"<<y<<endl;
    }
    else 
        cout<<"The order of the A matrix is "<<r<<"x"<<c<<"and B have "<<x<<"x"<<y<<" so it cannot Multiply\n";

    return 0;
}