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
    int sum = 0;
    vector<char> v;
    for(auto x : s){
        if(isdigit(x)) sum += x - '0';
        else v.pb(x);
    }
    sort(v.begin(), v.end());
    for(auto x : v) cout << x;
    cout <<sum << el;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}
