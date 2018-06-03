#include<iostream>
using namespace std;
int main()
{
	string q="Karan";
	cout<<q[1]<<endl;
	int a;
	a=10;
	int *ptr=&a;
	cout<<"start"<<endl;
	cout<<*ptr<<endl;
	cout<<&ptr<<endl;
	cout<<ptr<<endl;
	cout<<"after"<<endl;
	*ptr=30;
	cout<<*ptr<<endl;
	cout<<&ptr<<endl;
	cout<<ptr<<endl;				/*	int b=-2%4;
							cout<<b; 		OUTPUT== -2
							*/
	return 0;
	
}

/* 

ptr is the pointer itself.
*ptr is the value it points to.
&ptr is the address of the pointer.

So IOW,

&a is the memory location where a is stored.

a is the memory location where *a is stored.

*/

