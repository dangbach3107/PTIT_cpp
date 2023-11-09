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
        int a[n];
        f0(i, n ) cin >> a[i];
        int cong = 0, max = 0;
        f0(i, n){
            int dem = 0;
            while(a[i]){
                if(!(a[i] & 1)){
                    a[i] /= 2; dem++;
                }
                else {
                    a[i]--;
                    cong++;
                }
            }
            if(max < dem) max = dem;
        }
        cout << cong + max << endl;
     }
}