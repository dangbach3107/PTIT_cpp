#include<bits/stdc++.h>
using namespace std;
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read ios::sync_with_stdio(false); cin.tie(nullptr);\
               freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout); 
#define ll long long int
using namespace std;

vector<bool> a(1000005, 1);

void ktao(){
    a[0] = 0; a[1] = 0;
    for(int i = 2; i < sqrt(1000005); i++){
    if(a[i]){
        for(int j = i * i; j < 1000005; j+= i){
            a[j] = 0;
        }
    }
}
}

bool smith(ll n){
    ll tmp = n, sum = 0;
    while(tmp){
        sum += tmp % 10;
        tmp /= 10;
    }
    for(int i = 2; i <= sqrt(n); i++){
        while(n % i == 0){
            ll x = i;
            while(x){
                sum -= x % 10;
                x /= 10;
            }
            n /= i;
        }
    }
    if(n > 1){
        ll x = n;
        while(x){
                sum -= x % 10;
                x /= 10;
            }
    }
    return !sum;
}
int main() {
    ktao();
    int t; cin >> t;
    while (t--) {
        ll x; cin >> x;
        if (a[x]) {
            cout << "NO\n";
        }
        else if (smith(x)) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
    return 0;
}