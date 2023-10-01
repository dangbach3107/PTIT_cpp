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
        int n, x;
        cin >> n >> x;
        vector<int> v(n);
        int check = 0;
        f0(i, n) cin >> v[i];
        sort(v.begin(), v.end());
        f0(i, n - 1){
            if(binary_search(v.begin(), v.end(), x + v[i])){
                cout << "1\n";
                check = 1;
                break;
            }
        }
        if(!check) cout << "-1\n";
    }
}