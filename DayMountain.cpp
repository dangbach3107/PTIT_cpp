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

bool check(vector<int> v){
    int max = -1e9;
    f0(i, v.size()){
        if(v[i] > v[i + 1]){
            max = i;
            break;
        }
    }
    for(int i= max; i < v.size(); i++){
        if(v[i] < v[i + 1]) return 0;
    }
    return 1;
}

void solve(){
    int n; cin >> n;
    vector<int> v;
    f0(i,n){
        int x; cin >> x;
        v.pb(x);
    }
    int l, r; cin >> l >> r;
    vector<int> x ;
    for(int i = l ; i <= r; i++){
        x.pb(v[i]);
    }
    if(check(x)) cout <<"Yes\n";
    else cout <<"No\n";
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}