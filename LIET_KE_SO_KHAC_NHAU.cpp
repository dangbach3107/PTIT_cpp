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
    int t; cin >> t;
    int a[t];
    f0(i, t) cin >> a[i];
    int c[1005] = {0};
    f0(i, t) c[a[i]] = 1;
    f0(i, 1005) if(c[i]) cout << i << " ";
}