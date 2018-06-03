#include<bits/stdc++.h>
using namespace std;
int index[5];
int main()
{
int a[5],b[3];
cout<<"Enter 5 numbers in a"<<endl;
for(int i=0;i<5;i++)
{
	cin>>a[i];
}
cout<<"Select any 3 numbers in b"<<endl;
for(int i=0;i<3;i++)
	{
		cin>>b[i];
		for(int j=0;j<5;j++)
		{
			if(a[j]==b[i] && index[j]==0)
			{
				index[j]=1;
				break;
			}
		}
	}
cout<<"Remaining 2 numbers in array a are: "<<endl;
for(int i=0;i<5;i++)
{
	if(index[i]==0)cout<<a[i]<<" ";
}
}
