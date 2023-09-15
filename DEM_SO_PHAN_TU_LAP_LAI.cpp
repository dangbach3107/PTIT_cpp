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
    fast()
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        map <int, int> m;
        f0(i, n){
            int x; cin >> x;
            m[x]++;
        }
        int cnt = 0;
        for(auto x : m){
            if(x.second > 1) cnt += x.second;
        }
        cout << cnt << el;
    }
}