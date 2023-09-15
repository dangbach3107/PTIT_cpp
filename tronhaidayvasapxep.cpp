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

int main(){
    fast();
    int t;cin >> t;
    while(t--){
        int n, m; cin >> n >> m;
        int a[n + m];
        f0(i, n + m) cin >> a[i];
        sort(a, a + n + m);
        f0(i, n + m) cout << a[i] << " ";
        cout << el;
    }
}