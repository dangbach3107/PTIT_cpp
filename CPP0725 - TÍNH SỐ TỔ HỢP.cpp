#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen ("output.txt", "w", stdout);
using namespace std;

const int mod = 1e9 + 7;
vector<long long> v(1005, 1);
long long binpow(int a, int p){
    if(p == 0) return 1;
    long long tmp = binpow(a, p / 2);
    if(p & 1){
        return ((tmp * tmp) % mod * a) % mod;
    }
    else return (tmp * tmp) % mod;
}

int main(){
    read;
    int t; cin >> t;
    f1(i, 1004) v[i] = (v[i - 1] * i) % mod;
    while(t--){
        int n, k; cin >> n >> k;
        long long tu = v[n];
        long long mau = (v[n - k] * v[k]) % mod;
        mau = binpow(mau, mod - 2);
        cout << (tu * mau) % mod << endl;
    }
}