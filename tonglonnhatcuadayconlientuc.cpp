#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen ("output.txt", "w", stdout);
using namespace std;

int main(){
    //read;
    int t; cin>>t;
    while(t--){
        int n; cin >> n;
        long long a[n];
        f0(i, n) cin >> a[i];
        long long res = a[0];
        for(int i = 1; i < n ; i++){
            a[i] = max(a[i], a[i] + a[i -1]);
            res = max(res, a[i]);
        }
        cout << res << endl;
    }
}