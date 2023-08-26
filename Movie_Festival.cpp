#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool cmp(pair<int, int> a, pair<int, int> b){
    if(a.second != b.second) return a.second < b.second;
    else return a.first < b.first;
}


void solve(){
    vector<pair<int ,int>> ev;
    int q;
    cin >> q;

    while(q--){
        int a, b;
        cin >> a >> b;
        ev.push_back(make_pair(a, b));
    }
    
    sort(ev.begin(), ev.end(), cmp);
    
    int n = ev.size();
    int cnt = 0;
    int temp = -1;
    int i = 0;
    while(i < n){
        if(ev[i].first >= temp){
            cnt++;
            temp = ev[i].second;
        }
        i++;
    }
    cout << cnt << "\n";
}


signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}