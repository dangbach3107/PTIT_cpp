#include<bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read ios::sync_with_stdio(false); cin.tie(nullptr);\
               freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
using namespace std;
#define ll long long

ll du(ll a, ll b, ll m){
    ll res = 1;
    while(b){
        if(b & 1){
            res = (res* a) % m;
        }
        a =(a  * a ) % m;
        b /= 2;
    }
    return res;
}

int main(){
    int t; cin >> t;
    while(t--){
        string a; 
        ll b, m;
        cin >> a >> b >> m;
        ll res = 0;
        f0(i, a.size()){
            res = (res * 10 + a[i] - '0') % m;
        }
        cout << du(res, b , m);
    }
}