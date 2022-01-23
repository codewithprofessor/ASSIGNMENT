/*
Q9: Write a program that takes a string of characters (in character array) from the user
 (including white spaces) and then tells the user which of the character appears highest times.
Examples:
Input: Mohammad Ali Jinnah
Output: a appears highest (4) times.
*/
#include<iostream>
using namespace std;

int main()
{
    // code by ali
    char a[200],b;
    int i=0,count,sum=0;
    cout<<"Etner the Character \n";
    cin.getline(a,200);
    while(a[i]!=0)
    {
        if(a[i]<=90 && a[i]>=65)
        {
            a[i]+=32;
        }
        i++;
    }
    for(int k=0;k<=i;k++)
    {
        count=0;
        for(int j=k+1;j<=i;j++)
        {
            if(a[k]==a[j] && a[i]!=32)
            {
                count++;
            }

        }
        if(sum<count)
        {
            sum=0;
            sum=count;
            b=a[k];
        }
    }
    cout<<b<<"  appears highest ("<<sum+1<<") times."<<endl;
    return 0;
}