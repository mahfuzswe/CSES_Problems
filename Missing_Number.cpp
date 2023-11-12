#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    n--;
    vector<int>v(n);

    for(int i =0; i<n; i++){
        cin>>v[i];
    }

    sort(v.begin(), v.end());

    if(n==1){
        if(v[0]==2) cout<<1<<'\n';
        else cout<<2<<'\n';
    }
    else{
        for(int i=0; i<n; i++){
        if(v[i+1]!=v[i]+1){
            cout<<v[i]+1<<'\n';
            break;
        }
    }
    }

    return 0;
}

// Time Complexity: O(n log n)