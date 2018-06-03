#include<iostream>
using namespace std;
int search(int mat[3][3],int n,int x)
{
	int i=0;
	int j=n-1;
	while(i<n && j>=0)
	{
	
		if(mat[i][j] == x)
		{
			cout<<i;
			cout<<",";
			cout<<j;
			return 1;
		}
		else if (mat[i][j]>x)
		{
			j--;
		}
		else
		{
			i++;	
		}
		
	}
	return 0;
}
int main()
{
	int mat[3][3]={{10,20,30},{15,25,35},{27,29,39}};
	search(mat,3,29);
	return 0;
	
}
