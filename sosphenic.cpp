#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el '\n'
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i<= a; i++)
#define pb push_back
#define fast() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define MOD 1000000007
#define MAXN 1000005

bool check (int n){
    int cnt = 0;
    for(int i = 2; i <= sqrt(n); i++){
        int kt = 0;
        while(n % i == 0){
            cnt++;
            kt++;
            if(kt == 2) return 0;
            n /= i;
        }
    }
    if(n > 1) cnt++;
    return cnt == 3;
}

void solve(){
    int n; cin >> n;
    cout << check(n) << el;
}

int main(){
    fast();
    int t; cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
