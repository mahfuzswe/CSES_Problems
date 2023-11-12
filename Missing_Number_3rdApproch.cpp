// Optimal Solution

#include<bits/stdc++.h>
using namespace std;

#define int long long

int32_t main(){
    int n; cin>>n;
    int sum = (n*(n+1))/2;    // O(1)
    for(int i=0; i<n-1; i++){ // O(n)
        int x; cin>>x;
        sum -= x;
    }
    cout<<sum<<'\n';

    return 0;
}

// Time Complexity: O(n)