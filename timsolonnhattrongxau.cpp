#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define el '\n'
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define pb push_back
#define fast() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

void solve(){
    int sum = 0;
    string s; cin >> s;
    s+= 'a';
    int max = 0;
    int tmp = 0;
    for(int i = 0; i < s.size(); i++){
        if(isdigit(s[i])){
            tmp = tmp * 10 + s[i] - 48;
        }
        else{
            if(max < tmp) max = tmp;
            tmp = 0;
        }
    }
    cout << max << el;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}
