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

void solve(){ 
    vector<string> vs;
    string tmp;
    while(cin >> tmp){
        for(auto &x : tmp) x = tolower(x);
        vs.pb(tmp);
    }
    cout << vs.back() ;
    for(int i = 0; i < vs.size() - 1; i++){
        cout << vs[i][0];
    }
    cout << "@ptit.edu.vn";
}



int main(){
    fast();
    solve();
}