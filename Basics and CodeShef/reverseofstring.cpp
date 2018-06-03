#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
	int n,n1;
	char str1[]="Geeksforgeeks";
	string str = "Karan";
	n = str.size();
	for(int i=n-1;i>=0;i--)
		cout<<str[i];
	cout<<endl;
	n1 = strlen(str1);
	cout<<n<<endl;
	cout<<n1<<endl;
	return 0;
}
