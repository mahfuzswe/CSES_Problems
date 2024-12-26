#include<bits/stdc++.h>
using namespace std;


int main(){
    int n; cin >> n; 
    vector<pair<pair<int, int>, int>>customers(n);

    for(int i = 0; i < n; ++i){
        cin >> customers[i].first.first >> customers[i].first.second;
        customers[i].second = i;

    }
    sort(customers.begin(), customers.end());
    vector<int>roomAssigned(n, -1);
    int roomID = 1;

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>rooms;

    for(int i = 0; i < n; ++i){
        if(rooms.size() == 0){
            roomAssigned[customers[i].second] = roomID++;
            rooms.push(make_pair(customers[i].first.second, roomID - 1));
        }
        else{
            if(rooms.top().first < customers[i].first.first){
                roomAssigned[customers[i].second] = rooms.top().second;
                pair<int, int>x = rooms.top();
                rooms.pop();
                rooms.push(make_pair(customers[i].first.second, x.second));
            }
            else{
                roomAssigned[customers[i].second] = roomID++;
                rooms.push(make_pair(customers[i].first.second, roomID - 1));
            }
        }
    }
    cout << roomID - 1 << '\n'; 
    for(int i = 0; i < n; ++i){
        cout << roomAssigned[i] << " ";
    }
    


    return 0;
}