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
    string s;
    cin >> s;
    int cnt[256] = {0};
    for(auto x : s) cnt[x]++;
    int max = 0;
    for(int i = 'a' ; i <= 'z' ;i++) {
        if(max < cnt[i]) max = cnt[i];
    }
    int x = s.size();
    if(x & 1){
        if(max > x / 2 + 1) cout << "0\n";
        else cout << "1\n";
    }
    else {
        if(max > x / 2) cout << "0\n";
        else cout << "1\n";
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}