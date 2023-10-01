#include<bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read ios::sync_with_stdio(false); cin.tie(nullptr);\
               freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
using namespace std;
#define ll long long

int main(){
    int t; cin >> t;
    while(t--){
        int n;  cin >> n;
        ll a[n];
        int cnt = 0;
        f0(i, n){
            ll tmp; cin >> tmp;
            a[i] = tmp * tmp;
         }
        sort(a, a + n); 
        for(int i = 0; i < n - 1; i++){
            for(int j = i + 1; j < n; j++){
                if(binary_search(a, a + n, a[i] + a[j])){
                    cnt = 1;
                    break;
                }
                if(cnt) break;
            }
        }
        if(cnt) cout << "YES\n";
        else cout << "NO\n";
    }
}