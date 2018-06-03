#include<iostream>
using namespace std;

int main()
{
	int answer=0;
	for(int i=1;i<=10;i++)
	{
		if(i%2==1)
		{
			continue;	
		}
		if(i%3==0)
		{
			answer+=(2*i);
		}
		else
		{
			answer+=i;
		}
	}
	cout<<answer;
}


