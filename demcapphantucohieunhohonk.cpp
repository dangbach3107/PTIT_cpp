#include<bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read ios::sync_with_stdio(false); cin.tie(nullptr);\
               freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
using namespace std;
#define ll long long

ll pos(ll a[], ll l, ll r, ll x){
    ll pos = -1;
    while(l <= r){
        ll mid = (l + r) / 2;
        if(a[mid] < x){
            pos = mid;
            l = mid + 1;
        }
        else{
            r = mid - 1;
        }
    }
    return pos;
}

int main(){
    int t; cin >> t;
    while(t--){
        ll n, k; cin >> n >> k;
        ll a[n];
        f0(i, n) cin >> a[i];
        sort(a, a + n);
        ll cnt = 0;
        f0(i, n -1){
            ll tmp = pos(a, i + 1, n - 1, k + a[i]);
            if(tmp != -1) cnt += tmp - i;
        }
        cout << cnt <<endl;
    }
}