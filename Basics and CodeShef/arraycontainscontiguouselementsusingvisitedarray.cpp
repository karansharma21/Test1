// C++ implementation to check whether the array
// contains a set of contiguous integers
#include <bits/stdc++.h>
using namespace std;
 
// function to check whether the array contains
// a set of contiguous integers
bool areElementsContiguous(int arr[], int n)
{ 
    // Find maximum and minimum elements.
    int max = *max_element(arr, arr + n);
    int min = *min_element(arr, arr + n);
 
    int m = max - min + 1;
 
    // There should be at least m elements in
    // array to make them contiguous.
    if (m > n)
        return false;
     
    // Create a visited array and initialize
    // false.
    bool  visited[m];
    memset(visited, false, sizeof(visited));
 
    // Mark elements as true.
    for (int i=0; i<n; i++)    
       visited[arr[i] - min] = true;
 
    // If any element is not marked, all
    // elements are not contiguous.
    for (int i=0; i<m; i++)
       if (visited[i] == false)
            return false;
 
    return true;
}
 
// Driver program to test above
int main()
{
    int arr[] = { 5, 2, 3, 6, 4, 4, 6, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);
    if (areElementsContiguous(arr, n))
        cout << "Yes";
    else
        cout << "No";
    return 0;
}
