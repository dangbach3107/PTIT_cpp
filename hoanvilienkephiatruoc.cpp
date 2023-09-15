#include<bits/stdc++.h>
using namespace std;
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read ios::sync_with_stdio(false); cin.tie(nullptr);\
               freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout); 
#define ll long long int
using namespace std;


int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        f0(i, n) cin >> a[i];
        prev_permutation(a, a + n);
        f0(i,n) cout << a[i] << " ";
        cout << endl;
    }
}