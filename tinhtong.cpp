#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define el '\n'
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define pb push_back
#define fast() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

bool check(string s){
    for(char x : s){
        if(!isdigit(x)) return 0;
    }
    return s.size() < 11;
}

int main(){
    ifstream in;
    ofstream out;
    in.open("DATA.in");
    string s;
    ll sum = 0;
    while(in >> s){
        if(check(s)) sum += 1ll * stoi(s);
    }
    cout << sum;
}