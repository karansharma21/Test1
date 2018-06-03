#include<iostream>
using namespace std;
#include<bits/stdc++.h>
// A utility function to swap two elements
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void printArray(int arr[],int n)
{
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}

int rearrange(int arr[],int n)
{
	// Now all positive numbers are at end and negative numbers
    // at the beginning of array. Initialize indexes for starting
    // point of positive and negative numbers to be swapped
    int index=0;
    for(int i=0;i<n;i++)
    {
    	if (arr[i]>0)
    	{
		index=i;
		break;
	    }
	}
	
	cout<<"Value of index is:"<<endl;
 	cout<<index<<endl;
	
	int pos = index, neg = 0;
 
    // Increment the negative index by 2 and positive index by 1,
    // i.e., swap every alternate negative number with next 
    // positive number
    while (pos < n && neg < pos && arr[neg] < 0)
    {
        swap(arr[neg], arr[pos]);
        pos++;
        neg += 2;
    }
}
 
int main()
{
	int arr[]={5,-3,-6,-1,2,-9};
	int n=sizeof(arr)/sizeof(arr[0]);
	sort(arr,arr+n);
	printArray(arr,n);
	rearrange(arr,n);
	printArray(arr,n);
}



/*Remember, functions can return only ONE value. Until now it was impossible to change two different non-array values within a function and return both values to main( ). 

By Reference:
We can now swap two variables, by using the addresses of the variables from within the function.  When the function reverses the values, main( ) will also recognize the changes. 

#include <iostream.h>

void swap(int &num1, int &num2);

int main(void)
{
     int a=10,bj=20;
     cout<< "Before the swap, a is " << a << " and b is " << b << "."<< endl;
     swap(a,b);
     cout<< "After the swap, a is " << a << " and b is " << b << "."<< endl;
     return 0;
}

//-------------- Function to reverse two values ----------------------------------------
void swap(int &num1, int &num2)    // receiving addresses not values
{
     int temp;     // temporary holding variable

     temp = num1;
     num1 = num2;
     num2 = temp;

     return;     // main( )'s variables, not copies of them, have been changed
}
By Pointers:
Let's try this same swapping process using pointers instead of addresses.


#include <iostream.h>
void p_swap(int *pNum1, int *pNum2);
int main(void)
{
     int a=10, b=20;
     cout<< "Before the swap, a is " << a << " and b is " << b << "."<< endl;
     p_swap(&a, &b);    //pass the addresses
     cout<< "After the swap, a is " << a << " and b is " << b << "."<< endl;
     return 0;
}

//-------------- Function to reverse two values -----------------------------------------
void p_swap(int *pNum1, int *pNum2)    // receiving addresses not values
{
     int temp;    // temporary holding variable

     temp = *pNum1;    // swap the values stored at the addresses
     *pNum1 = *pNum2;
     *pNum2 = temp;

     return;     // main( )'s variables, not copies of them, have been changed
}

 
*/
