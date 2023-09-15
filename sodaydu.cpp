#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el '\n'
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define pb push_back
#define fast() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define MOD 1000000007
#define MAXN 1000005


void solve(){
    string s; cin >> s;
    int cnt[256] = {0};
    if(s[0] == '0'){
        cout << "INVALID\n";
            return;
    }
    for(auto x : s){
        if(!isdigit(x)){
            cout << "INVALID\n";
            return;
        }
        else cnt[x] = 1;
    }
    for(int i = '0' ; i<= '9'; i++){
        if(!cnt[i]) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}
