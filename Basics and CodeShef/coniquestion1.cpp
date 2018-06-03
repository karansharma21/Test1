// EVEN-ODD Array in KonyLabs. 
#include<iostream>
using namespace std;
int main()
{
	static int j=0;
	int arr[] ={4,15,16,5,18,17,1};
	int beg=0;
	int end=6;
	int *result=new int[8]; 
	while(beg<end)
	{
		for(int i=0;i<7;i++)
		{
			if(arr[i]%2==0)
			{
				result[beg]=arr[i];
				beg++;
			}
			else
			{
				result[end]=arr[i];
				end--;
			}	
		}
}
	for(int i=0;i<7;i++)
	{
		cout<<result[i]<<endl;
	}
	return 0;
}
