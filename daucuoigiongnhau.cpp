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
    int cnt = 0;
    for(int i = 0;i < s.size(); i++){
        for(int j = i; j < s.size(); j++){
            if(s[i] == s[j])cnt++;
        }
    }
    cout << cnt << el;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}
