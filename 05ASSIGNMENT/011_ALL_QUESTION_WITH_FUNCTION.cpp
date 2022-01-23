/*
Q1: Write a program that takes a string of characters (in character array) from the user (assuming there are no white
 spaces entered) and then tells the user if the string entered is a palindrome or not.
Like aba, aabbaa is a palandrom, aab, babaa is not a palendrom.

Q2: Write a program that takes a string of characters (in character array) from the user (including white 
spaces) and then tells the user how many doubles (when two similar (not three) character
 appears at contiguous location) in the array.
Example:
Input:  Hello its ieee conference. See it. A99accc.
Output: 3 doubles are in array
Note: ieee and ccc is not included in doubles because there are three similar characters at contiguous location, 
ll in hello, ee in see and 99 in a99accc are doubles.

Q3: Write a program that takes a string of characters (in character array) from the user (including 
white spaces) and then asks a single character from user. You have to count how many 
times that single character appears in array.
Example:
Input: (Arrray)—Hello dear how are you?
Single character—o
Output: O appears 3 times.

Q4: Write a program that takes a string of characters (in character array) from the user (assuming there 
are no white spaces entered) and then tells the user how many characters are in the array.
Example:
Input: hellodearhowru
Output:9

Q5: Write a program that takes a string of characters (in character array) from the user (including white spaces) 
and then counts total no. of words in array. 
Example:
Input: Hello it’s my array program
Output: 5

Q6: Write a program that takes a string of characters (in character array) from the user (including white spaces) 
and then tells the user how many tripples (when three similar (not four) character appears at contiguous location) in the array.
Example:
Input:  Hellllo its ieee conference. Seee it. A9999accc.
Output: 3 triples are in array
Note: llll and 9999 is not included in triples because there are four similar characters at 
contiguous location, eee in ieee, eee in seee and ccc in a9999accc are triples.

Q7: Write a program that takes a string of alphabets (in character array) from the user (assuming 
there are no white spaces entered) and then convert all the alphabets into lower or upper case without
 using any built in function.

Q8: Write a program that takes a string of characters (in character array) from the user (assuming there are no 
white spaces entered) and then sort the array in descending or ascending order.

Q9: Write a program that takes a string of characters (in character array) from the user (including white spaces) 
and then tells the user which of the character appears highest times.
Examples:
Input: Mohammad Ali Jinnah
Output: a appears highest (4) times.

Q10: Write a program that reads a character and an integer n from user and prints entered character n times.
*/
#include<iostream>
using namespace std;

void question1();
void question2();
void question3();
void question4();
void question5();
void question6();
void question7();
void question8();
void question9();
void question10();

int main()
{
    // code by ali
    //    in the main function i juct call the functions in my code 
    question1();
    question2();
    question3();
    question4();
    question5();
    question6();
    question7();
    question8();
    question9();
    question10();    
    return 0;
}

// question 01
void question1()
{
    char a[200];
	bool flag = true;
	int i=0,j=0;
	cout<<"Please Enter the Stirng\n";
	cin.getline(a,200);
	while(a[i]!=0)
	i++;
	i--;
	while (j<i)
	{
	    if(a[i]==a[j])
	    {
	        i--;
	        j++;
	    }
	
	    else 
	    {
	    	flag = false;
	    	break;
	    }
	}
	if (flag==true)
	cout<<"It is palendrom"<<endl;
	else
	cout<<"It is not a palendrom"<<endl;
}

// question 02
void question2()
{
    char a[200];
    int i=0,count=0;
    cout<<"Etner the String \n";
    cin.getline(a,200);
    while(a[i]!=0)
    {
        if(a[i]==a[i+1]&&a[i+1]!=a[i+2]&&a[i-1]!=a[i])
        {
            count++;
        }
        i++;
    }
    cout<<count<<" doubles are in array"<<endl;
}

// question 03
void question3()
{
    char a[200],b;
    int i=0,count=0;
    cout<<"Enter a String\n";
    cin.getline(a,200);
    cout<<"Which Charecter You want to Search   : ";
    cin>>b;
    while(a[i]!=0)
    {
        if(a[i]==b || a[i]+32==b || a[i]-32==b)
        {
            count++;
        }
        i++;
    }
    cout<<b<<" appears "<<count<<" times."<<endl;
}

// question 04
void question4()
{
    char a[200];
    int i=0,count,sum=0;
    cout<<"Enter the String With No spaces\n";
    cin>>a;            //(assuming there are no white spaces entered)
    while(a[i]!=0)
    {
        for(int j=i+1;j<=200;j++)
        {
            count=0;
            if(a[i]==a[j])
            {
                count++;
            }
            sum+=count;
        }
        i++;
    }
    cout<<"Output "<<i-sum<<endl;
}

// question 05
void question5()
{
    char a[200];
    int i=0,count=0;
    cout<<"Enter the String\n";
    cin.ignore();
    cin.getline(a,200);
    while (a[i]!=0)
    {
        if(a[i]==32 && a[i-1]!=32)
        {
            count++;
        }
        i++;
    }
    cout<<"Output : "<<count+1<<endl;
}

// question 06
void question6()
{
    char a[200];
    int i=0,count=0;
    cout<<"Enter the String "<<endl;
    cin.getline(a,200);
    while(a[i]!=0)
    {
        if(a[i]==a[i+1] && a[i+1]==a[i+2] && a[i+2]!=a[i+3] && a[i-1]!=a[i])
        {
            count++;
        }
        i++;
    }
    cout<<"Output: "<<count<<" triples are in array"<<endl;   
}

// question 07
void question7()
{
    char a[200];
    int i=0;
    cout<<"Etner the String\n";
    cin.getline(a,200);
    while(a[i]!=0)
    {
        if(a[i]<=122 && a[i]>=97)
        {
            a[i]-=32;
        }
        i++;
    }
    cout<<"\nUpercase \n"<<a<<endl;
    i=0;
    while(a[i]!=0)
    {  
        if(a[i]<=90 && a[i]>=65)
        {
            a[i]+=32;
        }
        i++;
    }
    cout<<"\nLowercase \n"<<a<<endl;
}

// question 08
void question8()
{
    char a[200];
    char c[200];
    int i=0;
    cout<<"Etner the String of Characters\n";
    cin.getline(a,200);
    while(a[i]!=0)
    {
        if(a[i]<=90 && a[i]>=65)
        {
            a[i]+=32;
        }
        i++;
    }
    for(int j=0;j<=i;j++)
    {
        for(int k=j+1;k<i;k++)
        {
            if(a[j]>a[k])
            {
                char b=a[j];
                a[j]=a[k];
                a[k]=b;
            }
        }
    }
    cout<<"\t\tASCEDNING ORDER IS \n"<<endl;
    cout<<a<<endl;
    for(int j=0;j<=i;j++)
    {
        for(int k=j+1;k<i;k++)
        {
            if(a[j]<a[k])
            {
                char b=a[j];
                a[j]=a[k];
                a[k]=b;
            }
        }
    }
    cout<<"\t\tDESCEDNING ORDER IS \n"<<endl;
    cout<<a<<endl;
}

// question 09
void question9()
{
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
}

// question 10
void question10()
{
    char a;
    int n;
    cout<<"Etner the Character : ";
    cin>>a;
    cout<<"Enter the Integer : ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<a<<" ";
    }
}