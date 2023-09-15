#include<bits/stdc++.h>
using namespace std;
#define el '\n'
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define pb push_back
#define read ios::sync_with_stdio(false); cin.tie(nullptr);\
               freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout); 
#define ll long long int

using namespace std;

int main() {
    read;
    int T;
    cin >> T;
    
    while (T--) {
        int n, k; cin >> n >> k;
        int a[n];
        int cnt1 = 0, cnt2 = 0;
        f0(i, n) {
            cin >> a[i];
            if(a[i] <= k) cnt1++;
        }
        f0(i, cnt1){
            if(a[i] > k) cnt2++;
        }
        int res = cnt2;
        for(int i = 0, j = cnt1; j < n; i++, j++){
            if(a[i] > k) cnt2--;
            if(a[j] > k) cnt2++;
            res =min(res, cnt2);
        }
        cout << res << endl;
    }
    
    return 0;
}
