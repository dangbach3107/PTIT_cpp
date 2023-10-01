#include<bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read ios::sync_with_stdio(false); cin.tie(nullptr);\
               freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        f0(i, n) cin >> a[i];
        int x = - 1;
        f0(i, n - 1){
            for(int j = i + 1; j < n; j++){
                x = max(x, a[j] - a[i]);
            }
        }
        cout << x << endl;
    }
}