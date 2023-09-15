#include<bits/stdc++.h>
using namespace std;
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read ios::sync_with_stdio(false); cin.tie(nullptr);\
               freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout); 
#define ll long long int
using namespace std;

void solve(){
    int n , m, k; cin >> n >> m >> k;
    int a[n][m];
    f0(i, n){
        f0(j, m) cin >> a[i][j];
    }
    int l = 0, r = m - 1, t = 0, b = n - 1, cnt = 0;
    while(l <= r && t <= b){
        for(int i = l; i <= r && l <= r && t <= b; i++){
            cnt++;
            if(cnt == k) {
                cout << a[t][i] << endl;
                break;
            }
        }
        t++;
        for(int i = t; i <= b && l <= r && t <= b; i++){
            cnt++;
            if(cnt == k) {
                cout << a[i][r] << endl;
                break;
            }
        }
        r--;
        for(int i = r ; i >= l && l <= r && t <= b; i--){
            cnt++;
            if(cnt == k) {
                cout << a[b][i] << endl;
                break;
            }
        }
        b--;
        for(int i = b; i >= t && l <= r && t <= b; i--){
            cnt++;
            if(cnt == k) {
                cout << a[i][l] << endl;
                break;
            }
        }
        l++;
    }
}

int main(){
    int t; cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
