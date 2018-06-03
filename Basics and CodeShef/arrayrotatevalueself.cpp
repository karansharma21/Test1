#include<iostream>
using namespace std;
void rotate(int arr[],int n)
{
	int i;
	int arr1[n];
	int sum=0;
	int x= arr[n-1];
	for(i=n-1;i>0;i--)
	{
		arr[i]=arr[i-1];
	}
	arr[0]= x;
	for(i=0;i<n;i++)
	{
		sum=sum+i*arr[i];
	}
	cout<<sum<<endl;
	
}

void numberRotate(int arr[],int n,int d)
{
	for(int i=1;i<=d;i++)
	{
		rotate(arr,n);
	}
	
}

void printArray(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i];
	}
}


int main()
{
	int d,n;
	
	int arr[]={1,2,3,4,5,6,7};
	n = sizeof(arr)/sizeof(arr[0]);
	numberRotate(arr,n,n+1);
	
	return 0;
}

//arr1[n]=sum; int arr1[n];
//	for(int i=0;i<n;i++)
//	{
//		cout<<"array is"<<endl;
//		cout<<arr[i]<<endl;
//	}
