#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int arrayUpdate(int a[],int n)
{
	int b[n];
	int temp;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    
    for(int i=0;i<n;i++)
    {
    	temp=n*a[i];
    	if(temp>sum)
    	{
    		b[i]=temp;
		}
		
	}
	cout<<"B array is"<<endl;
	for(int i=0;i<n;i++)
	{
		
		cout<<b[i]<<endl;
		
	}
	cout<<"B array end"<<endl;
	sort(b,b+n);
	int c=b[0];
	cout<<c;
	return 0;
   
}
int main()
{
	int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    arrayUpdate(a,n);
    return 0;
}
