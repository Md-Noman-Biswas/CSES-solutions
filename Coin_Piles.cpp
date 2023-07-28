#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll a, b;
    cin >> a >> b;
    if(a > b){
        if(b*2 < a){
            cout << "NO" << "\n";
            return;
        }
        if((a+b) % 3 == 0){
            cout << "YES" << "\n";
        }else{
            cout << "NO" << "\n";
        }
    }
    else if(b > a){
        if(a*2 < b){
            cout << "NO" << "\n";
            return;
        }
        if((a+b) % 3 == 0){
            cout << "YES" << "\n";
        }else{
            cout << "NO" << "\n";
        }
    }else{
        if(a == b){
            if(a%2 !=0 && b%2 != 0){
                if(a%3 == 0){
                    cout << "YES" << "\n";
                }
                else{
                    cout << "NO" << "\n";
                }
            }
            else if(a%2 ==0 && b%2 == 0){
                if(a%3 == 0){
                    cout << "YES" << "\n";
                }
                else{
                    cout << "NO" << "\n";
                }
            }
        }
    
    }
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}