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

int bs(vector <int> a, int k){
    int l = 0, r = a.size() - 1;
    while(l <= r){
        int m = (l + r)/ 2;
        if(k == a[m]) return 1;
        else if(k < a[m]) r = m - 1;
        else l = m + 1;
    }
    return -1;
}

void solve(){
    int n, k ; cin >> n >> k;
    vector <int > a;
    while(n--){
        int tmp; cin >> tmp;
        a.pb(tmp);
    }
    sort(a.begin(), a.end());
    cout << bs(a, k) << el;
}

int main(){
    fast();
    int t; cin >> t;
    while(t--) solve();
}