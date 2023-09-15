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
    int a[n + 1];
    f1(i, n){
        cin >> a[i];
        if(a[i] != i) {
            cout << i << el;
        }
    }
}

int main(){
    fast();
    int t; cin >> t;
    while(t--) solve();
}