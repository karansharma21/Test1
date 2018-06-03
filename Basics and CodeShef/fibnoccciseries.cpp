//Print the first n fibonacci numbers with a space between each number. Print the answer for each test case in a new line.
#include <iostream>
using namespace std;
#define ll unsigned long long 
int main() {
	//code
	ll T,N,temp;
	cin>>T;
	while(T--)
	{
	    cin>>N;
	    ll a=0;
	    ll b=1;
	    for(int i=0;i<N;i++)
	    {
	        cout<<b;
	        cout<<" ";
	        temp=a+b;
	        a=b;
	        b=temp;
	    
		}
		
		cout<<endl;
	}
	
	return 0;
}
