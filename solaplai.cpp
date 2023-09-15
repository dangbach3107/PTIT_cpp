#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el '\n'
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i<= a; i++)
#define pb push_back
#define fast() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define MOD 1000000007
#define MAXN 1000005

ll gcd(ll a, ll b){
    if(b == 0 ) return a;
    return gcd(b, a%b);
}

void solve(){
    ll a, x, y; cin >> a >> x >> y;
    int k = gcd(x, y);
    while(k--) cout << a ;
    cout << el;
    
}

int main(){
    fast();
    int t; cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}