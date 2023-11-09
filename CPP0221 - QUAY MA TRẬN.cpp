#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen ("output.txt", "w", stdout);
using namespace std;
using ll = long long;

int main(){
    read;
    int t; cin >> t;
    while(t--){
        int n, m; cin >> n >> m;
        vector <vector<int>> a(n, vector<int>(m)), b(m, vector<int>(n));
        f0(i, n) f0(j, m) cin >> a[i][j];
        int h1 = 0, h2 = n - 1, c1 = 0, c2 = m - 1;
        while(c1 < c2 && h1 < h2){
            int pre = a[h1 + 1][c1];
            for(int i = c1 ; i <= c2; i++){
                swap(pre, a[h1][i]);
            }
            h1++;
            if(c1 <= c2 && h1 <= h2){
                for(int i = h1; i <= h2; i++){
                    swap(pre, a[i][c2]);
                }
            }
            c2--;
            if(c1 <= c2 && h1 <= h2){
                for(int i = c2; i >= c1; i--){
                    swap(pre, a[h2][i]);
                }
                h2--;
            }
            if(c1 <= c2 && h1 <= h2){
                for(int i = h2; i >= h1; i--){
                    swap(pre, a[i][c1]);
                }
                c1++;
            }
        }
        f0(i, n) f0(j, m) cout << a[i][j] << " ";
        cout << endl;
    }
}