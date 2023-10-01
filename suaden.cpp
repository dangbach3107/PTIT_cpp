#include<bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read ios::sync_with_stdio(false); cin.tie(nullptr);\
               freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
using namespace std;

int main(){
    int n, k, b;
    cin >> n >> k >> b;
    vector <int> a(n + 1, 0);
    f1(i, b){
        int tmp; cin >> tmp;
        a[tmp] = 1;
    }
    int x = 0;
    f1(i, k){
        if(a[i] == 1) x++;
    }
    int y = x;
    for(int i = k + 1; i <= n; i++){
        x = x + a[i] - a[i - k];
        y = min(y, x);
    }
    cout << y;
}