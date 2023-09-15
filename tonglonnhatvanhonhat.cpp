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
    string a, b;
    cin >> a >> b;
    for(auto &x : a) if(x == '5') x = '6';
    for(auto &x : b) if(x == '5') x = '6';
    ll s1 = stoll(a) + stoll(b);
    for(auto &x : a) if(x == '6') x = '5';
    for(auto &x : b) if(x == '6') x = '5';
    ll s2 = stoll(a) + stoll(b);
    cout << s2 << ' ' << s1 << el;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}