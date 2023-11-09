#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen ("output.txt", "w", stdout);
using namespace std;

int main(){
    //read;
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        vector<int> a(n);
        f0(i, n) cin >> a[i];
        int max = -1e9, l , r;
        for(int i = 0; i < n - k + 1; i++){
            int sum = 0;
            for(int j = i; j < i + k; j++){
                sum += a[j];
            }
            if(sum > max){
                l = i; r = i + k - 1;
                max = sum;
            }
        }
        for(int i = l; i <= r; i++) cout << a[i] << " ";
        cout << endl;
    }
}