#include<iostream>
using namespace std;
int main()
{
	int T,a,b,c,d;
	cin>>T;
	while(T--)
	{
		cin>>a>>b>>c>>d;
		if(a==b && c==d)
		{
			cout<<"YES"<<endl;
		}
		else if(a==c && b==d)
		{
			cout<<"YES"<<endl;
		}
		else if(a==d && b==c)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
		
	}
	return 0;
}
