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
    string s;
    cin >> s;
    f0(i, s.size()){
        if(i == 0 || s[i] != s[i - 1]){
            int dem = 0;
            for(int  j = i; j < s.size(); j++){
                if(s[j] == s[i])dem ++;
            }
            cout << s[i] << dem ;
        }
    }
    cout <<el;
}



int main(){
    fast();
    int t; cin >> t;
    while(t--){
    solve();}
}