#include<bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read ios::sync_with_stdio(false); cin.tie(nullptr);\
               freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        long long a[n];
        f0(i, n) cin >> a[i];
        long long res = 0;
        int mod = 1e9 + 7;
        f0(i, n){
            res = (res * x + a[i]) % mod;
        }
        cout << res << endl;
    }
}