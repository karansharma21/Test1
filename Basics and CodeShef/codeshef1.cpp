#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T,N;
	int a[N*N];
	cin>>T;
	while(T--)
	{	
		cin>>N;
		{
			for(int i=0;i<N*N;i++)
			{
				cin>>a[i];	
			}
					
		}
		for(int i=0;i<N*N;i++)
		{
			cout<<a[i];
		}
	}
	
	return 0;
}
