#include<bits/stdc++.h>
using namespace std;


int main(){
    cin.tie(0) -> ios_base::sync_with_stdio(0);

    int x, n;
    cin >> x >> n;

    set<int>positions;
    multiset<int>lengths;

    positions.insert(0);
    positions.insert(x);

    lengths.insert(x - 0);

    for(int i = 0; i < n; ++i){
        int added;
        cin >> added;
        positions.insert(added);
        auto itr = positions.find(added);
        int previousVal = *prev(itr);
        int nextVal = *next(itr);
        lengths.erase(lengths.find(nextVal - previousVal));
        lengths.insert(added - previousVal);
        lengths.insert(nextVal - added);

        cout << *lengths.rbegin() << ' ';
    }
    cout << '\n';

    return 0;
}