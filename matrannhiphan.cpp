#include<bits/stdc++.h>
 
using namespace std;
#define ll long long
#define el '\n'
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i<= a; i++)
#define pb push_back
#define fast() ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);
#define MOD 1000000007
#define MAXN 1000005

int main(){
    int n ; cin >> n;
    int a[n][3];
    for(int i = 0; i < n; i++){
        for(int k = 0; k < 3; k++){
            cin >> a[i][k];
        }
    }
    int cnt = 0;
    for(int i  = 0; i < n; i++){
        int dem  = 0;
        f0(j, 3){
            if(a[i][j] == 1) dem++;
        }
        if(dem >= 2) cnt++;
    }
    cout << cnt;
}