#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    string s;
    cin >> s;
    int cnt = 0;
    int max_cnt = -1;
    //cout << s.size();
    for(int i=0; i<s.size(); i++){
        if(s[i] == s[i+1]){
            cnt++;
        }else{
            max_cnt = max(cnt, max_cnt);
            cnt = 0;
        }
        //cout << max_cnt << "\n";
    }
    cout << ++max_cnt << "\n";
}
int main(){
    solve();
}