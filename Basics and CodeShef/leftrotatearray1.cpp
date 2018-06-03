#include <iostream>
using namespace std;
int main()
{
	int i, temp; 
	int arr[10]={0,1,2,3,4,5,6,7,8,9};
  	temp = arr[0];
  	for (i = 0; i < 9; i++)
     	arr[i] = arr[i+1];
  	arr[i] = temp;
  	for (i=0; i<10 ; i++)
	{
	   cout<<arr[i];
    }
}

