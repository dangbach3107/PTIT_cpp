#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define el '\n'
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define pb push_back
#define fast() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

int main(){
    ifstream cin;
    cin.open("DATA.in");
    int n, m;cin >> n >> m;
    set <int> a;
    set <int> b;
    f0(i,n){
        int x;cin >> x;
        a.insert(x);
    }
    f0(i, m) {
        int x;cin >> x;
        b.insert(x);
    }
    for(auto s : a){
        if(b.find(s) != b.end()) cout << s << " ";
    }
}