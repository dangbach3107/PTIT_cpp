#include<bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read ios::sync_with_stdio(false); cin.tie(nullptr);\
               freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
using namespace std;
#define ll long long

map<int, int> mp;

bool cmp(int a, int b){
    if(mp[a] == mp[b]) return a < b;
    else return mp[a] > mp[b];
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector <int> v(n);
        mp.clear();
        f0(i, n) {
            cin >> v[i];
            mp[v[i]]++;
        }
        sort(v.begin(), v.end(), cmp);
        f0(i, n) cout << v[i] << ' ';
        cout << endl;
    }
}