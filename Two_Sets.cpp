#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin >> n;
    ll sum = n*(n+1)/2;
    if(sum % 2 != 0){
        cout << "NO" << "\n";
    }else{
        vector<int> s1;
        vector<int> s2;
        if(n%2 == 0){
            /*
            n->8
                    1 2 3 4 5 6 
            index   0 1 2 3 4 5
            */
            for(int i=0; i<n/2; i++){
                if(i%2 == 0){
                    s1.push_back(i+1);
                    s1.push_back(n-i);
                }else{
                    s2.push_back(i+1);
                    s2.push_back(n-i);
                }
            }
        }else{
            /*
            n->7
                    1 2 3 4 5 6 7
            index   0 1 2 3 4 5 6 
            */
            for(int i=0; i<(n-1)/2; i++){
                if(i%2 == 0){
                    s1.push_back(i+1);
                    s1.push_back((n-1)-i);
                }else{
                    s2.push_back(i+1);
                    s2.push_back((n-1)-i);
                }
            }
                if(s1.size() < s2.size()){
                s1.push_back(n);
            }else{
                s2.push_back(n);
            }
        }
        cout << "YES" << "\n";
        cout << s1.size() << "\n";
        for(auto it: s1){
            cout << it << " ";
        }
        cout << "\n";
        cout << s2.size() << "\n";
        for(auto it: s2){
            cout << it << " ";
        }
        cout << "\n";
    }
}
int main(){
    solve();
}