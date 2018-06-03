#include<iostream>
using namespace std;
#include <stdio.h>
 
void rightRotate(int arr[], int n)
{
   int temp = arr[n-1], i;
   for (i = n-1; i > 0; i--)
      arr[i] = arr[i-1];
   arr[0] = temp;
}

void leftRotate(int arr[], int n)
{
	int temp = arr[0];
	for(int i=0;i<n-1;i++)
		arr[i] = arr[i+1];
	arr[n-1] = temp;
}

void printArray(int arr[], int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i];
	}
}

int main()
{
	int arr[]={0,1,2,3,4,5,6,7,8,9};
	int n = sizeof(arr)/sizeof(arr[0]);
	leftRotate(arr,n);
	cout<<"Left Shift is:"<<endl;
	printArray(arr,n);
	cout<<"\nRight Shift is:"<<endl;  //learnt to line break inside cout
	rightRotate(arr,n);
	printArray(arr,n);
	
	return 0;
}
