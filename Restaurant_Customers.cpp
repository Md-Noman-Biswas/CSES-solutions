#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    set<pair<int ,int>> ev;
    int q;
    cin >> q;
    while(q--){
        int a, b;
        cin >> a >> b;
        ev.insert(make_pair(a, 1));
        ev.insert(make_pair(b, -1));
    }
    int fin_ans = -1;
    int ans = 0;
    int customer = 0;
    for(auto it: ev){
        customer += it.second;
        fin_ans = max(fin_ans, customer);
    }
    cout << fin_ans << "\n";
    
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}