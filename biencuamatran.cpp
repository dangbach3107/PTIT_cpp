#include<bits/stdc++.h>
 
using namespace std;
#define ll long long
#define el '\n'
#define F(i, a, b) for(int i = a; i < b; i++)
#define pb push_back
#define fast() ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);
#define MOD 1000000007
#define MAXN 1000005

int main(){
    fast();
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n][n];
        for(int i = 0; i < n ; i++){
            for(int j = 0; j  < n; j++){
                cin >> a[i][j];
            }
        }
        for(int i = 0; i < n ; i++){
            for(int j = 0; j  < n; j++){
                if(i == 0 || j == 0 || i == n - 1 || j == n - 1){
                    cout << a[i][j] << " ";
                }
                else cout << "  ";
            }
            cout << el;
        }
    }
}