/*
Find minimum and maximum element in an array 

Given an array A of size N of integers. Your task is to find the minimum and maximum elements in the array.

 
Example 1:

Input:
N = 6
A[] = {3, 2, 1, 56, 10000, 167}
Output:
min = 1, max =  10000
 

Example 2:

Input:
N = 5
A[]  = {1, 345, 234, 21, 56789}
Output:
min = 1, max = 56789
 

Your Task:
You don't need to read input or print anything. Your task is to complete the function getMinMax() which takes the array A[] and its size N as inputs and returns the minimum and maximum element of the array.

 

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)

 

Constraints:
1 <= N <= 105
1 <= Ai <=1012

*/

#include<iostream>
#include<climits>

using namespace std;

int MinValue(int arr[], int n)
{
    int min = INT_MAX;
    
    for(int i = 0; i<n; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

int MaxValue(int arr[], int n)
{
    int max = INT_MIN;
    
    for(int i = 0; i < n; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    
    for(int i=0; i<n;i++)
    {
        cin >> arr[i];
    }
    
    cout << MaxValue(arr, n) << endl;
    cout << MinValue(arr, n) << endl;
  

    return 0;
}