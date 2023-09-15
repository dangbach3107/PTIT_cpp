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


int prime(int n){
    for(int  i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    return n > 1;
}

int sotang(int n){
    while(n > 9){
        if(n % 10 <= ((n / 10) % 10)) return 0;
        n /= 10;
    }
    return 1;
}

int sogiam(int n){
    while(n > 9){
        if(n % 10 >= ((n / 10) % 10)) return 0;
        n /= 10;
    }
    return 1;
}

void solve(){
    int n, cnt = 0;
     cin >> n;
     for(int i = pow(10, n -1 ); i < pow(10, n ); i++){
        if((sotang(i) || sogiam(i)) && prime(i)) cnt++;
     }
     cout << cnt << el;
}

int main(){
    fast();
    int t; cin >> t;
    while(t--) {
        solve();
    }
}