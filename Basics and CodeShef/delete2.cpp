#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[]={0,1,1,2,3,3,4,5};
	int max=*max_element(arr,arr+8);		//to find max element
	int min=*min_element(arr,arr+8);
	bool visited[6];
	char ch='throw';
	memset(visited,ch,1);
	for(int i=0;i<8;i++)
		cout<<arr[i]<<endl;
	for(int i=0;i<6;i++)
		cout<<visited[i]<<endl;
	for (int i=0; i<8; i++)    
        visited[arr[i] - min] = true;
	    for(int i=0;i<8;i++)
			cout<<arr[i];
		for(int i=0;i<6;i++)
			cout<<visited;
			cout<<"end";
	return 0;
}
