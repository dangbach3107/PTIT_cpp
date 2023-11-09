#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen ("output.txt", "w", stdout);
using namespace std;
using ll = long long;

int dx[8] = {-1, -1, -1, 0, 1, 1, 1, 0};
int dy[8] = {-1, 0, 1, 1, 1, 0, -1, -1};
int n, m ; 

void loang(vector <vector<int>> &a, int i, int j){
    if(a[i][j]){
        a[i][j] = 0;
        for(int k = 0; k < 8; k++){
            int i1 = i + dx[k], j1 = j + dy[k];
            if(0 <= i1 && i1 < n && 0 <= j1 && j1 < m){
                loang(a, i1, j1);
            }
        }
    }
}

int main(){
   // read;
    int t; cin >> t;
    while(t--){
        cin >> n >> m;
        vector <vector<int>> a(n, vector<int> (m));
        f0(i, n) f0(j, m) cin >> a[i][j];
        int cnt = 0;
        f0(i, n) f0(j, m) {
            if(a[i][j]){
                cnt++;
                loang(a, i, j);
            }
        }
        cout << cnt << endl;
    }
}