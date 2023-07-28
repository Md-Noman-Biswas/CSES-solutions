#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    string s;
    cin >> s;
    int freq[100] = {0};
    for(int i=0; i<s.size(); i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            freq[(int)s[i]]++;
        }
    }
    string s1;
    string s2;
    int cnt = 0;
    for(int i=0; i<100; i++){
        if(freq[i] %2 != 0){
            cnt++;
        }
    }
    if(cnt > 1){
        cout << "NO SOLUTION" << "\n"; 
        return;
    }
    for(int i=0; i<100; i++){
        if(freq[i] % 2 == 0){
            int temp = freq[i]/2;
            while(temp--){
                s1.push_back(char(i));
            }
        }
        if(freq[i] % 2 != 0){
            while(freq[i]--){
                s2.push_back((char)i);
            }
        }
    }
    cout << s1 ;
    cout << s2 ;
    reverse(s1.begin(), s1.end());
    cout << s1 << "\n";

}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}