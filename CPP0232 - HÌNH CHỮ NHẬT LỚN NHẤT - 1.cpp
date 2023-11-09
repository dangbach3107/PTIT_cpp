#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen ("output.txt", "w", stdout);
using namespace std;
using ll = long long;

bool cmp(int a, int b) {return a > b;}

int main(){
    //read
    int t; cin >> t;
    while(t--){
        int n, m; cin >> n >> m;
        int res = 0;
        vector <vector <int>> v(n + 1, vector<int> (m + 1, 0));
        f1(i, n) f1(j, m) {
            cin >> v[i][j];
        }
        f1(i, n) f1(j, m){
            if(v[i][j]){
                v[i][j] = v[i - 1][j] + 1;
            }
        }
        f1(i, n){
            sort(v[i].begin() + 1, v[i].end(), cmp);
        }
        f1(i, n){ f1(j, m) res = max(res, j * v[i][j]);}
        cout << res <<endl;
    }
}