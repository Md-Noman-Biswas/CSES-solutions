#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin >> n;
    ll sum = (n*(n+1)/2);
    vector<ll> arr(n);
    ll sum2 = 0;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        sum2 += arr[i];
    }
    cout << sum - sum2 << "\n";
}
int main(){
    solve();
}