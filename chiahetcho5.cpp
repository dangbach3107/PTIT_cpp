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
    string a;
    cin >> a;
    int res = 0;
    f0(i, a.size()){
        res = (res* 2 + a[i] - '0') % 5;
    }
    if(res == 0) cout << "Yes\n";
    else cout << "No\n";
}



int main(){fast(); int t; cin >> t; while(t--) solve();}