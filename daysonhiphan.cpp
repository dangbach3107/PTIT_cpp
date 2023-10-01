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
        int a[n], b[n];
        f0(i, n) cin >> a[i];
        f0(i, n) cin >> b[i];
        int max = 0;
        f0(i, n){
            int sum1 = 0, sum2 = 0;
            for(int j = i; j < n; j++){
                sum1 += a[j]; sum2 += b[j];
                if(sum1 == sum2 && j - i + 1 > max){
                    max = j - i + 1;
                }
            }
        }
        cout << max << endl;
    }
}