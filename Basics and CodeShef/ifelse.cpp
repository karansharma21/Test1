#include <iostream>
using namespace std;

int main() {
	int T,n;
	cin>>T;
	while(T--)
	{ 
	    cin>>n;
	    if(n>5)
	     cout<<"Greater than 5"<<"\n";
	    if(n<5)
	      cout<<"Less than 5"<<"\n";
	    if(n==5)
	    cout<<"Equal to 5"<<"\n";
	    
	}
	
	return 0;
}
