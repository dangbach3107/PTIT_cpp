#include<bits/stdc++.h>
using namespace std;
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read ios::sync_with_stdio(false); cin.tie(nullptr);\
               freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout); 
#define ll long long int
using namespace std;

bool check(ll a){
    if(a > 1e12) return 0;
    ll sum = 1;
    for(int i = 2; i <= sqrt(a); i++){
        if(a % i == 0) {
            sum += i;
            if(i * i != a) sum += a / i;
        }
        
    }
    return sum == a;
}

int main(){
    int t; cin >> t;
    while(t--){
        ll a;
        cin >> a;
        cout << check(a) << endl;
    }
}