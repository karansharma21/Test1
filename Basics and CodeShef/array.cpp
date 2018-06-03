#include <iostream>
using namespace std;
int main()
{
    int sum=0;
    int a[1000];
    int T,n;
    cin>>T;
	if(T>=1 && T<=100)
	while(T--)
	{
		cin>>n;
    	for(int i=0;i<n;i++)
    	{
    	    cin>>a[i];
    	    sum=sum+a[i];
        }
        cout<<"sum is :"<<sum<<endl;
    }
    	    
    return 0;
}
