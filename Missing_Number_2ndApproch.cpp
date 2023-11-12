#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    set<int>s;

    for(int i=1; i<=n; i++){
        s.insert(i);
    }

    for(int i=0; i<n-1; i++){
        int x; cin>>x;
        s.erase(x);
    }

    cout<<*s.begin()<<'\n';

    return 0;
}

// Time Complexity: O(n log n) 
