#include<iostream>
using namespace std;
int main()
{
    unsigned char a = 5, b = 9; // a = 5(00000101), b = 9(00001001)
    cout<<a<<endl;
    cout<<b<<endl;
    int c=a&b;
    cout<<c<<endl; // The result is 00000001
    c=a|b;  // The result is 00001101
    cout<<c<<endl;
    c=a^b; // The result is 00001100
    cout<<c<<endl;
    c=~a;   // The result is 11111010
    cout<<c<<endl;
    c=b<<1;
	cout<<c<<endl;  // The result is 00010010 
    c=b>>1;  // The result is 00000100 
    cout<<c<<endl;
    return 0;
}
