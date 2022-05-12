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
using namespace std;

void reverse(int arr[], int n){

    int s = 0;
    int e = n-1;

    while(s <= e){
        int temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;
        e--;
        s++;
    }
}

void print(int arr[], int n){

    for(int i = 0; i < n; i++){
        cout << arr[i] <<" ";
    }
    cout << endl;
}

int main()
{
    int n ;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "Before Reversing the array --> ";
    print(arr, n);

    reverse(arr, n);

     cout << "After Reversing the array --> ";
    print(arr, n);

    return 0;
}