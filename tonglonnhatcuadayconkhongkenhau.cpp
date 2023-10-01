#include<bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read ios::sync_with_stdio(false); cin.tie(nullptr);\
               freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
using namespace std;

using ll = long long;

int main(){
    //read;
    int t; cin >> t;
    while(t--){
        int n;
        cin >> n;
        ll a[n];
        f0(i, n) {
            cin >> a[i];
        }
        a[1] = max(a[0], a[1]);
        for(int i = 2; i < n;i++){
            a[i] = max(a[i - 1], a[i - 2] + a[i]);
        }
        cout << a[n - 1] <<endl;
    }
}