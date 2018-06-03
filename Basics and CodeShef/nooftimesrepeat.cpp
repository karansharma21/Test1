#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int count(int x[],int n)
{
	int i=0;
	int j=0;
	int count=0;
	while(i<n)
	{
		
		while(x[i]==x[j])
		{
		
			count++;
			j++;
		}
		cout<<endl;
		cout<<"number of times ";
		cout<<x[i];
		cout<<" ";
		cout<<"repeated is ";
		cout<<count;
		cout<<endl;
			
		i=j;
		j=i+1;
		count =1;
		
	}
	return 0;
}
int main()
{
	int n;
	cin>>n;
	int x[n];
	for(int i=0;i<n;i++)
	{
		cin>>x[i];
	}
	cout<<endl;
	cout<<"original array is: ";
	for(int i=0;i<n;i++)
	{
		cout<<x[i]<<" ";
	}
	cout<<endl;
	sort(x,x+n);
	cout<<"Sorted array is : ";
	for(int i=0;i<n;i++)
	{
		cout<<x[i]<<" ";
	}
	count(x,5);
	return 0;
	
	
		
}
