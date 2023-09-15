#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define el '\n'
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define pb push_back
#define fast() ios::sync_with_stdio(false); cin.tie(nullptr); 
#define read() freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);

void siu(stri)

int main(){
    //read();
    int t; cin >> t;
    cin.ignore();
    vector <string> a;
    while(t--){
        vector <string> v;
        string s;
        getline(cin, s);
        stringstream ss(s);
        string tmp;
        while(ss >> tmp){
            for(auto &x : tmp) x = tolower(x);
            v.pb(tmp);
        }
        s = "";
        s += v.back();
        for(int i = 0 ; i < v.size() - 1; i++) s += v[i][0];
        if(check(s, a)) { cout << s << check(s, a) + 1 << "@ptit.edu.vn\n"; a.pb(s); }
        else{
            a.pb(s);
            cout << s << "@ptit.edu.vn\n";
        }
    }
}