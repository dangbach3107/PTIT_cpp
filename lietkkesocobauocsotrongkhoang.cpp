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
int main(){
    ktao();
    int t; cin >> t;
    while(t--){
        int cnt = 0;
        ll a1, b; cin >> a1 >> b;
        for(int i = ceil(sqrt(a1)); i <= sqrt(b); i++){
            if(a[i]) cnt++;
        }
        cout << cnt << endl;;
    }
}