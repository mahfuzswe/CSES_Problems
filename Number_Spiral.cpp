#include<bits/stdc++.h>
using namespace std;
#define int long long

int answer(int x, int y){
    int mx = max(x, y);
    if(mx % 2 == 0){
        if(y == 1) return (mx * mx);
        if(x < mx) return answer(mx, mx) - (mx - x);
        if(x == mx) return (mx * mx) - (y - 1);
    }
    else{
        if(x == 1) return mx * mx;
        if(y < mx) return answer(mx, mx) - (mx - y);
        if(y ==  mx) return (mx * mx) - (x - 1);
    }
}

void mahfuzswe(){
    int x, y; cin >> x >> y;
    cout << answer(x, y) << '\n';
}

signed main(){
    int t; cin >> t;
    while(t--){
        mahfuzswe();
    }

    return 0;
}