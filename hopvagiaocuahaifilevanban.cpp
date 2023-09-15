#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define el '\n'
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define pb push_back
#define fast() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

int main(){
    ifstream in;
    in.open("DATA1.in");
    set <string> a, b, c;
    string s;
    while(in >> s){
        for(auto &x : s) x = tolower(x);
        a.insert(s);
        c.insert(s);
    }
    in.close();
    in.open("DATA2.in");
    while(in >> s){
        for(auto &x : s) x = tolower(x);
        a.insert(s);
        b.insert(s);
    }
    for(auto x : a) cout << x << " " ; cout << el; 
    for(auto x : c) {
        if(b.find(x) != b.end()) cout << x << " " ; 
    }
}