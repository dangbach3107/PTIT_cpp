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


    ll F[1000];
void solve(){ 
    F[0] = 0; F[1] = 1;
    for(int i = 2; i <= 1000; i++){
        F[i] = (F[i - 1] + F[i - 2]) % MOD;
    }
}



int main(){
    fast();
    int t; cin >> t; 
    solve();
    while(t--) {
        int k ; cin >> k;
        cout << F[k] << el;
    }
}