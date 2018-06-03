#include<bits/stdc++.h>
using namespace std;
int fib(int n)
{
    long long int f1=0,f2=2;
    long long int sum=f1+f2;
    while(f2<=n)
    {
        long long int f3=4*f2+f1;
        if(f3>n)
            break;
        f1=f2;
        f2=f3;
        sum+=f2;
    }
    return sum;
}

int main()
 {
	int t;
        cin>>t;
        while(t--)
        {
            int n;
            cin>>n;
            cout<<fib(n);
            cout<<endl;
        }
	return 0;
}
