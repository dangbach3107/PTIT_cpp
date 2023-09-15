#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el '\n'
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define pb push_back
#define fast() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define MOD 1000000007
#define MAXN 1000005

int check(string s){
    for(int i = 0; i < s.size() -1 ; i++){
        if(s[i] > s[i + 1]) return 1;
    }
    return -1;
}

void solve(){
    string s;
    cin >> s;
    if(check(s) == -1) cout << -1 <<el;
    else{
        int index, max_index;
        int check = 1;
        for(int i = s.size() - 2;  i >= 0 && check; i--){
            int max = 0;
            max_index = -1, index = i;
            for(int j = i + 1; j < s.size(); j++){
                if(s[i] > s[j] && s[j] > max) {
                    max_index = j;
                    max = s[j];
                    check = 0;
                }
            }
        }
        swap(s[index], s[max_index]);
        cout << s << el;
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}
