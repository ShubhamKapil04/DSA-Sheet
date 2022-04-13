/*
Given an array A of size N, print the reverse of it.

Input:
First line contains an integer denoting the test cases 'T'.
T testcases follow. Each testcase contains two lines of 
input. First line contains N the size of the array A. 
The second line contains the elements of the array.

Output:
For each testcase, in a new line, print the array in reverse order.

Constraints:
1 <= T <= 100
1 <= N <=100
0 <= Ai <= 100

Example:
Input:
1
4
1 2 3 4
Output:
4 3 2 1
*/

#include<iostream>
#include<algorithm>
using namespace std;

void PrintArray(int arr[], int n)
{
    for(int i = 0;  i < n; i++)
    {
        cout << arr[i] <<" ";
    }
}

void reverseArray(int arr[], int size)
{
    int s = 0;
    int e = size-1;

    while(s<=e)
    {
        swap(arr[s++], arr[e--]);
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n;i++)
        {
            cin >> arr[i];
        }

        reverseArray(arr, n);
        PrintArray(arr, n);

    }
    return 0;
}
