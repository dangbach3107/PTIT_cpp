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
    int sum = 0;
    string s; cin >> s;
    s+= 'a';
    int tmp = 0;
    for(int i = 0; i < s.size(); i++){
        if(isdigit(s[i])){
            tmp = tmp * 10 + s[i] - 48;
        }
        else{
            sum += tmp;
            tmp = 0;
        }
    }
    cout << sum << el;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}
