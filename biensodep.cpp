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

bool check1(string s){
    for(int i = 0; i < s.size() - 1;i++){
        if(s[i] >= s[i + 1]) return 0;
    }
    return 1;
}
bool check2(string s){
    char a = s[0];
    for(auto x : s) if(x != a) return 0;
    return 1;
}
bool check3(string s){
    if(s[0] == s[1] && s[1] == s[2] && s[3] == s[4]) return 1;
    return 0;
}
bool check4(string s){
    for(auto x : s){
        if(x != '6' && x != '8') return 0;
    }
    return 1;
}


void solve(){
    string s; cin >> s;
    string x = "";
    for(int i = 5; i < s.size(); i++){
        if(isdigit(s[i])) x += s[i];
    }
    if(check1(x)  || check2(x) || check3(x) || check4(x)) cout << "YES\n";
    else cout << "NO\n";
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}
