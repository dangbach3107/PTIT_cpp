#include<bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read ios::sync_with_stdio(false); cin.tie(nullptr);\
               freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
using namespace std;
#define ll long long

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        ll a[n],b [n];
        f0(i, n) cin >> a[i];
        b[0] = a[0] * a[1];
        b[n - 1] = a[n - 1] * a[n - 2];
        for(int i = 1; i <= n - 2; i++){
            b[i] = a[i - 1] * a[i + 1];
        }
        f0(i, n) cout << b[i] << " ";
        cout << endl;
    }
}