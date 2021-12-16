/*
Q1: Write a program that reads n integer from user and print the output according to following 
pattern.
For input 5 output should be	and for input 7 output should be
1	2	3	4	5			1	2	3	4	5	6	7
2	3	4	5	1			2	3	4	5	6	7	1
3	4	5	1	2			3	4	5	6	7	1	2
4	5	1	2	3			4	5	6	7	1	2	3
5	4	3	2	1			5	6	7	1	2	3	4
							6	7	1	2	3	4	5
							7	1	2	3	4	5	6

*/                            
#include<iostream>
using namespace std;

int main()
{
    // code by ali
    int n;
    cout<<"Enter the integer\n";
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<i+n;j++)
        {
            cout<<(j%n)+1<<"  ";
        }
        cout<<endl;
    }
    return 0;
}