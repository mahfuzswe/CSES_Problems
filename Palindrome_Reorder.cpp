#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    vector<int>cnt(26);

    for(auto c: s) cnt[c-'A']++;

    int oddCnt = 0;
    for(auto x: cnt) oddCnt += (x % 2);

    if(oddCnt > 1) cout << "NO SOLUTION\n";
    else{
        string fh, sh;
        char od = 0; // odd character
        for(int i = 0; i < 26; i++){
            if(cnt[i] % 2 == 0){
                fh += string(cnt[i] / 2, i + 'A');
            }
            else{
                od = i + 'A';
                fh += string(cnt[i] / 2, i + 'A');
            }
        }

        sh = fh;
        reverse(sh.begin(), sh.end());
        cout << fh;
        if(od) cout << od;
        cout << sh << '\n';
    }

    return 0;
}