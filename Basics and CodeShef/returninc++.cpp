#include<iostream>
using namespace std;
int add(int,int);
int main()
{
	int sum=add(3,4);
	cout<<sum;
	
}
int add(int a,int b)
{
	int c=a+b;
	return c;
}
