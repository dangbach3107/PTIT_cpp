#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen ("output.txt", "w", stdout);
using namespace std;
using ll = long long;

int main(){
    //read;
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n][n];
        map <int, int> mp;
        f0(i, n){
            f0(j, n){
                cin >> a[i][j];
            }
        }
        f0(i, n) mp[a[0][i]] = 1;
        f1(i, n - 1){
            f0(j, n){
                if(mp[a[i][j]] == i){
                    mp[a[i][j]]++;
                }
            }
        }
        int cnt = 0;
        for(auto x : mp){
            if(x.second == n) cnt++;
        }
        cout << cnt << endl;
    }
}