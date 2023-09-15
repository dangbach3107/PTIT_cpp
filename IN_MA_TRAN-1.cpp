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
        int col = 0;
        for(int i = 0; i < n ; i++){
            if(col % 2 == 0){
                for(int j = 0; j < n; j++){
                    cout << a[i][j] << " ";
                }
                col++;
            }
            else{
                for(int j = n - 1; j >= 0; j--){
                    cout << a[i][j] << " ";
                }
                col++;
            }
        }
        cout << el;

    }
}