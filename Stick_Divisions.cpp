#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"

void solve() {
    ll l, n;
    cin >> l >> n;
    multiset<ll> mySet; 
    for (int i = 0; i < n; i++) {
        ll x;
        cin >> x;
        mySet.insert(x);
    }
    ll cost = 0;
    while (mySet.size() > 1) {
        auto it = mySet.begin();
        ll a = *it;
        mySet.erase(it);
        it = mySet.begin();
        ll b = *it;
        mySet.erase(it);
        cost += (a + b);
        mySet.insert(a + b);
    }
    cout << cost << nl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
