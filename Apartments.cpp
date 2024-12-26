#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;



signed main(){
    int n, m, k;
    cin >> n >> m >> k;

    int sizeLagbe[n];
    int sizeAche[m];

    for(int i = 0; i < n; ++i) cin >> sizeLagbe[i];
    for(int j = 0; j < m; ++j) cin >> sizeAche[j];

    sort(sizeLagbe, sizeLagbe+n);
    sort(sizeAche, sizeAche+m);

    int i = 0, j = 0;
    int ans = 0;
    while(i < n and j < m){
        if(sizeAche[j] >= sizeLagbe[i]-k and sizeAche[j] <= sizeLagbe[i]+k){
            ans++;
            i++, j++;
        }
        else if(sizeAche[j] < sizeLagbe[i]-k) j++;
        else i++;
    }
    cout << ans << '\n';
    
    return 0;
}