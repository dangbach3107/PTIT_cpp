#include<bits/stdc++.h>
 
using namespace std;
#define ll long long
#define endl '\n'
#define F(i, a, b) for(int i = a; i < b; i++)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);
#define MOD 1000000007
#define MAXN 1000005

int n;

int main(){
    int t; cin >> t;
    while(t--){
        int n ; cin >> n;
        int a[n];
        for(int i =0; i < n ; i++ ) cin >> a[i];
        sort(a,a + n);
        cout << a[n - 1] << endl;
    }
}