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
        set <int> s1, s2;
        f0(i, n){
            int tmp; cin >> tmp;
            s1.insert(tmp);
        }
        f0(i, m){
            int tmp; cin >> tmp;
            if(s1.find(tmp) != s1.end()) s2.insert(tmp);
            s1.insert(tmp);
        }
        for(auto x : s1) cout << x << ' ';
        cout << el;
        for(auto x : s2) cout << x << ' ';
        cout << el;
     }
}