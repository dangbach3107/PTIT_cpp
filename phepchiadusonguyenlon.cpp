#include<bits/stdc++.h>
using namespace std;
#define el '\n'
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define pb push_back
#define read ios::sync_with_stdio(false); cin.tie(nullptr);\
               freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout); 
#define ll long long int

int main(){
    int t; cin >> t;
    while(t--){
        string x;
        ll y;
        cin >> x >> y;
        ll res = 0;
        for(auto token : x){
            res = (res * 10 + token - 48) % y;
        }
        cout << res << el;
    }
}

