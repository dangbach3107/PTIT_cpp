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
    int n, k;
    cin >> n >> k;
    int a[n]; int cnt = 0;
    f0(i, n) cin >> a[i];
    f0(i, n - 1){
        for(int j = i + 1; j < n; j++){
            if(a[i] + a[j] * a[j] == k) cnt++;
        }
    }
    cout << cnt;
}