#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define el '\n'
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define pb push_back
#define fast() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

bool check(string s, vector <string> v){
    for(auto x : v){
        if(s == x) return 1;
    }
    return 0;
}

int main(){
    ifstream in;
    in.open("VANBAN.in");
    vector <string> v;
    string s;
    while(in >> s){
        for(auto &x : s) x = tolower(x);
        if(!check(s, v)){
            v.pb(s);
        }
    }
    sort(v.begin(), v.end());
    for(auto x : v) cout << x << el;
}