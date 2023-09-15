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

ll p;

ll pow(ll a, ll b){
    if(!b) return 1;
    
    if(b & 1) {
        ll tmp = pow(a, b - 1);
        return (a * tmp)% p;
    }
    else {
        ll tmp = pow(a, b / 2);
        return(tmp * tmp )% p;}
}

void solve(){
    ll a, b;
    cin >> a >> b >> p;
    cout << pow(a, b) << el;
}

int main(){
    fast();
    int t; cin >> t;
    while(t--) solve();
}
