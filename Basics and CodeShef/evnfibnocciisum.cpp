#include <iostream>
using namespace std;
// Print the sum of all the even valued terms in the fibonacci sequence less than or equal to given N. Print the answer for each test case in a new line.
#define ll unsigned long long


int main() {
	ll T,N,temp;
	cin>>T;
	while(T--)
	{
	    cin>>N;
	    static ll *array = new ll[N+1];
	    static ll sum=0;
	    ll a=0;
	    ll b=1;
	    for(int i=1;i<=N;i++)
	    {
	        
			array[i]=b;
	        temp=a+b;
	        a=b;
	        b=temp;
	        if(array[i]>N)
	        {
	        	break;
			}
			if(array[i]%2==0)
			{
				sum=sum+array[i];
			}
	    }
	    cout<<"Sum is:"<<sum<<endl;
	    sum=0;
	}
	
	return 0;
}
