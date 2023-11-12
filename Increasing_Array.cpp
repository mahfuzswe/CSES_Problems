// Increasing Sequence:
/*
    A sequence where each element is max so far
*/

#include<bits/stdc++.h>
using namespace std;

#define int long long

int32_t main(){
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    // calcualting the minimum number of moves 
    int mx = -1;
    int output = 0;
    for(int i=0; i<n; i++){
        if(arr[i]<mx) output += mx - arr[i];
        else mx = max(mx, arr[i]);
    }
    cout<<output<<'\n';
    
    return 0;
}

// Time Complexity: O(n)