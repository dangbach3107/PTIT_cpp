#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen ("output.txt", "w", stdout);
using namespace std;

int main(){
    //read;
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector <long long> a(n);
        f0(i, n)cin >> a[i];
        long long max =-1e9;
        for(int i = 0; i < n; i++){
            if(max < a[i]) max = a[i];
            long long tmp = a[i];
            for(int j = i + 1; j < n; j++){
                tmp *= a[j];
                if(max < tmp) max = tmp;
            }
        }
        cout << max << endl;
    }
}