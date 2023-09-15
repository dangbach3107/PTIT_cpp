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
    int n; cin >> n;
    int a[n];
    f0(i, n) cin >> a[i];
    sort(a, a + n);
    int s1 = a[0], s2 = -1e9;
    f0(i, n - 1){
        if(a[i + 1] != a[i]) {
            s2 = a[i + 1];
            break;
        }
    }
    if(s2 > 0) cout << s1 << ' ' << s2 << el;
    else cout << -1 << el;
}

int main(){
    fast();
    int t; cin >> t;
    while(t--) solve();
}