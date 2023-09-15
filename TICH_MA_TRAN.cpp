#include<bits/stdc++.h>
 
using namespace std;
#define ll long long
#define el '\n'
#define F(i, a, b) for(int i = a; i < b; i++)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);
#define MOD 1000000007
#define MAXN 1000005

int main(){
    int n, m , p;
    cin >> n >> m >> p;
    int a[n][m], b[m][p], c[n][p];
    for(int i = 0; i < n ; i++){
        for(int j = 0; j < m ; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < m ; i++){
        for(int j = 0; j < p ; j++){
            cin >>b[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < p; j++){
            c[i][j] = 0;
            for(int k = 0; k < m; k++){
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < p; j++){
            cout << c[i][j] << " ";
        }
        cout <<el;
    }
}