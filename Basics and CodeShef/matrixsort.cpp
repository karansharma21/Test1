#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N,P;
	cin>>N;
	int mat[N][N];
	int arr[N*N];
	/* for(int i=0;i<N*N;i++)
	{
		cin>>arr[i];	
	}
	sort(arr,arr+N*N);*/
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		{
			cin>>mat[i][j];	
		}
		
	}
	
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		{
			cout<<mat[i][j];
		} 
		
		cout<<endl;
	}
	
	return 0;
}
