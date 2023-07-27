#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll r,c;
    cin >> r >> c;
    if(r == c){
        cout << r*r - (r-1) << "\n";
        return;
    }
    ll ans=0;
    ll temp = max(r,c);
    ll diagonal = temp * temp - (temp - 1);
    if(r > c){
        if(r%2 == 0){
            ans = diagonal + (r-c);
        }else{
            ans = diagonal - (r-c);
        }
    }
    else if(c > r){
        if(c%2 == 0){
            ans = diagonal - (c-r);
        }else{
            ans = diagonal + (c-r);
        }
    }
    cout << ans << "\n";
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}