#include<bits/stdc++.h>
using namespace std;
#define ll long long
void printBinary(int n, int range){
    for(int i = range-1; i >= 0; i--){
        cout << (1 & (n>>i));
    }
    cout << "\n";
}
void solve(){
    ll n;
    cin >> n;
    //printBinary(4,5);
    for(int i=0; i<(1<<n); i++){
       ll val = i ^ (i >> 1);
       printBinary(val,n);
    }
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}