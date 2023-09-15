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
    int n, s; cin >> n >> s;
    if(s > 9 * n || s < 1) {
        cout << "-1 -1\n";
        return;
    }
    string max = "", min = "";
    while(s > 9){
        max += '9';
        s -= 9;
    }
    if(max.size() != n) max+= s + '0';
    while(max.size() != n) max+= '0';
    min = max;
    reverse(min.begin(), min.end());
    if(min[0] == '0'){
        min[0] = '1';
        for(int i = min.size() - 1; i >= 0;i--){
            if(min[i] != '9') {
                min[i]--;
                break;
            } 
        }
    }
    cout << min << ' ' << max;
}

int main(){
    fast();
    solve();
}