#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen ("output.txt", "w", stdout);
using namespace std;

int main(){
    //read;
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        long long a[n];
        vector<long long> b(n, 1);
        f0(i, n)cin >> a[i];
        b[0] = 1;
        long long res = 1;
        f1(i, n - 1){
            for(int j = i - 1; j >= 0; j--){
                if(a[i] > a[j]) {b[i] = max(b[j] + 1, b[i]); }
            }
            res = max(res, b[i]);
        }
        cout << res << endl;
    }
}