#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;

// first negative number in every window



signed main(){
    int n; cin >> n;
    vector<int>arr(n);
    for(int i = 0; i < n; ++i) cin >> arr[i];

    int k; cin >> k;
    vector<int>ans;
    list<int>l;

    int i = 0, j = 0;
    while(j < n){
        if(arr[j] < 0) l.push_back(arr[j]);

        if(j-i+1 < k) j++;
        else if(j-i+1 == k){
            if(l.size() == 0) ans.push_back(0);
            else ans.push_back(l.front());

            if(arr[i] < 0) l.pop_front();
            i++;
            j++;
        }
    }

    for(auto u: ans) cout << u << ' ';
    cout << '\n';
    
    return 0;
}