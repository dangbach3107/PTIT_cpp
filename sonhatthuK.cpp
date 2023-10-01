#include<bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read ios::sync_with_stdio(false); cin.tie(nullptr);\
               freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        int a[n];
        f0(i, n) cin >> a[i];
        sort(a, a + n);
        cout << a[k - 1]<< endl;
    }
}
