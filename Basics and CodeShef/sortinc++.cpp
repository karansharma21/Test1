// C++ program to demonstrate descending order sort using
// greater<>().
#include <bits/stdc++.h>
using namespace std;

bool rvrse(int i,int j)
{
	return j;
}

bool ascending(int i,int j)
{
	return (i<j);
}

bool descending(int i,int j)
{
	return (j<i);
}
int main()
{
    int arr[] = {1, 5, 8, 9, 6, 7, 3, 4, 2, 0};
    int n = sizeof(arr)/sizeof(arr[0]);
 
    
 	sort(arr, arr+n,rvrse);					//sort(arr+starting index,arr+sizeofarray/lastindex+1,optionalmethod)  sort[a,b)
    cout << "Reverse of input array using self comparatator function : \n";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
	cout<<endl;
	
    sort(arr,arr+n,ascending);
    cout << "Array sorting in ascending order using self comparatator function : \n";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout<<endl;
    
	sort(arr,arr+n,descending);
    cout << "Array sorting in descending order using self comparatator function : \n";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout<<endl;
    
	sort(arr,arr+n,greater<int>());
    cout << "Array sorting in descending order using default function: \n";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
	cout<<endl;
	
	sort(arr,arr+n);
    cout << "Array sorting in ascending order using default function: \n";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
	return 0;
}

