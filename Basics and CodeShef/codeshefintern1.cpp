#include<iostream>
using namespace std;
int function1(int);
int function2(int);
int function1(int a)
{
	if(a==1)
	{
		return 0;
	}
	int returnValue=1;
	returnValue+=function2(a-1);
	
	return returnValue;
}

int function2(int a)
{
	if(a==1)
	{
		return 0;
	}
	int returnValue=2;
	returnValue+=function1(a-1);
	
	return returnValue;
}

int main()
{
	cout<<function1(4);
}


