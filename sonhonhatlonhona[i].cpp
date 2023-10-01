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
        vector<ll> a(n), b;
        f0(i, n) {
            cin >> a[i];
        }
        b = a;
        sort(b.begin(), b.end());
        f0(i, n){
            auto pos = upper_bound(b.begin(), b.end(), a[i]);
            if(pos == b.end()) cout << "_ ";
            else cout << *pos << " ";
        }
        cout << endl;
    }
}