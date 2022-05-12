// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<long long, long long> getMinMax(long long a[], int n) ;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        pair<ll, ll> pp = getMinMax(a, n);

        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}// } Driver Code Ends


pair<long long, long long> getMinMax(long long a[], int n) {
    
//   long long max = a[0], min = a[0];
   
//   // Here basicly  pair is used to make 2 value together
//   pair< long long, long long> p;
   
//   for(int i = 0; i<n; i++)
//   {
//       if(max<a[i])
//       {
//           max = a[i];
//       }
//       else if(min>a[i])
//       {
//           min = a[i];
//       }
//   }
//   p.first = min, p.second = max;
   
//   return p;
    long long int max = INT_MIN;
    long long int min = INT_MAX;
    
    pair<long long , long long > val;
    
    for(int i = 0; i < n; i++){
        if(max < a[i]){
        max = a[i];
        }
        
        else if(min > a[i]){
            // cout << a[i] << " ";
            min = a[i];
        }
    }
    // cout << min << " " ;
    // cout << max << " ";
    val.first = min, val.second = max;
    
    return val;
}