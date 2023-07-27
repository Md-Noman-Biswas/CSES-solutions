#include<bits/stdc++.h>
using namespace std;
void solve(){
    long n;
    cin >> n;
    long cnt = 0;
    for(int i=5; (n/i)>=1; i*=5){
        cnt += (n/i);
    }
    cout << cnt << "\n";
}
int main(){
    solve();
}