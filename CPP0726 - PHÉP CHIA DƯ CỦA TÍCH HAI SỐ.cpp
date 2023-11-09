#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen ("output.txt", "w", stdout);
using namespace std;
using ll = long long;

ll du(ll a, ll b, ll c){
    if(b == 0) return 0;
    ll tmp = du(a, b / 2, c);
    if(b & 1) return (tmp + tmp + a) % c;
    else return (tmp + tmp) % c;
}

int main(){
    //read;
    int t; cin >> t;
    while(t--){
        ll a, b, c; cin >> a >> b >> c;
        cout << du(a, b , c) << endl;
    }
}