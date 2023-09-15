#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define el '\n'
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define pb push_back
#define fast() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

void solve(){
    int res =0 ;
    string s; int k;
    cin >> s >> k;
    for(int i = 0; i < s.size(); i++){
        int d = 0; int cnt[26] = {0};
        for(int j = i; j < s.size();j++){
            if(cnt[s[j] - 'a'] == 0){
                cnt[s[j] - 'a'] = 1;
                d++;
            }
            if(d == k) res++;
            else if(d > k) break;
        }
    }
    cout << res << el;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}
