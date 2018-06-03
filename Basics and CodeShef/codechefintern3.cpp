#include<iostream>
using namespace std;

int CrazyNumber(int a)
{
	if(a<=1)
	{
		return 1;
	}
	if(a%2==0)
	{
		return ( 3 + CrazyNumber(a/2));
	}
	
	return (1 + CrazyNumber(a-1/2));
}



int main()
{
	cout<<CrazyNumber(19);
}
	
