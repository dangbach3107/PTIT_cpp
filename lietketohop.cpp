#include<bits/stdc++.h>
using namespace std;
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read ios::sync_with_stdio(false); cin.tie(nullptr);\
               freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout); 
#define ll long long int
using namespace std;
int n, k, a[20], ok;

void ktao(){
    f1(i, k) a[i] = i;
}

void sinh(){
    int i = k;
    while(i >= 1 && a[i] == n - k + i){
        i--;
    }
    if(i == 0){
        
        ok = 0;
        return;
    }
    a[i]++;
    for(int j = i + 1; j <= k; j++){
        a[j] = a[j - 1] + 1;
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        ok = 1;
        cin >> n >> k;
        ktao();
        while(ok){
            f1(i, k) cout << a[i];
            cout << " ";
            sinh();
        }
        cout << endl;
    }
}