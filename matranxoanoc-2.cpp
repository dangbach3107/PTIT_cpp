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
    int n , m; cin >> n >> m;
    int a[n][m];
    f0(i, n){
        f0(j, m) cin >> a[i][j];
    }
    int l = 0, r = m - 1, t = 0, b = n - 1;
    vector <int> v;
    while(l <= r && t <= b){
        for(int i = l; i <= r && l <= r && t <= b; i++){
            v.pb(a[t][i]);
        }
        t++;
        for(int i = t; i <= b && l <= r && t <= b; i++){
            v.pb(a[i][r]);
        }
        r--;
        for(int i = r ; i >= l && l <= r && t <= b; i--){
            v.pb(a[b][i]);
        }
        b--;
        for(int i = b; i >= t && l <= r && t <= b; i--){
            v.pb(a[i][l]);
        }
        l++;
    }
    for(int i = v.size() - 1; i >= 0; i--) cout << v[i] << " ";
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
