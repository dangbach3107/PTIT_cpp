#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen ("output.txt", "w", stdout);
using namespace std;
using ll = long long;

int prime(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    return n > 1;
}

int main(){
    int n; cin >> n;
    int a[n][n];
    f0(i, n)f0(j, n) cin >> a[i][j];
    int m; cin >> m;
    int b[m][m];
    f0(i, m)f0(j, m) cin >> b[i][j];
    f0(i, n)f0(j, n){
        a[i][j] *= b[i % m][j % m];
    }
    f0(i, n){
        f0(j, n) cout << a[i][j] << " ";
        cout << endl;
    }
}