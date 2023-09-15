#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el '\n'
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define pb push_back
#define fast() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define MOD 1000000007
#define MAXN 1000005

void solve(){
    int n; cin >> n;
    int a[n][n];
    int b1[n * n];
    for(int i = 0 ;i < n * n; i++) cin >> b1[i];
    sort(b1, b1 + n * n);
    int index = 0;
    int l = 0,  t = 0, r = n-1 ,b = n -1;
    while(l <= r && t <= b){
        for(int i = l; i <= r && l <= r && t <= b; i++){
            a[t][i] = b1[index++];
        }
        t++;
        for(int i = t; i <= b && l <= r && t <= b; i++){
            a[i][r] = b1[index++];
        }
        r--;
        for(int i = r ; i >= l && l <= r && t <= b; i--){
            a[b][i] = b1[index++];
        }
        b--;
        for(int i = b; i >= t && l <= r && t <= b; i--){
            a[i][l] = b1[index++];
        }
        l++;
    }
    f0(i, n){
        f0(j,n){
            cout << a[i][j] << ' ';
        }
        cout << el;
    }
}

int main(){
    fast();
    solve();
    return 0;
}