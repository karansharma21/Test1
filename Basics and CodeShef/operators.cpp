#include <iostream>
#include <cmath>
using namespace std;
int T,a,b;
int main() 
{
	//code
	cin>>T;
	while(T--)
	 {
	  	cin>>a>>b;
	  	if((a>0 && a<=1000) && (b>0 && b<=1000))
		{
		    cout<<a+b<<endl;
	        cout<<abs(a-b)<<endl;
	        if(a>b){
	  		cout<<a/b<<endl;}
	  		else{
	  		cout<<b/a<<endl;}
	  		cout<<a*b<<endl;
	    }
	 }
	return 0;
}
