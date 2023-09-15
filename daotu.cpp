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
    string s,x;
    getline(cin , s);
    stringstream ss(s);
    vector <string> v;
    while(ss >> x){
        v.pb(x);    
    }
    for(int i = v.size() -1 ; i >= 0; i--){
        cout << v[i] << " ";
    }
    cout << el;
}



int main(){
    fast();
    int t; cin >> t; cin.ignore();
    while(t--) solve();
}