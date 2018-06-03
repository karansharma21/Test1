#include<iostream>
using namespace std;
int main()
{
	int a;
	int b=1;
	cin>>a;
	for(int i=1;i<=a;i++)
	{
		for(int j=a;j>i;j--)
		{
			cout<<" ";
		}
		for(int k=1;k<=b;k++)
		{
			cout<<"*";
		}
		b=b+2;
		cout<<endl;
	}
	return 0;
}
