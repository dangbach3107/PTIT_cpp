#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el '\n'
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i<= a; i++)
#define pb push_back
#define fast() ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);
#define MOD 1000000007
#define MAXN 1000005

void solve(){
    ll n, k; cin >> n >> k;
    ll a[n];
    for(auto &x : a) cin >> x;
    f0(i, n){
        if(a[i] == k) {
            cout << i + 1 << el;
            return;
        }
    }
    cout << -1 << el;
}

int main(){
    fast();
    int t; cin >> t;
    while(t--) solve();
}