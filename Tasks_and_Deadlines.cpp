#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"

bool cmp(pair<int, int> p1, pair<int, int> p2){
    if(p1.first == p2.first) return p1.second < p2.second;
    return p1.first < p2.first; 
}


void solve(){
    ll n;
    cin >> n;
    vector<pair<int, int>> arr;
    while(n--){
        int x, y;
        cin >> x >> y;
        arr.push_back(make_pair(x, y));
    }
    sort(arr.begin(), arr.end(), cmp);
    ll cost = 0;
    ll time = 0;
    for(auto it: arr){
        time += it.first;
        cost += it.second - time;
    }
    cout << cost << nl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}