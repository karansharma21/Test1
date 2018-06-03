/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/
#include<iostream>
using namespace std;
int calcSum(int x,int y,int z);

/*  Write your function here */
/* The function should be named calcSum
    and accepts three parameters of integer type
    and returns the sum of the three integers */
int main()
{
    int T;
    cin>>T;
    if(T>=1 && T<=200)
    while(T--)
    {
    	int A,B,C,result;
        cin>>A>>B>>C;
		result = calcSum(A,B,C);
		cout<<"sum is :"<<result<<endl;
    }
 return 0;
 }
 
int calcSum(int x,int y,int z)
{   int sum;
    if(x>=1 && x<=100)
    if(y>=1 && y<=100)
    if(z>=1 && z<=100)
    sum=x+y+z;
    return sum;
}
