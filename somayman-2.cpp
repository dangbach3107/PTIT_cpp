#include<bits/stdc++.h>
using namespace std;
#define el '\n'
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define pb push_back
#define read() ios::sync_with_stdio(false); cin.tie(nullptr);\
               freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout); 
#define ll long long int
bool smm(string s){
    ll sum = 0;
    for(int i = 0; i < s.size(); i++){
        sum += 1ll * (s[i] - '0');
    }
    if(sum == 9) return 1;
    else if(sum < 9) return 0;
    else return(smm (to_string(sum)));
}

int main(){
    read();
    int t; cin >> t;
    while(t--){
        string s;
        cin >> s;
        cout << smm(s) << el;
    }
}              