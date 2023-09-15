#include<bits/stdc++.h>
 
using namespace std;
#define ll long long
#define endl '\n'
#define F(i, a, b) for(int i = a; i < b; i++)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);
#define MOD 1000000007
#define MAXN 1000005

int n, a[MAXN];

int main() {
    faster();
    int t; cin >> t;
    while(t--){
        cin >> n;
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a, a + n);
        int s = 1e9;
        for(int i = 0; i < n - 1; i++){
            s = min(s, a[i + 1] - a[i]);
        }
        cout << s << endl;
    }
}
