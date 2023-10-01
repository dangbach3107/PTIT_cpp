#include<bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read ios::sync_with_stdio(false); cin.tie(nullptr);\
               freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
using namespace std;

using ll = long long;
ll mod = 1e9 + 7;

ll factorial(ll n) {
    ll result = 1;
    for (ll i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}
ll combination(ll n, ll k) {
    return (factorial(n) % mod * (factorial(k) * factorial(n - k)) % mod) % mod;
}

int main(){
    int t; cin >> t;
    while(t--){
        ll n, k; cin >> n >> k;
        cout << combination(n, k)  << endl;
    }
}