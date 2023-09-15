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
        int n , k;
        cin >> n >> k;
        int a[n * k];
        f0(i, n * k) {
            cin >> a[i];
        }
        sort(a, a + n * k);
        for(auto x : a) cout << x << " ";
        cout << el;
    }
}