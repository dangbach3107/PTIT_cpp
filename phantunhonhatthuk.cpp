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
        int n ; cin >> n;
        int k; cin >> k;
        vector <int> v;
        for(int i = 0 ; i < n; i++){
            int tmp; cin >> tmp;
            v.pb(tmp);
        }
        sort(v.begin(), v.end());
        cout << v[k - 1] << el;
    }

}