// Binary Search based C++ program to find number
// of rotations in a sorted and rotated array.
#include<bits/stdc++.h>
using namespace std;
 
// Returns count of rotations for an array which
// is first sorted in ascending order, then rotated
int countRotations(int arr[], int low, int high)
{
    // This condition is needed to handle the case
    // when array is not rotated at all
    if (low<high)
	{
	    if (arr[low]<arr[high])
			return low;
	 
	    // If there is only one element left
	    if (arr[low] == arr[high])
	        return low;
	 
	    // Find mid
	    int mid = (low + high)/2;
	 
	    // Check if element (mid) is minimum element.
	    // Consider the cases like {4,5,1,2,3}
	    if (arr[mid+1] > arr[mid]  && arr[mid] < arr[mid - 1])
	       return (mid);
	 
	    // Decide whether we need to go to left half or
	    // right half
	    if (arr[high] > arr[mid])
	       return countRotations(arr, low, mid-1);
	 
	 
	 
	    return countRotations(arr, mid+1, high);
	}
	
	return -1;
}
 
// Driver code
int main()
{
    int arr[] = {11,12,15,1,3,5,8,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int result= countRotations(arr, 0, n-1);
	(result == -1)? printf("check array index initial and last parameters in main")
                 : printf("Element is present at index %d", result);
    return 0;
}
