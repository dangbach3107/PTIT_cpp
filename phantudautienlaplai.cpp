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
    int n;cin >> n;
    multiset <int> ms;
    int check = 1;
    
    while(n--){
        int tmp; cin >> tmp;
        if(ms.find(tmp) == ms.end()) ms.insert(tmp);
        else if(check){
            check = 0;
            cout << tmp << el;
        }
    }
    
        if(check) cout << -1 << el;
}



int main(){
    fast();
    int t; cin >> t;
    while(t--) solve();
}