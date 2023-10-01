#include<bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read ios::sync_with_stdio(false); cin.tie(nullptr);\
               freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
using namespace std;

int n, a[100][100], cnt;

int Try(int i, int j, int cnt){
    if(i > n || j > n)return 0;
    if(i == n && j == n) return cnt == a[i][j];
    return Try(i + 1, j , cnt - a[i][j]) + Try(i, j + 1, cnt - a[i][j]);
}

int main(){
    read;
    int t; cin >> t;
    while(t--){
        cin >> n >> cnt;
        f1(i, n) f1(j, n) cin >> a[i][j];
        cout << Try(1, 1, cnt) << endl;
    }
}