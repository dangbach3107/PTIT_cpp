#include<bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read ios::sync_with_stdio(false); cin.tie(nullptr);\
               freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        f0(i, n) cin >> a[i];
        int l = 0, r = n - 1, cnt = 0;
        while(l <= r){
            if(a[r] == a[l]){
                l++; r--;
            }
            else if(a[l] < a[r]) {
                l++;cnt++;
                a[l] += a[l - 1];
            }
            else{
                r--;cnt++;
                a[r] += a[r + 1];
            }
        }
        cout << cnt << endl;
    }
}