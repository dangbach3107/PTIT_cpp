#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el '\n'
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define pb push_back
#define fast() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define MOD 1000000007
#define MAXN 1000005

void solve(){
    string s; cin >> s;
    map<char, int> mp;
    mp['a'] = 2; mp['b'] = 2; mp['c'] = 2; mp['d'] = 3; mp['e'] = 3; mp['f'] = 3; mp['g'] = 4; mp['h'] = 4; mp['i'] = 4; mp['j'] = 5; mp['k'] = 5;
    mp['l'] = 5; mp['m'] = 6; mp['n'] = 6; mp['o'] = 6; mp['p'] = 7; mp['q'] = 7; mp['r'] = 7; mp['s'] = 7; mp['t'] = 8; mp['u'] = 8; mp['v'] = 8; mp['w'] = 9;
    mp['x'] = 9; mp['y'] = 9; mp['z'] = 9;

    int l = 0, r = s.size() - 1;
    while(l <= r){
        s[l] = tolower(s[l]);
        s[r] = tolower(s[r]);
        if(mp[s[l]] != mp[s[r]]) {
            cout << "NO\n";
            return;
        }
        l++; r--;
    }
    cout << "YES\n";
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}
