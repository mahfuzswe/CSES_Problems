#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;


signed main(){
    int n; cin >> n;
    set<int>s;
    while(n--){
        int x; cin >> x;
        s.insert(x);
    }    
    cout << s.size() << '\n';
    
    return 0;
}