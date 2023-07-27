#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll binExpIter(int a, long long b, int m){
    ll ans = 1;
    while(b){
        if(b&1){
            ans = (ans * 1LL * a) % m;
        }
        a = (a * 1LL *a) % m;
        b = b >> 1;
    }
    return ans;
}
void solve(){
    ll n; 
    cin >> n;
    cout << binExpIter(2, n, 1e9 + 7) << "\n";
}
int main(){
    solve();
}