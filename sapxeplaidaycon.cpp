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
    fast();
    int t;cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> v1, v2;
        f0(i, n) {
            int tmp; cin >> tmp;
            v1.pb(tmp);
        }
        v2 = v1;
        sort(v2.begin(), v2.end());
        f0(i, n){
            if(v1[i] != v2[i]) {
                cout << i + 1 << " ";
                break;
            }
        }
        for(int i = n - 1; i >= 0; i--){
            if(v1[i] != v2[i]){
                cout << i + 1 <<el;
                break;
            }
        }
     }
}